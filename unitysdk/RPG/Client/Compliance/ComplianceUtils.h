#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }

#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ALLOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0xCBA4E70)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_CANCHANGENICKNAME_OFFSET UNITYSDK_OFFSET(0xCBA4FA0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETAGEGROUP_OFFSET UNITYSDK_OFFSET(0xCBA57C0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETCOUNTRYID_OFFSET UNITYSDK_OFFSET(0xCBA5180)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_GETGACHAPOOLFTCDESC_OFFSET UNITYSDK_OFFSET(0xCBA5840)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ISAGEGATEOPEN_OFFSET UNITYSDK_OFFSET(0xCBA4D30)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS_ISFTCOPEN_OFFSET UNITYSDK_OFFSET(0xCBA4C70)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS__ISMINOR_OFFSET UNITYSDK_OFFSET(0xCBA5100)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEUTILS__ISUSCOUNTRY_OFFSET UNITYSDK_OFFSET(0xCBA4DC0)

namespace RPG::Client::Compliance
{
	inline static constexpr unsigned int ComplianceUtils_TypeDefinitionIndex = 74811;

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
