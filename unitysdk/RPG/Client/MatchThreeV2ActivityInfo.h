#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace RPG::Client { class ScheduleData; }

#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xD6595A0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD6592B0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULEID_OFFSET UNITYSDK_OFFSET(0xD659330)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD6595C0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6595E0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__ENTRANCEUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xD659490)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__PVPUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6593B0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xD659BE0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xD659920)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD659F80)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD659E10)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD659E70)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xD6595B0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_PVPMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD6595D0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__COLLECTREQUIREDSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xD659A60)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD659630)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__GETSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xD659ED0)
#define RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__INITONMODULEINITREQ_B__22_0_OFFSET UNITYSDK_OFFSET(0xD659FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ActivityInfo_TypeDefinitionIndex = 66039;

	class MatchThreeV2ActivityInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _Version = 0x2; // 0x0
		::RPG::Client::ScheduleData* _PvpModuleScheduleData_k__BackingField; // 0x10
		::RPG::Client::ActivityData* _ActivityData_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _LevelUnlockSubmissionIDs; // 0x20
		::System::Boolean _IsMissionDataReady; // 0x28

		::System::Void _ctor(::RPG::Client::MatchThreeV2LevelInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_PvpModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULEID_OFFSET))(this);
		}

		::System::UInt32 get__PvpUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__PVPUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get__EntranceUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET__ENTRANCEUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::System::Void set_ActivityData(::RPG::Client::ActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_ACTIVITYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_PvpModuleScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPMODULESCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_PvpModuleScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_SET_PVPMODULESCHEDULEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_PvpUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_GET_PVPUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void InitOnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void InitOnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_INITONLOGINFINISH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* _CollectRequiredSubMissionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__COLLECTREQUIREDSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Boolean IsPvpInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsPvpUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISPVPUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionState _GetSubmissionState(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__GETSUBMISSIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _InitOnModuleInitReq_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2ACTIVITYINFO__INITONMODULEINITREQ_B__22_0_OFFSET))(this);
		}
	};
}
