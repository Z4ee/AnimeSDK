#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GroceryItemIconV2Context; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIShoppingMallCurrencyWidgetWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156B6F10)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x156B6F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCurrencyWidgetWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 65966;

	class UIShoppingMallCurrencyWidgetWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIShoppingMallCurrencyWidgetWidgetController* __4__this; // 0x10
		::MoleMole::GroceryItemIconV2Context* context; // 0x18

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
