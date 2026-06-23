#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x122C8600)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapWindWidgetController_Context_TypeDefinitionIndex = 58974;

	class UIUrbanMapWindWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
