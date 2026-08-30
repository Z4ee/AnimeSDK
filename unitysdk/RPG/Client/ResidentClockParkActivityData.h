#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityClockParkModule; }

#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xDE6F080)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xDE6F020)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDE6EEA0)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE6EE30)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xDE6EF20)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentClockParkActivityData_TypeDefinitionIndex = 61850;

	class ResidentClockParkActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityClockParkModule* _Module; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}
	};
}
