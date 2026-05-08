#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3C090)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_1__ONUIOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x14D3C0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController___c__DisplayClass20_1_TypeDefinitionIndex = 72489;

	class UIMainCityNavigationPageController___c__DisplayClass20_1 : public ::System::Object
	{
	public:
		::System::Int32 areaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__3(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_1__ONUIOPEN_B__3_OFFSET))(this, x);
		}
	};
}
