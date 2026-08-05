#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetController_2.h"

class Class_3_DB46D44D0B2BAA60;
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Level; }

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_LEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC3B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoController_Level_TypeDefinitionIndex = 72527;

	class UIUrbanMapRightStreetInfoController_Level : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetController_2<::Class_3_DB46D44D0B2BAA60*, ::MoleMole::UIUrbanMapRightStreetInfoContext_Level*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_LEVEL__CTOR_OFFSET))(this);
		}
	};
}
