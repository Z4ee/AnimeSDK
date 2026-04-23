#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_PROPOPTIONTRIGGER_DISABLEUI_OFFSET UNITYSDK_OFFSET(0xB71CE80)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB71CE30)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xB71CF50)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xB71D150)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xB71D1B0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEOPTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xB71D960)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEUI_OFFSET UNITYSDK_OFFSET(0xB71CFC0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB71D9E0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB71DA00)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_RESETCD_OFFSET UNITYSDK_OFFSET(0xB71D860)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB71D9F0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB71DA10)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB71DA20)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CHECKCUSTOMSTRINGVAILD_OFFSET UNITYSDK_OFFSET(0xB71D510)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB71CCE0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__GENOPTIONS_OFFSET UNITYSDK_OFFSET(0xB71D2D0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xB71CD30)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__ONOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB71D610)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB71DA60)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xB71DA70)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xB71DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOptionTrigger_TypeDefinitionIndex = 53027;

	class PropOptionTrigger : public ::Class_1_59305B446B42427E
	{
	public:
		static ::System::String** StaticGet_TriggerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropOptionTrigger_TypeDefinitionIndex)->GetStaticField(0x489F0);
		}
		::RPG::GameCore::PropOptionTrigger_ButtonParam* _CurrentButtonParam; // 0x98
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* _AllOptionList; // 0xA0
		::Il2CppArray<::System::Boolean>* _OptionAvailableStateList; // 0xA8
		::System::Single _CD; // 0xB0
		::System::Boolean _IsInTriggerRegion; // 0xB4
		::System::Boolean DestroyPropAfterTrigger; // 0xB5
		::System::Boolean _UIShowing; // 0xB6
		::System::Boolean _DisableWhenTriggered_k__BackingField; // 0xB7
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xB8

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
