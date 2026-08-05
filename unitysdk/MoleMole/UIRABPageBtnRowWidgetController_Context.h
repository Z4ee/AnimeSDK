#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1DE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController_Context_TypeDefinitionIndex = 68942;

	class UIRABPageBtnRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean NotNormalShow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
