#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xA3371F0)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA336D10)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA336D00)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xA3372A0)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA337230)

namespace RPG::Client
{
	inline static constexpr unsigned int FateCollectionActivityPanelData_TypeDefinitionIndex = 56830;

	class FateCollectionActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA__CTOR_OFFSET))(this, panelID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWDAILYREDDOT_OFFSET))(this);
		}
	};
}
