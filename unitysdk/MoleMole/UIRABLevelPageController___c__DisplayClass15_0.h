#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABPageController; }

#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15325F30)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER___C__DISPLAYCLASS15_0__ONUICLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x15325F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController___c__DisplayClass15_0_TypeDefinitionIndex = 78505;

	class UIRABLevelPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABPageController* rabPage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER___C__DISPLAYCLASS15_0__ONUICLOSE_B__0_OFFSET))(this);
		}
	};
}
