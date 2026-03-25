#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityBannerCompanyMissionRow; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE_COMPARE_OFFSET UNITYSDK_OFFSET(0x9411510)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x94110D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityUtils_CompanyRowCompare_TypeDefinitionIndex = 51592;

	class CompanionMissionActivityUtils_CompanyRowCompare : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::GameCore::ActivityBannerCompanyMissionRow* x, ::RPG::GameCore::ActivityBannerCompanyMissionRow* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityBannerCompanyMissionRow*, ::RPG::GameCore::ActivityBannerCompanyMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE_COMPARE_OFFSET))(this, x, y);
		}
	};
}
