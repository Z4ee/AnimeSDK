#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER_REWARDITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15131250)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureResultDialogPopWindowController_RewardItemInfo_TypeDefinitionIndex = 66053;

	class UISummerTideTreasureResultDialogPopWindowController_RewardItemInfo : public ::System::Object
	{
	public:
		::System::UInt32 Count; // 0x10
		::System::UInt32 Id; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER_REWARDITEMINFO__CTOR_OFFSET))(this);
		}
	};
}
