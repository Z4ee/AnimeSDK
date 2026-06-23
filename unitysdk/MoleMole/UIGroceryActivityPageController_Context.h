#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x171F5FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController_Context_TypeDefinitionIndex = 73776;

	class UIGroceryActivityPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_7AEF4D15E4700EEA activityType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
