#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAreaGoodsWidgetController; }

#define MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFA620)
#define MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONCLICKOPERATE_B__0_OFFSET UNITYSDK_OFFSET(0x13EFA630)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 62676;

	class UIAreaGoodsWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAreaGoodsWidgetController* __4__this; // 0x10
		::System::Boolean isBuying; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickOperate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONCLICKOPERATE_B__0_OFFSET))(this);
		}
	};
}
