#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1A2EDE60)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1A2EE030)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0x1A2EE200)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0x1A2EE190)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A2EE120)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EE270)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int StateParkourAnimEvent_TypeDefinitionIndex = 70827;

	class StateParkourAnimEvent : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::RPG::Client::ParkourGame::EffectConfig Config; // 0x18
		::System::Collections::Generic::Queue_1<::System::String*>* _Keys; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}
	};
}
