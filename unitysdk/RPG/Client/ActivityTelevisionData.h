#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityTelevisionLevelRow; }
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8FC57B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0x8FC5980)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELSCORE_OFFSET UNITYSDK_OFFSET(0x8FC58E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8FC5AB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8FC61B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x8FC62D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXBUFFLAYER_OFFSET UNITYSDK_OFFSET(0x8FC61F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8FC61D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x8FC62F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFMULLIST_OFFSET UNITYSDK_OFFSET(0x8FC6270)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_PROGRESSMISSIONID_OFFSET UNITYSDK_OFFSET(0x8FC5A90)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x8FC6230)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTROW_OFFSET UNITYSDK_OFFSET(0x8FC62B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8FC6290)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8FC5F00)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x8FC6210)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x8FC6250)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISDEATH_OFFSET UNITYSDK_OFFSET(0x8FC5E00)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISPRELEVELFINISHED_OFFSET UNITYSDK_OFFSET(0x8FC5CC0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISREVEALED_OFFSET UNITYSDK_OFFSET(0x8FC59D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8FC5470)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_NOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8FC54E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8FC61C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x8FC62E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXBUFFLAYER_OFFSET UNITYSDK_OFFSET(0x8FC6200)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8FC61E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_QUESTROW_OFFSET UNITYSDK_OFFSET(0x8FC62C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8FC62A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x8FC6220)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x8FC6260)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8FC5920)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8FC5870)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC6010)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITLEVELINFO_OFFSET UNITYSDK_OFFSET(0x8FC6140)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x8FC60B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionData_TypeDefinitionIndex = 50330;

	class ActivityTelevisionData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityTelevisionQuestRow* _QuestRow_k__BackingField; // 0x10
		::RPG::GameCore::ActivityTelevisionLevelRow* _LevelRow_k__BackingField; // 0x18
		::RPG::Client::ScheduleData* _ScheduleData; // 0x20
		::RPG::GameCore::ActivityTelevisionStageRow* _Row_k__BackingField; // 0x28
		::System::UInt32 _MaxLevel_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::UInt32 _Score_k__BackingField; // 0x38
		::System::UInt32 _MaxBuffLayer_k__BackingField; // 0x3C
		::System::UInt32 _Season_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void _ctor_1(::System::UInt32 id, ::RPG::GameCore::ActivityTelevisionStageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__CTOR_1_OFFSET))(this, id, stageRow);
		}

		static ::RPG::Client::ActivityTelevisionData* Create(::System::UInt32 id, ::RPG::GameCore::ActivityTelevisionStageRow* stageRow)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::System::UInt32, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_CREATE_OFFSET))(id, stageRow);
		}

		::System::UInt32 GetLevelScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELSCORE_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 score, ::System::UInt32 buffLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SYNC_OFFSET))(this, score, buffLayer);
		}

		::RPG::GameCore::ActivityTelevisionLevelRow* GetLevelRow(::System::UInt32 hardLevel)
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETLEVELROW_OFFSET))(this, hardLevel);
		}

		::System::Boolean IsRevealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISREVEALED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean IsPreLevelFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISPRELEVELFINISHED_OFFSET))(this);
		}

		::System::Boolean IsDeath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISDEATH_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean NotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_NOTCHALLENGED_OFFSET))(this);
		}

		::System::Void _InitStageInfo(::RPG::GameCore::ActivityTelevisionStageRow* stageRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITSTAGEINFO_OFFSET))(this, stageRow);
		}

		::System::Void _InitLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA__INITLEVELINFO_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxBuffLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAXBUFFLAYER_OFFSET))(this);
		}

		::System::Void set_MaxBuffLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_MAXBUFFLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SCORE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_Season()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_SEASON_OFFSET))(this, value);
		}

		::System::UInt32 get_ProgressMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_PROGRESSMISSIONID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MazeBuffMulList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFMULLIST_OFFSET))(this);
		}

		::RPG::GameCore::ActivityTelevisionStageRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityTelevisionStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ActivityTelevisionStageRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityTelevisionQuestRow* get_QuestRow()
		{
			return ((::RPG::GameCore::ActivityTelevisionQuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_QUESTROW_OFFSET))(this);
		}

		::System::Void set_QuestRow(::RPG::GameCore::ActivityTelevisionQuestRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_QUESTROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ActivityTelevisionLevelRow* get_LevelRow()
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_LEVELROW_OFFSET))(this);
		}

		::System::Void set_LevelRow(::RPG::GameCore::ActivityTelevisionLevelRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityTelevisionLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_SET_LEVELROW_OFFSET))(this, value);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA_GET_MAZEBUFFID_OFFSET))(this);
		}
	};
}
