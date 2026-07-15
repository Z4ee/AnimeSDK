#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }

#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0x191FA190)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x191F9E40)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x191F9800)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x191FA2F0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191F9730)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x191FA420)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryActivityData_TypeDefinitionIndex = 58864;

	class ChallengeStoryActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		::RPG::Client::ChallengeGroupData* CurShowChallengeGroupData; // 0xA8
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xB0
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
