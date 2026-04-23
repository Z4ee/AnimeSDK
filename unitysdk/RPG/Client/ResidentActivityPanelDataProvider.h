#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IResidentActivityPanelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETACTIVITYRESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0xAFD6D50)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETDISPLAYRESIDENTACTIVITIES_OFFSET UNITYSDK_OFFSET(0xAFD60E0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETROGUERESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0xAFD6E00)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelDataProvider_TypeDefinitionIndex = 56973;

	class ResidentActivityPanelDataProvider : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IResidentActivityPanelData*>* GetDisplayResidentActivities()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IResidentActivityPanelData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETDISPLAYRESIDENTACTIVITIES_OFFSET))();
		}

		static ::RPG::Client::IResidentActivityPanelData* GetActivityResidentPanelData(::System::UInt32 panelID, ::System::UInt32 activityID)
		{
			return ((::RPG::Client::IResidentActivityPanelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETACTIVITYRESIDENTPANELDATA_OFFSET))(panelID, activityID);
		}

		static ::RPG::Client::IResidentActivityPanelData* GetRogueResidentPanelData(::RPG::GameCore::RogueSubMode rogueSubMode)
		{
			return ((::RPG::Client::IResidentActivityPanelData*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETROGUERESIDENTPANELDATA_OFFSET))(rogueSubMode);
		}
	};
}
