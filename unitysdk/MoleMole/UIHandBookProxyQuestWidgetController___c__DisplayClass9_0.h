#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A320D0)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x15A320E0)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x15A32160)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 41032;

	class UIHandBookProxyQuestWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadNestedListDelegate* nested; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHSTATE_B__0_OFFSET))(this);
		}

		::System::Void _RefreshState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHSTATE_B__1_OFFSET))(this);
		}
	};
}
