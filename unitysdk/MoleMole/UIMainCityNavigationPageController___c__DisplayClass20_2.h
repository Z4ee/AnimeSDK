#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14B8C210)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_2__ONUIOPEN_B__4_OFFSET UNITYSDK_OFFSET(0x14B8C220)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController___c__DisplayClass20_2_TypeDefinitionIndex = 72492;

	class UIMainCityNavigationPageController___c__DisplayClass20_2 : public ::System::Object
	{
	public:
		::System::Int32 areaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__4(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_2__ONUIOPEN_B__4_OFFSET))(this, x);
		}
	};
}
