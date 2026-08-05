#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIShoppingMallMemberWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8D950)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x15E8D960)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x15E8D9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallMemberWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 81627;

	class UIShoppingMallMemberWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Struct_2_3659D99D9E0DCBB9_7 dayReward_Item; // 0x10
		::MoleMole::UIShoppingMallMemberWidgetController* __4__this; // 0x20
		::Struct_2_3659D99D9E0DCBB9_7 onceReward_Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
