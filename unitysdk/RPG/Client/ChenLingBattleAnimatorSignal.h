#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONATTACKLISTENER_OFFSET UNITYSDK_OFFSET(0xB5D3820)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ADDONDYINGFINISHLISTENER_OFFSET UNITYSDK_OFFSET(0xB5D38C0)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONATTACK_OFFSET UNITYSDK_OFFSET(0xB5D3760)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_ONDYINGFINISH_OFFSET UNITYSDK_OFFSET(0xB5D37C0)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONATTACKLISTENER_OFFSET UNITYSDK_OFFSET(0xB5D3870)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL_REMOVEONDYINGFINISHLISTENER_OFFSET UNITYSDK_OFFSET(0xB5D3910)
#define RPG_CLIENT_CHENLINGBATTLEANIMATORSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D3960)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleAnimatorSignal_TypeDefinitionIndex = 67708;

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
