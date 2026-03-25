#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_PROPOPTIONTRIGGER_DISABLEUI_OFFSET UNITYSDK_OFFSET(0xAA1C9D0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA1C980)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAA1CAA0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAA1CCA0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xAA1CD00)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEOPTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xAA1D4B0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEUI_OFFSET UNITYSDK_OFFSET(0xAA1CB10)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1D530)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1D550)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_RESETCD_OFFSET UNITYSDK_OFFSET(0xAA1D3B0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1D540)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1D560)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA1D570)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CHECKCUSTOMSTRINGVAILD_OFFSET UNITYSDK_OFFSET(0xAA1D060)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA1C830)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__GENOPTIONS_OFFSET UNITYSDK_OFFSET(0xAA1CE20)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xAA1C880)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__ONOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1D160)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA1D5B0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAA1D5C0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAA1D5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOptionTrigger_TypeDefinitionIndex = 46352;

	class PropOptionTrigger : public ::Class_1_87854DF4F09D42E1
	{
	public:
		static ::System::String** StaticGet_TriggerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropOptionTrigger_TypeDefinitionIndex)->GetStaticField(0x44F90);
		}
		::Il2CppArray<::System::Boolean>* _OptionAvailableStateList; // 0x98
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* _AllOptionList; // 0xA0
		::RPG::GameCore::PropOptionTrigger_ButtonParam* _CurrentButtonParam; // 0xA8
		::System::Boolean _IsInTriggerRegion; // 0xB0
		::System::Boolean _UIShowing; // 0xB1
		::System::Boolean _DisableWhenTriggered_k__BackingField; // 0xB2
		::System::Boolean DestroyPropAfterTrigger; // 0xB3
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xB4
		::System::Single _CD; // 0xB8

		::System::Void _ctor(::RPG::GameCore::GameEntity* ownerProp, ::RPG::GameCore::TaskContext* ownerLevelGraphContext, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* optionList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__CTOR_OFFSET))(this, ownerProp, ownerLevelGraphContext, optionList);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* guestEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DOONENTER_OFFSET))(this, guestEntity);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* guestEntity, ::RPG::GameCore::TriggerExitReason exitReason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DOONEXIT_OFFSET))(this, guestEntity, exitReason);
		}

		::System::Void DoOnTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DOONTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _InitOptions(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* optionList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__INITOPTIONS_OFFSET))(this, optionList);
		}

		::System::Void EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEUI_OFFSET))(this);
		}

		::System::Void DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckCustomStringVaild(::System::String* customString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__CHECKCUSTOMSTRINGVAILD_OFFSET))(this, customString);
		}

		::System::Void _OnOptionTriggered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__ONOPTIONTRIGGERED_OFFSET))(this, arg);
		}

		::System::Void ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_RESETCD_OFFSET))(this);
		}

		::RPG::GameCore::PropOptionTrigger_ButtonParam* _GenOptions()
		{
			return ((::RPG::GameCore::PropOptionTrigger_ButtonParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__GENOPTIONS_OFFSET))(this);
		}

		::System::Void EnableOptionByIndex(::System::Int32 index, ::System::Boolean available)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEOPTIONBYINDEX_OFFSET))(this, index, available);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, value);
		}

		::System::Boolean get_DisableWhenTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableWhenTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
		}
	};
}
