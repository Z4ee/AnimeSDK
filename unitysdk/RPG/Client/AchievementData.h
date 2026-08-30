#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_019465E0853462D7;
class Class_1_7FCED7C391FCF2F8;
class Class_1_F487A56015EDF324_7;
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class AchievementDataRow; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class RewardRow; }
namespace System { class String; }

#define RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1ABB8550)
#define RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ABB86B0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0x1ABB91D0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEMENTSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1ABB9370)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0x1ABB91F0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1ABB90B0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FINISHWAY_OFFSET UNITYSDK_OFFSET(0x1ABB8790)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FIRSTSORTINGPARAM_OFFSET UNITYSDK_OFFSET(0x1ABB8DF0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1ABB8CF0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ISPSTROPHY_OFFSET UNITYSDK_OFFSET(0x1ABB9210)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_PSTROPHYID_OFFSET UNITYSDK_OFFSET(0x1ABB92D0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1ABB7D20)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x1ABB8F40)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUEST_OFFSET UNITYSDK_OFFSET(0x1ABB8FA0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x1ABB82D0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1ABB8270)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SERIESID_OFFSET UNITYSDK_OFFSET(0x1ABB83A0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SORTPARAM_OFFSET UNITYSDK_OFFSET(0x1ABB9110)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1ABB8D10)
#define RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET UNITYSDK_OFFSET(0x1ABB85D0)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0x1ABB91E0)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0x1ABB9200)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1ABB8D00)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET UNITYSDK_OFFSET(0x1ABB86F0)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET UNITYSDK_OFFSET(0x1ABB8900)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET UNITYSDK_OFFSET(0x1ABB88A0)
#define RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB85C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementData_TypeDefinitionIndex = 61451;

	class AchievementData : public ::System::Object
	{
	public:
		::Class_1_019465E0853462D7* _AdditionalVoiceData_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
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

		::System::Void TryUpdateAdditionalInfoByRsp(::Class_1_F487A56015EDF324_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET))(this, a1);
		}

		::System::Void InitAdditionalDataBasedOnFinishType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET))(this);
		}

		::System::Void TryUpdateVoiceAddtionalInfo(::Class_1_7FCED7C391FCF2F8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET))(this, a1);
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

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_TITLE_OFFSET))(this);
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

		::Enum_3_4608E37A1B3D374A_25 get_QuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_25(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET))(this);
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

		::RPG::GameCore::ShowType get_AchievementShowType()
		{
			return ((::RPG::GameCore::ShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEMENTSHOWTYPE_OFFSET))(this);
		}
	};
}
