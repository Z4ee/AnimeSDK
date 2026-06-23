#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D82A590)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D82A5D0)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D82B2D0)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82BC30)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY__ONCHECK_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D82BD80)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CanSeeTargetAny_TypeDefinitionIndex = 29152;

	class CanSeeTargetAny : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetObjects; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* closerResult; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* allResults; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* maxDistance; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x80
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* awarnessDistance; // 0x88
		::UnityEngine::RaycastHit hit; // 0x90
		::UnityEngine::Vector3 offset; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single _OnCheck_b__10_0(::UnityEngine::GameObject* x)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGETANY__ONCHECK_B__10_0_OFFSET))(this, x);
		}
	};
}
