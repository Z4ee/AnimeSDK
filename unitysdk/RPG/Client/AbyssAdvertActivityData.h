#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomizedActivityPanelData.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }

#define RPG_CLIENT_ABYSSADVERTACTIVITYDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0x17474340)
#define RPG_CLIENT_ABYSSADVERTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x17474260)
#define RPG_CLIENT_ABYSSADVERTACTIVITYDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x17473740)
#define RPG_CLIENT_ABYSSADVERTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17473670)
#define RPG_CLIENT_ABYSSADVERTACTIVITYDATA__ONSCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x174743F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AbyssAdvertActivityData_TypeDefinitionIndex = 58837;

	class AbyssAdvertActivityData : public ::RPG::Client::CustomizedActivityPanelData
	{
	public:
		::RPG::Client::ScheduleTask* _WaitCloseTask; // 0xA8
		::RPG::Client::ChallengeGroupData* CurShowChallengeGroupData; // 0xB0
		::System::Int32 _DelayDays; // 0xB8

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABYSSADVERTACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABYSSADVERTACTIVITYDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABYSSADVERTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABYSSADVERTACTIVITYDATA_ISNEW_OFFSET))(this);
		}

		::System::Void _OnScheduleEnds(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABYSSADVERTACTIVITYDATA__ONSCHEDULEENDS_OFFSET))(this, a1);
		}
	};
}
