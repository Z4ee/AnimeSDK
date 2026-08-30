#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengePeakActivityData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_GET_CHALLENGEPEAKACTIVITY_OFFSET UNITYSDK_OFFSET(0x18C0FFB0)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x18C0FD70)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x18C0FDB0)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18C0F410)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0F400)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x18C10350)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeCollectionActivityData_TypeDefinitionIndex = 61694;

	class ChallengeCollectionActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		// static const ::System::UInt32 _ChallengePeakActivityID = 0x5209; // 0x0
		::RPG::Client::ChallengePeakActivityData* _ChallengePeakActivity; // 0xA8
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xB0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Void _OnScheduleEnds(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__ONSCHEDULEENDS_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakActivityData* get_ChallengePeakActivity()
		{
			return ((::RPG::Client::ChallengePeakActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_GET_CHALLENGEPEAKACTIVITY_OFFSET))(this);
		}
	};
}
