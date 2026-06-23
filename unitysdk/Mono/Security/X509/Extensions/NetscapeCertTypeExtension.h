#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/Extensions/NetscapeCertTypeExtension_CertTypes.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1E1E41D0)
#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E1E4300)
#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_SUPPORT_OFFSET UNITYSDK_OFFSET(0x1E1E4340)
#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E43B0)
#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E41B0)
#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E1E41C0)
#define MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E4170)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int NetscapeCertTypeExtension_TypeDefinitionIndex = 2338;

	class NetscapeCertTypeExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::System::Int32 ctbits; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_DECODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Support(::Mono::Security::X509::Extensions::NetscapeCertTypeExtension_CertTypes usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::Extensions::NetscapeCertTypeExtension_CertTypes))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_SUPPORT_OFFSET))(this, usage);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_NETSCAPECERTTYPEEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
