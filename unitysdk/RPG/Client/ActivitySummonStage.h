#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivitySummonLevel; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivitySummonGroupRow; }
namespace RPG::GameCore { class ActivitySummonSkillRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_CHECKISNEW_OFFSET UNITYSDK_OFFSET(0x9C632B0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x9C63EE0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_FILLLOCKLEVELSTO_OFFSET UNITYSDK_OFFSET(0x9C63D90)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_FILLRELATEDSUBMISSIONIDSTO_OFFSET UNITYSDK_OFFSET(0x9C63F50)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETALLSORTEDLEVELS_OFFSET UNITYSDK_OFFSET(0x9C64CF0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETLEVEL_OFFSET UNITYSDK_OFFSET(0x9C607A0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETMASTERSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9C64A10)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETSUMMONERSKILLDATA_OFFSET UNITYSDK_OFFSET(0x9C64B80)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x9C64550)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9C64600)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9C648E0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x9C648C0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_HASREVEALED_OFFSET UNITYSDK_OFFSET(0x9C642F0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9C62400)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C64760)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9C624E0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_META_OFFSET UNITYSDK_OFFSET(0x9C64540)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MINIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C647D0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MONSTERDESC_OFFSET UNITYSDK_OFFSET(0x9C64870)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MONSTEREVENTID_OFFSET UNITYSDK_OFFSET(0x9C648A0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MONSTERNAME_OFFSET UNITYSDK_OFFSET(0x9C64840)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C64570)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_RULEDESC_OFFSET UNITYSDK_OFFSET(0x9C64680)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_RULEPARAMS_OFFSET UNITYSDK_OFFSET(0x9C64700)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9C64900)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C64D80)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE__ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x9C65090)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C64EB0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE__INITLEVELS_OFFSET UNITYSDK_OFFSET(0x9C64FB0)
#define RPG_CLIENT_ACTIVITYSUMMONSTAGE__INITMAZEBUF_OFFSET UNITYSDK_OFFSET(0x9C65010)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonStage_TypeDefinitionIndex = 57119;

	class ActivitySummonStage : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivitySummonGroupRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonLevel*>* _Levels; // 0x18
		::RPG::GameCore::MazeBuffRow* _MazeBuffMeta; // 0x20

		::System::Void _ctor(::RPG::GameCore::ActivitySummonGroupRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivitySummonGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySummonGroupRow* get_Meta()
		{
			return ((::RPG::GameCore::ActivitySummonGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_META_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Boolean get_HasRevealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_HASREVEALED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_RuleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_RULEDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_RuleParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_RULEPARAMS_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_MiniImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MINIIMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_MonsterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MONSTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MonsterDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MONSTERDESC_OFFSET))(this);
		}

		::System::UInt32 get_MonsterEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MONSTEREVENTID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_GOTOID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_ENTRANCEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Void FillRelatedSubMissionIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_FILLRELATEDSUBMISSIONIDSTO_OFFSET))(this, buffer);
		}

		::System::Void FillLockLevelsTo(::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonLevel*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonLevel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_FILLLOCKLEVELSTO_OFFSET))(this, buffer);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ActivitySummonSkillRow*>* GetMasterSkillData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ActivitySummonSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETMASTERSKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ActivitySummonSkillRow*>* GetSummonerSkillData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ActivitySummonSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETSUMMONERSKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonLevel*>* GetAllSortedLevels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivitySummonLevel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETALLSORTEDLEVELS_OFFSET))(this);
		}

		::RPG::Client::ActivitySummonLevel* GetLevel(::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::RPG::Client::ActivitySummonLevel*(*)(::PVOID, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_GETLEVEL_OFFSET))(this, difficulty);
		}

		::System::Boolean CheckIsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_CHECKISNEW_OFFSET))(this);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_MARKHASSEEN_OFFSET))(this);
		}

		static ::RPG::Client::ActivitySummonStage* Create(::RPG::GameCore::ActivitySummonGroupRow* meta)
		{
			return ((::RPG::Client::ActivitySummonStage*(*)(::RPG::GameCore::ActivitySummonGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE_CREATE_OFFSET))(meta);
		}

		::System::Void _InitLevels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE__INITLEVELS_OFFSET))(this);
		}

		::System::Void _AddLevel(::RPG::GameCore::ActivitySummonDifficulty difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE__ADDLEVEL_OFFSET))(this, difficulty);
		}

		::System::Void _InitMazeBuf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONSTAGE__INITMAZEBUF_OFFSET))(this);
		}
	};
}
