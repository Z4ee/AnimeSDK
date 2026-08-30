#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace RPG::Client { class StateEnterTriggerAudioBehaviour_StateEnterAudioData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0EB360)
#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE0EB5E0)
#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xE0EBA90)
#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xE0EBA20)
#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0EB650)
#define RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EBB00)

namespace RPG::Client
{
	inline static constexpr unsigned int StateEnterTriggerAudioBehaviour_TypeDefinitionIndex = 68994;

	class StateEnterTriggerAudioBehaviour : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::StateEnterTriggerAudioBehaviour_StateEnterAudioData*>* StateEnterAudios; // 0x18
		::System::Single LastNormalizedTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERAUDIOBEHAVIOUR_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}
	};
}
