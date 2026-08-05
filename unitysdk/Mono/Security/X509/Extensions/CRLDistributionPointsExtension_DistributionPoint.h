#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/Extensions/CRLDistributionPointsExtension_ReasonFlags.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_GET_CRLISSUER_OFFSET UNITYSDK_OFFSET(0x1FADA390)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FADA350)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_GET_REASONS_OFFSET UNITYSDK_OFFSET(0x1FADA370)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_SET_CRLISSUER_OFFSET UNITYSDK_OFFSET(0x1FADA3A0)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FADA360)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_SET_REASONS_OFFSET UNITYSDK_OFFSET(0x1FADA380)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FADA3C0)
#define MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FADA3B0)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int CRLDistributionPointsExtension_DistributionPoint_TypeDefinitionIndex = 2330;

	class CRLDistributionPointsExtension_DistributionPoint : public ::System::Object
	{
	public:
		::System::String* _CRLIssuer_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags _Reasons_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* dp, ::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags reasons, ::System::String* issuer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT__CTOR_OFFSET))(this, dp, reasons, issuer);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* dp)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT__CTOR_1_OFFSET))(this, dp);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_SET_NAME_OFFSET))(this, value);
		}

		::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags get_Reasons()
		{
			return ((::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_GET_REASONS_OFFSET))(this);
		}

		::System::Void set_Reasons(::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::Extensions::CRLDistributionPointsExtension_ReasonFlags))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_SET_REASONS_OFFSET))(this, value);
		}

		::System::String* get_CRLIssuer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_GET_CRLISSUER_OFFSET))(this);
		}

		::System::Void set_CRLIssuer(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CRLDISTRIBUTIONPOINTSEXTENSION_DISTRIBUTIONPOINT_SET_CRLISSUER_OFFSET))(this, value);
		}
	};
}
