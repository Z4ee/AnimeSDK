#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1C179540)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1C179440)
#define RPG_CLIENT_FATECOLLECTIONACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C179430)

namespace RPG::Client
{
	inline static constexpr unsigned int FateCollectionActivityPanelData_TypeDefinitionIndex = 61713;

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
	};
}
