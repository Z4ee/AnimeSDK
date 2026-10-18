#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class VersionBannerData; }
namespace RPG::GameCore { class MissionChapterConfigRow; }

#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_CANSHOWINPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xE2B72B0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETSUBTITLETEXT_OFFSET UNITYSDK_OFFSET(0xE2B7220)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETVERSIONBANNERDATA_OFFSET UNITYSDK_OFFSET(0xE2B6FF0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GET__MISSIONCHAPTERCONFIGROW_OFFSET UNITYSDK_OFFSET(0xE2B7150)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xE2B7060)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISSUBTITLEACTIVE_OFFSET UNITYSDK_OFFSET(0xE2B70B0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE2B6FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrailblazeMissionBannerActivityData_TypeDefinitionIndex = 61671;

	class TrailblazeMissionBannerActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::VersionBannerData* _VersionBannerData; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::VersionBannerData* GetVersionBannerData()
		{
			return ((::RPG::Client::VersionBannerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETVERSIONBANNERDATA_OFFSET))(this);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean IsSubtitleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISSUBTITLEACTIVE_OFFSET))(this);
		}

		::RPG::Client::TextID GetSubtitleText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETSUBTITLETEXT_OFFSET))(this);
		}

		::RPG::GameCore::MissionChapterConfigRow* get__MissionChapterConfigRow()
		{
			return ((::RPG::GameCore::MissionChapterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GET__MISSIONCHAPTERCONFIGROW_OFFSET))(this);
		}

		::System::Boolean CanShowInPlayerReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_CANSHOWINPLAYERRETURN_OFFSET))(this);
		}
	};
}
