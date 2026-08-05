#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIMainCityNavigationPageController; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19865E50)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x19865E60)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x19865F20)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__ONUIOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x19865FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController___c__DisplayClass20_0_TypeDefinitionIndex = 57200;

	class UIMainCityNavigationPageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityNavigationPageController* __4__this; // 0x10
		::System::Boolean showUnlockAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__0(::System::Int32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__ONUIOPEN_B__0_OFFSET))(this, areaID);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _OnUIOpen_b__1(::System::Int32 areaID)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__ONUIOPEN_B__1_OFFSET))(this, areaID);
		}

		::System::Void _OnUIOpen_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS20_0__ONUIOPEN_B__2_OFFSET))(this);
		}
	};
}
