#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class VersionBannerData; }

#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_CANSHOWINPLAYERRETURN_OFFSET UNITYSDK_OFFSET(0xCA7D320)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_GETVERSIONBANNERDATA_OFFSET UNITYSDK_OFFSET(0xCA7D230)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xCA7D2D0)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCA7D220)
#define RPG_CLIENT_TRAILBLAZEMISSIONBANNERACTIVITYDATA___IFIXBASEPROXY_ISEXTRACONDSATISFY_OFFSET UNITYSDK_OFFSET(0xCA7D3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrailblazeMissionBannerActivityData_TypeDefinitionIndex = 57661;

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
