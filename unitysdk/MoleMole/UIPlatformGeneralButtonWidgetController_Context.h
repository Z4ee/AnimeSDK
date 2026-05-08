#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147E38A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlatformGeneralButtonWidgetController_Context_TypeDefinitionIndex = 57078;

	class UIPlatformGeneralButtonWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
