#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengePeakActivityData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_GET_CHALLENGEPEAKACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F252F0)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9F25080)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9F250C0)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F24C80)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F24C70)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x9F259B0)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9F25A90)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9F25B30)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F25A10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeCollectionActivityData_TypeDefinitionIndex = 56814;

	class ChallengeCollectionActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		// static const ::System::UInt32 _ChallengePeakActivityID = 0x5209; // 0x0
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xA8
		::RPG::Client::ChallengePeakActivityData* _ChallengePeakActivity; // 0xB0

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__CTOR_OFFSET))(this, id);
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

		::System::Void _OnScheduleEnds(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__ONSCHEDULEENDS_OFFSET))(this, scheduleData);
		}

		::RPG::Client::ChallengePeakActivityData* get_ChallengePeakActivity()
		{
			return ((::RPG::Client::ChallengePeakActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_GET_CHALLENGEPEAKACTIVITY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_PREPAREDATA_OFFSET))(this);
		}
	};
}
