#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputBrainBase.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_1348;
class Class_0_16E4307DCC419505_1372;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputSource; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCF683D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__ONINPUTDEVICECLASSSWITCH_OFFSET UNITYSDK_OFFSET(0xCF81430)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__SUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0xCF81170)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__SWITCHTOMODE_OFFSET UNITYSDK_OFFSET(0xCF811D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__UNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0xCF813C0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudInputModeRouter_TypeDefinitionIndex = 79605;

	class FateRinBattleHudInputModeRouter : public ::RPG::Client::FateRin::Battle::FateRinBattleHudInputBrainBase
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* _ActiveBrain; // 0x40
		::Class_0_16E4307DCC419505_1372* _InputBrainFactory; // 0x48
		::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* _Source; // 0x50
		::System::Nullable_1<::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode> _ActiveMode; // 0x58

		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1348* a3, ::Class_0_16E4307DCC419505_1372* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1348*, ::Class_0_16E4307DCC419505_1372*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__SUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__UNSUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _OnInputDeviceClassSwitch(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__ONINPUTDEVICECLASSSWITCH_OFFSET))(this, a1);
		}

		::System::Void _SwitchToMode(::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudInputMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTMODEROUTER__SWITCHTOMODE_OFFSET))(this, a1);
		}
	};
}
