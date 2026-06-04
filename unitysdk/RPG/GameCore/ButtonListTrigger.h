#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xCD3F430)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD3E970)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCD3EB40)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xCD3EEB0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xCD3F6E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xCD3FB40)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCD403B0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET UNITYSDK_OFFSET(0xCD3F7A0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xCD40060)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCD403C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET UNITYSDK_OFFSET(0xCD3EBE0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET UNITYSDK_OFFSET(0xCD3E730)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET UNITYSDK_OFFSET(0xCD3EF10)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xCD3F110)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET UNITYSDK_OFFSET(0xCD3F0C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3E4D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET UNITYSDK_OFFSET(0xCD3E9C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET UNITYSDK_OFFSET(0xCD3ECA0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET UNITYSDK_OFFSET(0xCD3EFD0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET UNITYSDK_OFFSET(0xCD3EF60)
#define RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD403D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCD403E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xCD403F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonListTrigger_TypeDefinitionIndex = 53713;

	class ButtonListTrigger : public ::Class_1_A696AB4980B3D7B5
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* _RuntimeButtons; // 0x98
		::RPG::GameCore::GameEntity* _ContextOwner; // 0xA0
		::System::Single _CD; // 0xA8
		::System::Boolean _IsInTriggerRegion; // 0xAC
		::System::Boolean ConsiderOwnerForwardAngleLimit; // 0xAD
		::System::Boolean ConsiderAngleLimit; // 0xAE
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xAF
		::System::Boolean _IsTriggerUIShowing; // 0xB0
		::System::Single OwnerForwardAngleRange; // 0xB4
		::System::Single InteractAngleRange; // 0xB8

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CheckButtonIDUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
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

		::System::Void _TickCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET))(this, a1);
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

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIfInInteractionAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET))(this);
		}

		::System::Boolean CheckIfInOwnerForwardAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET))(this);
		}

		::System::Void OnUIButtonConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET))(this, a1);
		}

		::System::Void EnableButtons(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshRuntimeConfig(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
		}
	};
}
