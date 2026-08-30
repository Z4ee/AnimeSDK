#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_643;
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityLocalLegendGroupConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_CLEARNEW_OFFSET UNITYSDK_OFFSET(0xC618290)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETALLEASYANDHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xC617BC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0xC617230)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLATESTUNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0xC6178B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0xC616D70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETSHOWRANKFORHISTORY_OFFSET UNITYSDK_OFFSET(0xC617540)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_CHALLENGESTRATEGY_OFFSET UNITYSDK_OFFSET(0xC6184C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPICON_OFFSET UNITYSDK_OFFSET(0xC618390)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC6185F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_GROUPTITLE_OFFSET UNITYSDK_OFFSET(0xC618320)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC618710)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISSEEN_OFFSET UNITYSDK_OFFSET(0xC618970)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCKANIMSEEN_OFFSET UNITYSDK_OFFSET(0xC618A70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC617E60)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC618630)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xC618730)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_STAGEMECHANISMTITLE_OFFSET UNITYSDK_OFFSET(0xC6183E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_STAGEMECHANISM_OFFSET UNITYSDK_OFFSET(0xC618450)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_TEAMBUILDTIP_OFFSET UNITYSDK_OFFSET(0xC618530)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_TUTORIALGUIDEID_OFFSET UNITYSDK_OFFSET(0xC6185A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC618720)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISSEEN_OFFSET UNITYSDK_OFFSET(0xC617050)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISUNLOCKANIMSEEN_OFFSET UNITYSDK_OFFSET(0xC618B90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SYNCGROUPINFO_OFFSET UNITYSDK_OFFSET(0xC616B50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC616410)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendData_TypeDefinitionIndex = 61649;

	class ActivityLocalLegendData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityLocalLegendGroupConfigRow* _GroupRow; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLocalLegendLevelData*>* _LevelData; // 0x18
		::System::UInt32 _GroupID; // 0x20
		::System::Int32 _HistoryMaxPassDifficulty_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncGroupInfo(::Class_1_D17272E82AE804C2_643* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_643*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SYNCGROUPINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityLocalLegendLevelData* GetLevelData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityLocalLegendLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GETLEVELDATA_OFFSET))(this, a1);
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

		::System::Void set_HistoryMaxPassDifficulty(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_HISTORYMAXPASSDIFFICULTY_OFFSET))(this, a1);
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

		::System::Void set_IsSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISSEEN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlockAnimSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_GET_ISUNLOCKANIMSEEN_OFFSET))(this);
		}

		::System::Void set_IsUnlockAnimSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDDATA_SET_ISUNLOCKANIMSEEN_OFFSET))(this, a1);
		}
	};
}
