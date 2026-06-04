#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }

#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xB579D20)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB5799B0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB579510)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0xB579E90)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB579440)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0xB579F80)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_ISNEW_OFFSET UNITYSDK_OFFSET(0xB57A0A0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB57A040)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB579FD0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0xB57A0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryActivityData_TypeDefinitionIndex = 57602;

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

		::System::Void __iFixBaseProxy_SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_ISNEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateRedDotStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_UPDATEREDDOTSTATUS_OFFSET))(this);
		}
	};
}
