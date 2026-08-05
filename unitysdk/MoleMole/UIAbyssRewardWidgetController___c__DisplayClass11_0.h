#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssRewardWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197AEF20)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x197AEF30)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x197AEFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 70286;

	class UIAbyssRewardWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssRewardWidgetController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* temp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this);
		}
	};
}
