#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityLocalLegendModule; }

#define RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xD55D4F0)
#define RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xD55D580)
#define RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xD55D810)
#define RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xD55D740)
#define RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD55D250)
#define RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD55D240)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalLegendActivityPanelData_TypeDefinitionIndex = 61667;

	class LocalLegendActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::RPG::Client::ActivityLocalLegendModule* get__Module()
		{
			return ((::RPG::Client::ActivityLocalLegendModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALLEGENDACTIVITYPANELDATA_GET__MODULE_OFFSET))(this);
		}
	};
}
