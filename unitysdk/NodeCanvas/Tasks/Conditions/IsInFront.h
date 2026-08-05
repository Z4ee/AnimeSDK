#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF94D80)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EF94DC0)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EF95100)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF953F0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsInFront_TypeDefinitionIndex = 31416;

	class IsInFront : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* checkTarget; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
