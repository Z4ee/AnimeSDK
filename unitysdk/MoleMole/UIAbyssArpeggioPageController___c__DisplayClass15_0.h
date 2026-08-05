#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssArpeggioPageController; }

#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197AA960)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__DISPLAYCLASS15_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x197AA970)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioPageController___c__DisplayClass15_0_TypeDefinitionIndex = 41616;

	class UIAbyssArpeggioPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssArpeggioPageController* __4__this; // 0x10
		::System::Int32 targetIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___C__DISPLAYCLASS15_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}
