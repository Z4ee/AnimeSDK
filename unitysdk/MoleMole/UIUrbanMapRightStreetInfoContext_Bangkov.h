#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_BANGKOV__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC8D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Bangkov_TypeDefinitionIndex = 80470;

	class UIUrbanMapRightStreetInfoContext_Bangkov : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_BANGKOV__CTOR_OFFSET))(this);
		}
	};
}
