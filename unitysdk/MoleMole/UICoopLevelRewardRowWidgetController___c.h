#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17617450)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17617490)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__ONCLICKGETREWARD_ASYNC_B__11_0_OFFSET UNITYSDK_OFFSET(0x176174A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController___c_TypeDefinitionIndex = 51342;

	class UICoopLevelRewardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICoopLevelRewardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopLevelRewardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopLevelRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0A0);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICoopLevelRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F0A8);
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
