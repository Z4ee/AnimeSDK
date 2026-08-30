#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPlayerReturnGachaRecommendData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class TrailblazeMissionBannerActivityData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B861210)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_MISSIONACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1B860FF0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_PANELID_OFFSET UNITYSDK_OFFSET(0x1B8611C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B8612B0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_ISALLMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1B861150)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B860F80)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B860F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnMissionRecommendData_TypeDefinitionIndex = 61969;

	class ActivityPlayerReturnMissionRecommendData : public ::RPG::Client::ActivityPlayerReturnGachaRecommendData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsAllMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_ISALLMISSIONFINISH_OFFSET))(this);
		}

		::System::UInt32 get_PanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_PANELID_OFFSET))(this);
		}

		::RPG::Client::TrailblazeMissionBannerActivityData* get_MissionActivityData()
		{
			return ((::RPG::Client::TrailblazeMissionBannerActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_MISSIONACTIVITYDATA_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMISSIONRECOMMENDDATA_GET_TITLE_OFFSET))(this);
		}
	};
}
