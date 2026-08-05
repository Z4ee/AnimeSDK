#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140CF8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSellPrepareRecycleWidgetController_Context_TypeDefinitionIndex = 78828;

	class UISummerTideSellPrepareRecycleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLPREPARERECYCLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
