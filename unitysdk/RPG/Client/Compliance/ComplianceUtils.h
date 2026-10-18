#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }

#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ALLOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0xCBAD190)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_CANCHANGENICKNAME_OFFSET UNITYSDK_OFFSET(0xCBAD2B0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETAGEGROUP_OFFSET UNITYSDK_OFFSET(0xCBADAD0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETCOUNTRYID_OFFSET UNITYSDK_OFFSET(0xCBAD490)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETGACHAPOOLFTCDESC_OFFSET UNITYSDK_OFFSET(0xCBADB50)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ISAGEGATEOPEN_OFFSET UNITYSDK_OFFSET(0xCBAD050)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ISFTCOPEN_OFFSET UNITYSDK_OFFSET(0xCBACF90)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS__ISMINOR_OFFSET UNITYSDK_OFFSET(0xCBAD410)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS__ISUSCOUNTRY_OFFSET UNITYSDK_OFFSET(0xCBAD0E0)

namespace RPG::Client::Compliance
{
	inline static constexpr unsigned int ComplianceUtils_TypeDefinitionIndex = 74812;

	class ComplianceUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsFtcOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ISFTCOPEN_OFFSET))();
		}

		static ::System::Boolean IsAgeGateOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ISAGEGATEOPEN_OFFSET))();
		}

		static ::System::Boolean AllowCommunity()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ALLOWCOMMUNITY_OFFSET))();
		}

		static ::System::Boolean CanChangeNickname()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_CANCHANGENICKNAME_OFFSET))();
		}

		static ::System::UInt32 GetCountryID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETCOUNTRYID_OFFSET))();
		}

		static ::System::UInt32 GetAgeGroup()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETAGEGROUP_OFFSET))();
		}

		static ::System::Boolean _IsMinor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS__ISMINOR_OFFSET))();
		}

		static ::System::Boolean _IsUSCountry()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS__ISUSCOUNTRY_OFFSET))();
		}

		static ::RPG::Client::TextID GetGachaPoolFtcDesc(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETGACHAPOOLFTCDESC_OFFSET))(a1);
		}
	};
}
