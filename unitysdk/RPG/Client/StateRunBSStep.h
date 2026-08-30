#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATERUNBSSTEP_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0EEEA0)
#define RPG_CLIENT_STATERUNBSSTEP_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE0EEFA0)
#define RPG_CLIENT_STATERUNBSSTEP__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EF2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateRunBSStep_TypeDefinitionIndex = 68807;

	class StateRunBSStep : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean _isRunBS_R; // 0x18
		::System::Boolean _isRunBS_L; // 0x19
		::System::Boolean _isStop_R; // 0x1A
		::System::Boolean _isStop_L; // 0x1B
		::RPG::GameCore::AdventureCharacterController* _adventureCharacterCmpt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBSSTEP__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBSSTEP_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBSSTEP_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}
	};
}
