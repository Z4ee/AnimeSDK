#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONATTACKLISTENER_OFFSET UNITYSDK_OFFSET(0xCB1D040)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONDYINGFINISHLISTENER_OFFSET UNITYSDK_OFFSET(0xCB1D0E0)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONATTACK_OFFSET UNITYSDK_OFFSET(0xCB1CF80)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONDYINGFINISH_OFFSET UNITYSDK_OFFSET(0xCB1CFE0)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONATTACKLISTENER_OFFSET UNITYSDK_OFFSET(0xCB1D090)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONDYINGFINISHLISTENER_OFFSET UNITYSDK_OFFSET(0xCB1D130)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1D180)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleAnimatorSignal_TypeDefinitionIndex = 72393;

	class ChenLingBattleAnimatorSignal : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* NEHKCKIPBPL; // 0x18
		::System::Action* HNJPDDPKNIE; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL__CTOR_OFFSET))(this);
		}

		::System::Void OnAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONATTACK_OFFSET))(this);
		}

		::System::Void OnDyingFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONDYINGFINISH_OFFSET))(this);
		}

		::System::Void AddOnAttackListener(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONATTACKLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveOnAttackListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONATTACKLISTENER_OFFSET))(this);
		}

		::System::Void AddOnDyingFinishListener(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONDYINGFINISHLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveOnDyingFinishListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONDYINGFINISHLISTENER_OFFSET))(this);
		}
	};
}
