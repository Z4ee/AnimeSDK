#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER_REWARDSOURCESORTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x151AECC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureResultDialogPopWindowController_RewardSourceSortInfo_TypeDefinitionIndex = 66050;

	class UISummerTideTreasureResultDialogPopWindowController_RewardSourceSortInfo : public ::System::Object
	{
	public:
		::System::Int32 DropItemStar; // 0x10
		::System::UInt32 DropItemId; // 0x14
		::System::Int32 LeftIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER_REWARDSOURCESORTINFO__CTOR_OFFSET))(this);
		}
	};
}
