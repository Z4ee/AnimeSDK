#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIGACHAPANELWIDGET_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x18585720)
#define MOLEMOLE_UIGACHAPANELWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18585730)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPanelWidget_TypeDefinitionIndex = 83041;

	class UIGachaPanelWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPANELWIDGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPANELWIDGET_GET_IGNOREFADING_OFFSET))(this);
		}
	};
}
