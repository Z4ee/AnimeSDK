#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197D51E0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197D5220)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__ONMENUBTNCLICK_B__23_0_OFFSET UNITYSDK_OFFSET(0x197D5290)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__SETNUMBER_B__10_2_OFFSET UNITYSDK_OFFSET(0x197D5230)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotServeRightPanelWidgetController___c_TypeDefinitionIndex = 42696;

	class UIActivityHotPotServeRightPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotServeRightPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D8A0);
		}
		static ::MoleMole::UIActivityHotPotServeRightPanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotPotServeRightPanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotServeRightPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D8A8);
		}
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotServeRightPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetNumber_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__SETNUMBER_B__10_2_OFFSET))(this);
		}

		::System::Void _OnMenuBtnClick_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER___C__ONMENUBTNCLICK_B__23_0_OFFSET))(this);
		}
	};
}
