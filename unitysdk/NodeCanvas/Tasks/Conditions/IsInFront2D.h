#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E8C7D60)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E8C7DA0)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1E8C8080)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C8360)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsInFront2D_TypeDefinitionIndex = 31120;

	class IsInFront2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* checkTarget; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
