#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class GachPoolRewardConfigRow; }

#define RPG_CLIENT_GACHAPOOLREWARDDATA_GETRELATEDACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0xD0FD130)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD0FCE30)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_ACTIVITYTITLE_OFFSET UNITYSDK_OFFSET(0xD0FCFD0)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0xD0FCDE0)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_QUESTDISPLAY_OFFSET UNITYSDK_OFFSET(0xD0FCD60)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_RELATEDAVATARID_OFFSET UNITYSDK_OFFSET(0xD0FCE80)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDBUBBLE_OFFSET UNITYSDK_OFFSET(0xD0FCCF0)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDDESC_OFFSET UNITYSDK_OFFSET(0xD0FCC10)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDQUEST_OFFSET UNITYSDK_OFFSET(0xD0FCA60)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDTIPS_OFFSET UNITYSDK_OFFSET(0xD0FCC80)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDTITLE_OFFSET UNITYSDK_OFFSET(0xD0FCBA0)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD0FCF10)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_ISRELATEDACTIVITYSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xD0F8ED0)
#define RPG_CLIENT_GACHAPOOLREWARDDATA_ISREWARDTAKEABLE_OFFSET UNITYSDK_OFFSET(0xD0F8DA0)
#define RPG_CLIENT_GACHAPOOLREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0FC780)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaPoolRewardData_TypeDefinitionIndex = 64382;

	class GachaPoolRewardData : public ::System::Object
	{
	public:
		::RPG::Client::BaseGachaPoolData* _PoolData; // 0x10
		::RPG::GameCore::GachPoolRewardConfigRow* _Row; // 0x18

		::System::Void _ctor(::RPG::GameCore::GachPoolRewardConfigRow* a1, ::RPG::Client::BaseGachaPoolData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachPoolRewardConfigRow*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::QuestData* get_RewardQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDQUEST_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDTIPS_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardBubble()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_REWARDBUBBLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_QuestDisplay()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_QUESTDISPLAY_OFFSET))(this);
		}

		::System::UInt32 get_GachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_GACHAID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_RelatedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_RELATEDAVATARID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_ActivityTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GET_ACTIVITYTITLE_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* GetRelatedActivityPanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_GETRELATEDACTIVITYPANELDATA_OFFSET))(this);
		}

		::System::Boolean IsRelatedActivityShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_ISRELATEDACTIVITYSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsRewardTakeable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDDATA_ISREWARDTAKEABLE_OFFSET))(this);
		}
	};
}
