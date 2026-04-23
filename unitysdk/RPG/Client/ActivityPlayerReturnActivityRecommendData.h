#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPlayerReturnGachaRecommendData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityPanelData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C3FE60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C3FED0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_PANELDATA_OFFSET UNITYSDK_OFFSET(0x9C3FD90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_PANELID_OFFSET UNITYSDK_OFFSET(0x9C3FE40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9C3FF40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C3FCE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3FC60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA___IFIXBASEPROXY_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C40000)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnActivityRecommendData_TypeDefinitionIndex = 57078;

	class ActivityPlayerReturnActivityRecommendData : public ::RPG::Client::ActivityPlayerReturnGachaRecommendData
	{
	public:
		::System::Void _ctor(::System::UInt32 recommendID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA__CTOR_OFFSET))(this, recommendID);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 get_PanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_PANELID_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* get_PanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_PANELDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNACTIVITYRECOMMENDDATA___IFIXBASEPROXY_ISAVAILABLE_OFFSET))(this);
		}
	};
}
