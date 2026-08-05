#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_REWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E9D6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardV3_PopWindowController_RewardContext_TypeDefinitionIndex = 51968;

	class UIHadalZone_RewardV3_PopWindowController_RewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ZoneID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV3_POPWINDOWCONTROLLER_REWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
