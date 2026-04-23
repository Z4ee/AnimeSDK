#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }

#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0x9F60AF0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9F60740)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F602B0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x9F60C60)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F601E0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x9F60D50)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_ISNEW_OFFSET UNITYSDK_OFFSET(0x9F60E90)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9F60E20)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F60DA0)
#define RPG_CLIENT_CHALLENGESTORYACTIVITYDATA___IFIXBASEPROXY_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x9F60EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryActivityData_TypeDefinitionIndex = 56816;

	class ChallengeStoryActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xA8
		::RPG::Client::ChallengeGroupData* CurShowChallengeGroupData; // 0xB0
		::System::Int32 _DelayDays; // 0xB8

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__CTOR_OFFSET))(this, ID);
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

		::System::Void _OnScheduleEnds(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYACTIVITYDATA__ONSCHEDULEENDS_OFFSET))(this, scheduleData);
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
