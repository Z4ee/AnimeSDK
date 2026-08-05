#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_MAINPAGECONTROLLER_REWARDGROUP_MAINCONTEXT_GET_FOCUSTABINDEX_OFFSET UNITYSDK_OFFSET(0x191E73C0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_MAINPAGECONTROLLER_REWARDGROUP_MAINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191E7410)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_RewardGroup_MainPageController_RewardGroup_MainContext_TypeDefinitionIndex = 83959;

	class UIActivityFightUI_RewardGroup_MainPageController_RewardGroup_MainContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickPopularityGetInfo; // 0x28
		::System::String* PopularityRes; // 0x30
		::System::String* LeftTabName; // 0x38
		::System::String* RightTabName; // 0x40
		::System::Int32 PopularityItemMaxNum; // 0x48
		::System::Int32 FocusGroup; // 0x4C
		::System::Int32 PermanentRewardGroup_Tab1; // 0x50
		::System::Int32 PopularityNowNum; // 0x54
		::System::Int32 GeneralDetailDialogID; // 0x58
		::System::Int32 CurrencyItemID; // 0x5C
		::System::Int32 PermanentRewardGroup_Tab2; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_MAINPAGECONTROLLER_REWARDGROUP_MAINCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_FocusTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_MAINPAGECONTROLLER_REWARDGROUP_MAINCONTEXT_GET_FOCUSTABINDEX_OFFSET))(this);
		}
	};
}
