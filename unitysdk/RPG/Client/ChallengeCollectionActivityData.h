#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengePeakActivityData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_GET_CHALLENGEPEAKACTIVITY_OFFSET UNITYSDK_OFFSET(0xB4F5480)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xB4F5240)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB4F5280)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB4F4E10)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F4E00)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0xB4F5820)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xB4F58E0)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB4F5970)
#define RPG_CLIENT_CHALLENGECOLLECTIONACTIVITYDATA___IFIXBASEPROXY_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB4F5870)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeCollectionActivityData_TypeDefinitionIndex = 57600;

	class ChallengeCollectionActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		// static const ::System::UInt32 _ChallengePeakActivityID = 0x5209; // 0x0
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xA8
		::RPG::Client::ChallengePeakActivityData* _ChallengePeakActivity; // 0xB0

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
