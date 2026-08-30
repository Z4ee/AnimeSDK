#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class GachaPoolRewardData; }
namespace RPG::Client { class QuestData; }

#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_GET_QUESTDESC_OFFSET UNITYSDK_OFFSET(0xD0FCB10)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_GET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0xD0FCA40)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_GET_REWARDQUEST_OFFSET UNITYSDK_OFFSET(0xD0FC820)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xD0FC8E0)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWEARLYACCESSREDDOT_OFFSET UNITYSDK_OFFSET(0xD0FC9E0)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xD0FC880)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD0FC790)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_SET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0xD0FCA50)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0FC5B0)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__INITGACHAPOOLREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD0FC610)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__ISNEEDSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xD0FC930)
#define RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xD0FC5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaPoolRewardActivityData_TypeDefinitionIndex = 61720;

	class GachaPoolRewardActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::GachaPoolRewardData* _RewardData_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Void _InitGachaPoolRewardData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__INITGACHAPOOLREWARDDATA_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsNeedShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA__ISNEEDSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowEarlyAccessRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_ISSHOWEARLYACCESSREDDOT_OFFSET))(this);
		}

		::RPG::Client::GachaPoolRewardData* get_RewardData()
		{
			return ((::RPG::Client::GachaPoolRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_GET_REWARDDATA_OFFSET))(this);
		}

		::System::Void set_RewardData(::RPG::Client::GachaPoolRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaPoolRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_SET_REWARDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_RewardQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_GET_REWARDQUEST_OFFSET))(this);
		}

		::RPG::Client::TextID get_QuestDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAPOOLREWARDACTIVITYDATA_GET_QUESTDESC_OFFSET))(this);
		}
	};
}
