#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151CD520)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController_Context_TypeDefinitionIndex = 44445;

	class UIGroceryActivityPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A865FEC42C70DCB5 activityType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
