#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GroceryItemIconV2Context; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIShoppingMallCurrencyWidgetWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1273EF40)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x1273EF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCurrencyWidgetWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 80062;

	class UIShoppingMallCurrencyWidgetWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::GroceryItemIconV2Context* context; // 0x10
		::MoleMole::UIShoppingMallCurrencyWidgetWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__2(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITVIEW_B__2_OFFSET))(this, binderInfo);
		}
	};
}
