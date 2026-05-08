#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_LEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE46B980)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Level_TypeDefinitionIndex = 38702;

	class UIUrbanMapRightStreetInfoContext_Level : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::System::Int32 MapAreaId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_LEVEL__CTOR_OFFSET))(this);
		}
	};
}
