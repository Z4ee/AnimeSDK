#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1749FCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectPageController_Context_TypeDefinitionIndex = 75280;

	class UIZenkovCollectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TabId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
