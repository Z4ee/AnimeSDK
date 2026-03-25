#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_53;
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityLocalLegendGroupConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_CLEARNEW_OFFSET UNITYSDK_OFFSET(0x8F505E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETALLEASYANDHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8F50050)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0x8F4F750)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLATESTUNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0x8F4FC90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0x8F4F250)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETSHOWRANKFORHISTORY_OFFSET UNITYSDK_OFFSET(0x8F4FA00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_CHALLENGESTRATEGY_OFFSET UNITYSDK_OFFSET(0x8F50720)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPICON_OFFSET UNITYSDK_OFFSET(0x8F506A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8F507A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0x8F50670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x8F50890)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISSEEN_OFFSET UNITYSDK_OFFSET(0x8F50A20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCKANIMSEEN_OFFSET UNITYSDK_OFFSET(0x8F50B20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F50200)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8F507B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x8F508B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_STAGEMECHANISMTITLE_OFFSET UNITYSDK_OFFSET(0x8F506C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_STAGEMECHANISM_OFFSET UNITYSDK_OFFSET(0x8F506F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_TEAMBUILDTIP_OFFSET UNITYSDK_OFFSET(0x8F50750)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0x8F50780)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x8F508A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISSEEN_OFFSET UNITYSDK_OFFSET(0x8F4F570)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISUNLOCKANIMSEEN_OFFSET UNITYSDK_OFFSET(0x8F50C40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SYNCGROUPINFO_OFFSET UNITYSDK_OFFSET(0x8F4EFF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendData_TypeDefinitionIndex = 49933;

	class ActivityLocalLegendData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityLocalLegendGroupConfigRow* _GroupRow; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLocalLegendLevelData*>* _LevelData; // 0x18
		::System::UInt32 _GroupID; // 0x20
		::System::Int32 _HistoryMaxPassDifficulty_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA__CTOR_OFFSET))(this, groupID);
		}

		::System::Void SyncGroupInfo(::Class_1_120319518E6F6581_53* levelData, ::System::Boolean synByInit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_53*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SYNCGROUPINFO_OFFSET))(this, levelData, synByInit);
		}

		::RPG::Client::ActivityLocalLegendLevelData* GetLevelData(::System::UInt32 difficulty)
		{
			return ((::RPG::Client::ActivityLocalLegendLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLEVELDATA_OFFSET))(this, difficulty);
		}

		::System::UInt32 GetFinishedStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETFINISHEDSTARNUM_OFFSET))(this);
		}

		::System::UInt32 GetShowRankForHistory()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETSHOWRANKFORHISTORY_OFFSET))(this);
		}

		::System::UInt32 GetLatestUnlockLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLATESTUNLOCKLEVEL_OFFSET))(this);
		}

		::System::Boolean GetAllEasyAndHardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETALLEASYANDHARDCHALLENGED_OFFSET))(this);
		}

		::System::Void ClearNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_CLEARNEW_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPTITLE_OFFSET))(this);
		}

		::System::String* get_GroupIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_StageMechanismTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_STAGEMECHANISMTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StageMechanism()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_STAGEMECHANISM_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeStrategy()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_CHALLENGESTRATEGY_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBuildTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_TEAMBUILDTIP_OFFSET))(this);
		}

		::System::UInt32 get_TutorialGuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_TUTORIALGUIDEID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Int32 get_HistoryMaxPassDifficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this);
		}

		::System::Void set_HistoryMaxPassDifficulty(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISSEEN_OFFSET))(this);
		}

		::System::Void set_IsSeen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISSEEN_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlockAnimSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCKANIMSEEN_OFFSET))(this);
		}

		::System::Void set_IsUnlockAnimSeen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISUNLOCKANIMSEEN_OFFSET))(this, value);
		}
	};
}
