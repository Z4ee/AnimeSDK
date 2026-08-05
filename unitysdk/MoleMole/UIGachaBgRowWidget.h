#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIGACHABGROWWIDGET_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x1938EC00)
#define MOLEMOLE_UIGACHABGROWWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1938EC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaBgRowWidget_TypeDefinitionIndex = 65285;

	class UIGachaBgRowWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABGROWWIDGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABGROWWIDGET_GET_IGNOREFADING_OFFSET))(this);
		}
	};
}
