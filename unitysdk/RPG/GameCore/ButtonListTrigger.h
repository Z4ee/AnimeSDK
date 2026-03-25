#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xA8938C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA892D90)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA892F60)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA8932D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xA893BE0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xA893FD0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA8949B0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET UNITYSDK_OFFSET(0xA893CA0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xA8945A0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xA8949C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET UNITYSDK_OFFSET(0xA893000)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET UNITYSDK_OFFSET(0xA892B30)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET UNITYSDK_OFFSET(0xA893330)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xA893530)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET UNITYSDK_OFFSET(0xA8934E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA892920)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET UNITYSDK_OFFSET(0xA892DE0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET UNITYSDK_OFFSET(0xA8930C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET UNITYSDK_OFFSET(0xA8933F0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET UNITYSDK_OFFSET(0xA893380)
#define RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8949D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xA8949E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xA8949F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonListTrigger_TypeDefinitionIndex = 46328;

	class ButtonListTrigger : public ::Class_1_87854DF4F09D42E1
	{
	public:
		::RPG::GameCore::GameEntity* _ContextOwner; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* _RuntimeButtons; // 0xA0
		::System::Single InteractAngleRange; // 0xA8
		::System::Single _CD; // 0xAC
		::System::Single OwnerForwardAngleRange; // 0xB0
		::System::Boolean _IsInTriggerRegion; // 0xB4
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xB5
		::System::Boolean ConsiderAngleLimit; // 0xB6
		::System::Boolean _IsTriggerUIShowing; // 0xB7
		::System::Boolean ConsiderOwnerForwardAngleLimit; // 0xB8

		::System::Void _ctor(::RPG::GameCore::GameEntity* contextOwner, ::RPG::GameCore::GameEntity* triggerOwner, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* buttons)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CTOR_OFFSET))(this, contextOwner, triggerOwner, buttons);
		}

		::System::Void _CheckButtonIDUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* guestEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET))(this, guestEntity);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* guestEntity, ::RPG::GameCore::TriggerExitReason exitReason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET))(this, guestEntity, exitReason);
		}

		::System::Void _EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET))(this);
		}

		::System::Void _DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckCDLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET))(this);
		}

		::System::Void _TickCD(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET))(this, dt);
		}

		::System::Void _ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET))(this);
		}

		::System::Boolean _CheckInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET))(this);
		}

		::System::Boolean _CheckAllLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET))(this);
		}

		::System::Void DoOnTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean _CheckIfInInteractionAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET))(this);
		}

		::System::Boolean CheckIfInOwnerForwardAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET))(this);
		}

		::System::Void OnUIButtonConfirm(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET))(this, arg);
		}

		::System::Void EnableButtons(::System::Collections::Generic::List_1<::System::String*>* buttons, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET))(this, buttons, enable);
		}

		::System::Void RefreshRuntimeConfig(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* overrideConfigs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET))(this, overrideConfigs);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
		}
	};
}
