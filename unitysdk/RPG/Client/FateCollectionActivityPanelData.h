#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xB9888D0)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB988780)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB988770)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xB988970)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB988910)

namespace RPG::Client
{
	inline static constexpr unsigned int FateCollectionActivityPanelData_TypeDefinitionIndex = 57616;

	class FateCollectionActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
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
