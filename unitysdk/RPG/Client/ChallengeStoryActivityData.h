#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }

#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xCABC2C0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xCABBF70)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0xCABB930)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0xCABC420)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCABB860)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0xCABC550)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryActivityData_TypeDefinitionIndex = 61696;

	class ChallengeStoryActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xA8
		::RPG::Client::ChallengeGroupData* CurShowChallengeGroupData; // 0xB0
		::System::Int32 _DelayDays; // 0xB8

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISNEW_OFFSET))(this);
		}

		::System::Void UpdateRedDotStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET))(this);
		}

		::System::Void _OnScheduleEnds(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__ONSCHEDULEENDS_OFFSET))(this, a1);
		}
	};
}
