#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONATTACKLISTENER_OFFSET UNITYSDK_OFFSET(0x9FB91B0)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONDYINGFINISHLISTENER_OFFSET UNITYSDK_OFFSET(0x9FB9250)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONATTACK_OFFSET UNITYSDK_OFFSET(0x9FB9110)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONDYINGFINISH_OFFSET UNITYSDK_OFFSET(0x9FB9160)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONATTACKLISTENER_OFFSET UNITYSDK_OFFSET(0x9FB9200)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONDYINGFINISHLISTENER_OFFSET UNITYSDK_OFFSET(0x9FB92A0)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB92F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleAnimatorSignal_TypeDefinitionIndex = 66768;

	class ChenLingBattleAnimatorSignal : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* Field_5_0; // 0x18
		::System::Action* Field_5_1; // 0x20

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
