#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/System/Object.h"

class Class_1_13D50D0521B5E431;
class Class_1_4BC858D7C27E10ED_39;
class Class_1_7FCED7C391FCF2F8;
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class AchievementDataRow; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class RewardRow; }
namespace System { class String; }

#define RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9A98D80)
#define RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A98EE0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0x9A99A30)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0x9A99A50)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9A99910)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FINISHWAY_OFFSET UNITYSDK_OFFSET(0x9A98FC0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FIRSTSORTINGPARAM_OFFSET UNITYSDK_OFFSET(0x9A99520)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9A99430)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ISPSTROPHY_OFFSET UNITYSDK_OFFSET(0x9A99A70)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_PSTROPHYID_OFFSET UNITYSDK_OFFSET(0x9A99B30)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x9A99450)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x9A99670)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUEST_OFFSET UNITYSDK_OFFSET(0x9A99770)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x9A99880)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9A994C0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SERIESID_OFFSET UNITYSDK_OFFSET(0x9A996D0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0x9A99410)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SORTPARAM_OFFSET UNITYSDK_OFFSET(0x9A99970)
#define RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET UNITYSDK_OFFSET(0x9A98E00)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0x9A99A40)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0x9A99A60)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9A99440)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_SHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0x9A99420)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET UNITYSDK_OFFSET(0x9A98F20)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET UNITYSDK_OFFSET(0x9A99130)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET UNITYSDK_OFFSET(0x9A990D0)
#define RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A98DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementData_TypeDefinitionIndex = 56583;

	class AchievementData : public ::System::Object
	{
	public:
		::Class_1_13D50D0521B5E431* _AdditionalVoiceData_k__BackingField; // 0x10
		::System::Int64 _AchievedTime_k__BackingField; // 0x18
		::System::Boolean _ShowQuestionMark_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AchievementData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::AchievementData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET))(ID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void TryUpdateAdditionalInfoByQuest(::Class_1_7FCED7C391FCF2F8* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET))(this, quest);
		}

		::System::Void TryUpdateAdditionalInfoByRsp(::Class_1_4BC858D7C27E10ED_39* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET))(this, req);
		}

		::System::Void InitAdditionalDataBasedOnFinishType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET))(this);
		}

		::System::Void TryUpdateVoiceAddtionalInfo(::Class_1_7FCED7C391FCF2F8* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET))(this, quest);
		}

		::System::Boolean get_ShowQuestionMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SHOWQUESTIONMARK_OFFSET))(this);
		}

		::System::Void set_ShowQuestionMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_SHOWQUESTIONMARK_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTID_OFFSET))(this);
		}

		::RPG::GameCore::AchievementDataRow* get_Row()
		{
			return ((::RPG::GameCore::AchievementDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_FirstSortingParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_FIRSTSORTINGPARAM_OFFSET))(this);
		}

		::System::UInt32 get_SeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SERIESID_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_Quest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUEST_OFFSET))(this);
		}

		::RPG::GameCore::RewardRow* get_Reward()
		{
			return ((::RPG::GameCore::RewardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_REWARD_OFFSET))(this);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWay()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_FINISHWAY_OFFSET))(this);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Single get_SortParam()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SORTPARAM_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_23 get_QuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET))(this);
		}

		::System::Int64 get_AchievedTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET))(this);
		}

		::System::Void set_AchievedTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET))(this, value);
		}

		::Class_1_13D50D0521B5E431* get_AdditionalVoiceData()
		{
			return ((::Class_1_13D50D0521B5E431*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET))(this);
		}

		::System::Void set_AdditionalVoiceData(::Class_1_13D50D0521B5E431* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13D50D0521B5E431*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsPSTrophy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ISPSTROPHY_OFFSET))(this);
		}

		::System::String* get_PSTrophyID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_PSTROPHYID_OFFSET))(this);
		}
	};
}
