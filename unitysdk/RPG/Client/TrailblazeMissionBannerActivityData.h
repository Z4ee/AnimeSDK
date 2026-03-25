#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class VersionBannerData; }

#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_CANSHOWINPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xA5E5AE0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETVERSIONBANNERDATA_OFFSET UNITYSDK_OFFSET(0xA5E59F0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xA5E5A90)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E59E0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xA5E5BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrailblazeMissionBannerActivityData_TypeDefinitionIndex = 50032;

	class TrailblazeMissionBannerActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::VersionBannerData* _VersionBannerData; // 0xA0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::RPG::Client::VersionBannerData* GetVersionBannerData()
		{
			return ((::RPG::Client::VersionBannerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETVERSIONBANNERDATA_OFFSET))(this);
		}

		::System::Boolean IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET))(this);
		}

		::System::Boolean CanShowInPlayerReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_CANSHOWINPLAYERRETURN_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsExtraCondSatisfy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET))(this);
		}
	};
}
