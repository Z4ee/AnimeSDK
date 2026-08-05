#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_STARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x187F1740)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestTipsPopWindowController_StarInfo_TypeDefinitionIndex = 60294;

	class UIFishingContestTipsPopWindowController_StarInfo : public ::System::Object
	{
	public:
		::System::Boolean UnlockAnim; // 0x10
		::System::Boolean IsLock; // 0x11
		::System::Boolean IsSpecial; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTTIPSPOPWINDOWCONTROLLER_STARINFO__CTOR_OFFSET))(this);
		}
	};
}
