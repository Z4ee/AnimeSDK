#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_PROPOPTIONTRIGGER_DISABLEUI_OFFSET UNITYSDK_OFFSET(0xCE89A50)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE89A00)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCE89B40)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xCE89D50)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xCE89DB0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEOPTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xCE8A540)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEUI_OFFSET UNITYSDK_OFFSET(0xCE89BB0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCE8A5C0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCE8A5E0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_RESETCD_OFFSET UNITYSDK_OFFSET(0xCE8A440)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCE8A5D0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCE8A5F0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE8A600)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CHECKCUSTOMSTRINGVAILD_OFFSET UNITYSDK_OFFSET(0xCE8A0F0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE898B0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__GENOPTIONS_OFFSET UNITYSDK_OFFSET(0xCE89ED0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xCE89900)
#define RPG_GAMECORE_PROPOPTIONTRIGGER__ONOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xCE8A1F0)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE8A640)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xCE8A650)
#define RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xCE8A660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOptionTrigger_TypeDefinitionIndex = 53737;

	class PropOptionTrigger : public ::Class_1_A696AB4980B3D7B5
	{
	public:
		static ::System::String** StaticGet_TriggerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropOptionTrigger_TypeDefinitionIndex)->GetStaticField(0x8A50);
		}
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* _AllOptionList; // 0x98
		::RPG::GameCore::PropOptionTrigger_ButtonParam* _CurrentButtonParam; // 0xA0
		::Il2CppArray<::System::Boolean>* _OptionAvailableStateList; // 0xA8
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xB0
		::System::Boolean _IsInTriggerRegion; // 0xB1
		::System::Boolean _UIShowing; // 0xB2
		::System::Boolean DestroyPropAfterTrigger; // 0xB3
		::System::Boolean _DisableWhenTriggered_k__BackingField; // 0xB4
		::System::Single _CD; // 0xB8

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Void _InitOptions(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__INITOPTIONS_OFFSET))(this, a1);
		}

		::System::Void EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEUI_OFFSET))(this);
		}

		::System::Void DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckCustomStringVaild(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__CHECKCUSTOMSTRINGVAILD_OFFSET))(this, a1);
		}

		::System::Void _OnOptionTriggered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__ONOPTIONTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_RESETCD_OFFSET))(this);
		}

		::RPG::GameCore::PropOptionTrigger_ButtonParam* _GenOptions()
		{
			return ((::RPG::GameCore::PropOptionTrigger_ButtonParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER__GENOPTIONS_OFFSET))(this);
		}

		::System::Void EnableOptionByIndex(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_ENABLEOPTIONBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableWhenTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableWhenTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
		}
	};
}
