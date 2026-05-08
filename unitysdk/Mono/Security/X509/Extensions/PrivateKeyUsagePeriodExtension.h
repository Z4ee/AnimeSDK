#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"
#include "unitysdk/System/DateTime.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1C19CA80)
#define MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C19CBE0)
#define MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C19CC20)
#define MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C19CA60)
#define MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C19CA70)
#define MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C19CA20)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int PrivateKeyUsagePeriodExtension_TypeDefinitionIndex = 2341;

	class PrivateKeyUsagePeriodExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::System::DateTime notAfter; // 0x28
		::System::DateTime notBefore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION_DECODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_PRIVATEKEYUSAGEPERIODEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
