#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1FBD6670)
#define MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FBD68A0)
#define MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBD68E0)
#define MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD6650)
#define MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBD6660)
#define MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD65A0)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int CertificatePoliciesExtension_TypeDefinitionIndex = 2332;

	class CertificatePoliciesExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::System::Collections::Hashtable* policies; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION_DECODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_CERTIFICATEPOLICIESEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
