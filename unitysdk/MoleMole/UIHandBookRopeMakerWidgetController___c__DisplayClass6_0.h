#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB4EE0)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONGAMEPADMODULEFOCUS_B__0_OFFSET UNITYSDK_OFFSET(0x16AB4EF0)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONGAMEPADMODULEFOCUS_B__1_OFFSET UNITYSDK_OFFSET(0x16AB4F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRopeMakerWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 57643;

	class UIHandBookRopeMakerWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadNestedListDelegate* nested; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGamepadModuleFocus_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONGAMEPADMODULEFOCUS_B__0_OFFSET))(this);
		}

		::System::Void _OnGamepadModuleFocus_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONGAMEPADMODULEFOCUS_B__1_OFFSET))(this);
		}
	};
}
