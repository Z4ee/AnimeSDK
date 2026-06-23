#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D53DB50)
#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D53DBB0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D53DD80)
#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53DF30)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimPlayAnimation_TypeDefinitionIndex = 29929;

	class MecanimPlayAnimation : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* stateName; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* layerIndex; // 0x68
		::System::Boolean waitUntilFinish; // 0x70
		::System::Boolean played; // 0x71
		::UnityEngine::AnimatorStateInfo stateInfo; // 0x74
		::System::Single transitTime; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONUPDATE_OFFSET))(this);
		}
	};
}
