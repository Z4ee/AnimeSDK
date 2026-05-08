#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRidusGotBooChangeClothPageController_CurSuitLevel.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_694;
namespace MoleMole { class UIRidusGotBooChangeClothPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CHANGECLOTHING_B__0_OFFSET UNITYSDK_OFFSET(0x1301D5A0)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1301D590)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c__DisplayClass44_0_TypeDefinitionIndex = 79210;

	class UIRidusGotBooChangeClothPageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooChangeClothPageController* __4__this; // 0x10
		::Class_2_208CC9941471731A_694* config; // 0x18
		::MoleMole::UIRidusGotBooChangeClothPageController_CurSuitLevel curSuitLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeClothing_b__0(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CHANGECLOTHING_B__0_OFFSET))(this, _);
		}
	};
}
