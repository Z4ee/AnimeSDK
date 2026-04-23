#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xAC2C570)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xAC2C740)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xAC2C910)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xAC2C8A0)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC2C830)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2C980)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xAC2CA10)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xAC2CA20)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xAC2CA50)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xAC2CA40)
#define RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAC2CA30)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int StateParkourAnimEvent_TypeDefinitionIndex = 68332;

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

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateMove(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEMOVE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateIK(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_STATEPARKOURANIMEVENT___IFIXBASEPROXY_ONSTATEIK_OFFSET))(this, P0, P1, P2);
		}
	};
}
