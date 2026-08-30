#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityClockParkModule; }

#define RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0xCC2BDA0)
#define RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWENDLESSSCRIPTNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xCC2C0A0)
#define RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xCC2BF80)
#define RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xCC2BF20)
#define RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xCC2BD00)
#define RPG_CLIENT_CLOCKPARKACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC2BC90)
#define RPG_CLIENT_CLOCKPARKACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xCC2BE20)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkActivityData_TypeDefinitionIndex = 61699;

	class ClockParkActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityClockParkModule* _Module; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowEndlessScriptNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA_ISSHOWENDLESSSCRIPTNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}
	};
}
