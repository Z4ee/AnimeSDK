#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_22.h"
#include "unitysdk/System/Object.h"

class Class_1_019465E0853462D7;
class Class_1_4BC858D7C27E10ED_40;
class Class_1_7FCED7C391FCF2F8;
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class AchievementDataRow; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class RewardRow; }
namespace System { class String; }

#define RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0784C0)
#define RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB078620)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0xB079170)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0xB079190)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xB079050)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FINISHWAY_OFFSET UNITYSDK_OFFSET(0xB078700)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FIRSTSORTINGPARAM_OFFSET UNITYSDK_OFFSET(0xB078C60)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB078B70)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ISPSTROPHY_OFFSET UNITYSDK_OFFSET(0xB0791B0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_PSTROPHYID_OFFSET UNITYSDK_OFFSET(0xB079270)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xB078B90)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xB078DB0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xB078EB0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_REWARD_OFFSET UNITYSDK_OFFSET(0xB078FC0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB078C00)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SERIESID_OFFSET UNITYSDK_OFFSET(0xB078E10)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0xB078B50)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SORTPARAM_OFFSET UNITYSDK_OFFSET(0xB0790B0)
#define RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET UNITYSDK_OFFSET(0xB078540)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0xB079180)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0xB0791A0)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB078B80)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_SHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0xB078B60)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET UNITYSDK_OFFSET(0xB078660)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET UNITYSDK_OFFSET(0xB078870)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET UNITYSDK_OFFSET(0xB078810)
#define RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB078530)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementData_TypeDefinitionIndex = 57360;

	class AchievementData : public ::System::Object
	{
	public:
		::Class_1_019465E0853462D7* _AdditionalVoiceData_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Boolean _ShowQuestionMark_k__BackingField; // 0x1C
		::System::Int64 _AchievedTime_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AchievementData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::AchievementData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void TryUpdateAdditionalInfoByQuest(::Class_1_7FCED7C391FCF2F8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET))(this, a1);
		}

		::System::Void TryUpdateAdditionalInfoByRsp(::Class_1_4BC858D7C27E10ED_40* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET))(this, a1);
		}

		::System::Void InitAdditionalDataBasedOnFinishType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET))(this);
		}

		::System::Void TryUpdateVoiceAddtionalInfo(::Class_1_7FCED7C391FCF2F8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowQuestionMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SHOWQUESTIONMARK_OFFSET))(this);
		}

		::System::Void set_ShowQuestionMark(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_SHOWQUESTIONMARK_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET))(this, a1);
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

		::Enum_3_4608E37A1B3D374A_22 get_QuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_22(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET))(this);
		}

		::System::Int64 get_AchievedTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET))(this);
		}

		::System::Void set_AchievedTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET))(this, a1);
		}

		::Class_1_019465E0853462D7* get_AdditionalVoiceData()
		{
			return ((::Class_1_019465E0853462D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET))(this);
		}

		::System::Void set_AdditionalVoiceData(::Class_1_019465E0853462D7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_019465E0853462D7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET))(this, a1);
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
