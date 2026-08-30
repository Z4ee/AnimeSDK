#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityPhotoExhibitionModule; }

#define RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDA68DE0)
#define RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xDA68CF0)
#define RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xDA68B50)
#define RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDA68AF0)
#define RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDA68AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoExhibitionActivityPanelData_TypeDefinitionIndex = 61800;

	class PhotoExhibitionActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::RPG::Client::ActivityPhotoExhibitionModule* get__Module()
		{
			return ((::RPG::Client::ActivityPhotoExhibitionModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOEXHIBITIONACTIVITYPANELDATA_GET__MODULE_OFFSET))(this);
		}
	};
}
