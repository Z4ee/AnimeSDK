#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191698D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapOnlinePlayerItemPageController_Context_TypeDefinitionIndex = 82974;

	class UIUrbanMapOnlinePlayerItemPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
