#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerTideTreasureResultDialogPopWindowController; }
namespace MoleMole { class UISummerTideTreasureResultDialogPopWindowController_RewardSourceSortInfo; }
namespace MoleMole { class UISummerTideTreasureRewardItemWidgetController_Data; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160F31B0)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__INITVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x160F31C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureResultDialogPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 66052;

	class UISummerTideTreasureResultDialogPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UISummerTideTreasureResultDialogPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UISummerTideTreasureResultDialogPopWindowController_RewardSourceSortInfo*>* rewardSourceSortInfoMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitView_b__1(::MoleMole::UISummerTideTreasureRewardItemWidgetController_Data* a, ::MoleMole::UISummerTideTreasureRewardItemWidgetController_Data* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISummerTideTreasureRewardItemWidgetController_Data*, ::MoleMole::UISummerTideTreasureRewardItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__INITVIEW_B__1_OFFSET))(this, a, b);
		}
	};
}
