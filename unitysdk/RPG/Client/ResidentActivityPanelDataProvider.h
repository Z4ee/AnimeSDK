#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IResidentActivityPanelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETACTIVITYRESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0xC71A960)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETDISPLAYRESIDENTACTIVITIES_OFFSET UNITYSDK_OFFSET(0xC719D00)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETROGUERESIDENTPANELDATA_OFFSET UNITYSDK_OFFSET(0xC71AA10)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelDataProvider_TypeDefinitionIndex = 57761;

	class ResidentActivityPanelDataProvider : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::IResidentActivityPanelData*>* GetDisplayResidentActivities()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IResidentActivityPanelData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETDISPLAYRESIDENTACTIVITIES_OFFSET))();
		}

		static ::RPG::Client::IResidentActivityPanelData* GetActivityResidentPanelData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IResidentActivityPanelData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETACTIVITYRESIDENTPANELDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IResidentActivityPanelData* GetRogueResidentPanelData(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::RPG::Client::IResidentActivityPanelData*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER_GETROGUERESIDENTPANELDATA_OFFSET))(a1);
		}
	};
}
