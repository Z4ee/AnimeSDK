#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityBannerCompanyMissionRow; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A286610)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2861B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityUtils_CompanyRowCompare_TypeDefinitionIndex = 63597;

	class CompanionMissionActivityUtils_CompanyRowCompare : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::GameCore::ActivityBannerCompanyMissionRow* a1, ::RPG::GameCore::ActivityBannerCompanyMissionRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityBannerCompanyMissionRow*, ::RPG::GameCore::ActivityBannerCompanyMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_COMPANYROWCOMPARE_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
