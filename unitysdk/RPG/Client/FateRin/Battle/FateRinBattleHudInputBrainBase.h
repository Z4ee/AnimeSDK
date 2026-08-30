#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1348;
class Class_0_16E4307DCC419505_1373;
class Class_0_16E4307DCC419505_1374;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputSource; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE_ATTACH_OFFSET UNITYSDK_OFFSET(0xCF805F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE_DETACH_OFFSET UNITYSDK_OFFSET(0xCF806E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF75F90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__GETHANDCARDINDEXFROMMODEL_OFFSET UNITYSDK_OFFSET(0xCF81110)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__ISCARDALLOWEDBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCF76680)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__ONINPUTDEVICECLASSSWITCH_OFFSET UNITYSDK_OFFSET(0xCF81080)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__ONINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0xCF810D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__SUBSCRIBEINPUTDEVICECLASSSWITCH_OFFSET UNITYSDK_OFFSET(0xCF807C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__SUBSCRIBEINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0xCF80A10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__TRYPLAYANDNOTIFYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCF77200)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__UNSUBSCRIBEINPUTDEVICECLASSSWITCH_OFFSET UNITYSDK_OFFSET(0xCF80E70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__UNSUBSCRIBEINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0xCF80C60)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudInputBrainBase_TypeDefinitionIndex = 79603;

	class FateRinBattleHudInputBrainBase : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* _HitTestService; // 0x10
		::Class_0_16E4307DCC419505_1373* _InputDeviceClassSwitchSource; // 0x18
		::Class_0_16E4307DCC419505_1348* _TutorialService; // 0x20
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* _CardArea; // 0x28
		::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* _AttachedSource; // 0x30
		::Class_0_16E4307DCC419505_1374* _InputInterruptSource; // 0x38

		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1348* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1348*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Attach(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE_ATTACH_OFFSET))(this, a1);
		}

		::System::Void Detach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE_DETACH_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitch(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__ONINPUTDEVICECLASSSWITCH_OFFSET))(this, a1);
		}

		::System::Void _OnInputInterrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__ONINPUTINTERRUPTED_OFFSET))(this);
		}

		::System::Void _SubscribeInputDeviceClassSwitch(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__SUBSCRIBEINPUTDEVICECLASSSWITCH_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeInputDeviceClassSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__UNSUBSCRIBEINPUTDEVICECLASSSWITCH_OFFSET))(this);
		}

		::System::Void _SubscribeInputInterrupted(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__SUBSCRIBEINPUTINTERRUPTED_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeInputInterrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__UNSUBSCRIBEINPUTINTERRUPTED_OFFSET))(this);
		}

		::System::Boolean _IsCardAllowedByTutorial(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__ISCARDALLOWEDBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean _TryPlayAndNotifyTutorial(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__TRYPLAYANDNOTIFYTUTORIAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetHandCardIndexFromModel(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDINPUTBRAINBASE__GETHANDCARDINDEXFROMMODEL_OFFSET))(this, a1);
		}
	};
}
