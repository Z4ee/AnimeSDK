#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIShoppingMallMemberWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137855B0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x137855C0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x13785600)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallMemberWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 63754;

	class UIShoppingMallMemberWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIShoppingMallMemberWidgetController* __4__this; // 0x10
		::Struct_2_3659D99D9E0DCBB9_3 onceReward_Item; // 0x18
		::Struct_2_3659D99D9E0DCBB9_3 dayReward_Item; // 0x28

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
