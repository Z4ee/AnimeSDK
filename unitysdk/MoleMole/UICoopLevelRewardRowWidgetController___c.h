#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1517A100)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1517A140)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__ONCLICKGETREWARD_ASYNC_B__11_0_OFFSET UNITYSDK_OFFSET(0x1517A150)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController___c_TypeDefinitionIndex = 49747;

	class UICoopLevelRewardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICoopLevelRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA80);
		}
		static ::MoleMole::UICoopLevelRewardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopLevelRewardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopLevelRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickGetReward_Async_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__ONCLICKGETREWARD_ASYNC_B__11_0_OFFSET))(this);
		}
	};
}
