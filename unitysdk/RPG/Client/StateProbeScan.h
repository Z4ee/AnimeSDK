#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPROBESCAN_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x17B666B0)
#define RPG_CLIENT_STATEPROBESCAN_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x17B66760)
#define RPG_CLIENT_STATEPROBESCAN_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17B667F0)
#define RPG_CLIENT_STATEPROBESCAN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B66860)

namespace RPG::Client
{
	inline static constexpr unsigned int StateProbeScan_TypeDefinitionIndex = 65768;

	class StateProbeScan : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
