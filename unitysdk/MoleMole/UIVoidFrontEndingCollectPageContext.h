#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTENDINGCOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A123F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontEndingCollectPageContext_TypeDefinitionIndex = 67690;

	class UIVoidFrontEndingCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 EntranceId; // 0x28
		::System::Boolean OnlyShowMedalBtn; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTENDINGCOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
