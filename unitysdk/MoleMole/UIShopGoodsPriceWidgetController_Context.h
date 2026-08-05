#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_179;

#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1518F370)

namespace MoleMole
{
	inline static constexpr unsigned int UIShopGoodsPriceWidgetController_Context_TypeDefinitionIndex = 85882;

	class UIShopGoodsPriceWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_179* GoodsData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
