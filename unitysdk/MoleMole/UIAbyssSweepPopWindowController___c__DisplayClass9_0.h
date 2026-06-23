#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssSweepPopWindowController; }
namespace MoleMole { class UICasperShopContext; }

#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16445750)
#define MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__GOTOSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x16445760)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssSweepPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 85663;

	class UIAbyssSweepPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UICasperShopContext* shopContext; // 0x10
		::MoleMole::UIAbyssSweepPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoToShop_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__GOTOSHOP_B__1_OFFSET))(this);
		}
	};
}
