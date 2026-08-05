#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET03WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16104560)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightTastListWidget03WidgetController_Context_TypeDefinitionIndex = 47017;

	class UIUrbanMapRightTastListWidget03WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET03WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
