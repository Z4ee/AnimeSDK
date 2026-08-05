#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/Extensions/KeyUsages.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1F8E87B0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1F8E88E0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_KEYUSAGE_OFFSET UNITYSDK_OFFSET(0x1F8E8BC0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F8E8C30)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SET_KEYUSAGE_OFFSET UNITYSDK_OFFSET(0x1F8E8BD0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SUPPORT_OFFSET UNITYSDK_OFFSET(0x1F8E8C70)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8E8CE0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E8760)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F8E8770)
#define MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E8750)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int KeyUsageExtension_TypeDefinitionIndex = 2337;

	class KeyUsageExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::System::Int32 kubits; // 0x28

		::System::Void _ctor(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_OFFSET))(this, asn1);
		}

		::System::Void _ctor_1(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_1_OFFSET))(this, extension);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION__CTOR_2_OFFSET))(this);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_DECODE_OFFSET))(this);
		}

		::System::Void Encode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_ENCODE_OFFSET))(this);
		}

		::Mono::Security::X509::Extensions::KeyUsages get_KeyUsage()
		{
			return ((::Mono::Security::X509::Extensions::KeyUsages(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_KEYUSAGE_OFFSET))(this);
		}

		::System::Void set_KeyUsage(::Mono::Security::X509::Extensions::KeyUsages value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::Extensions::KeyUsages))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SET_KEYUSAGE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Support(::Mono::Security::X509::Extensions::KeyUsages usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::Extensions::KeyUsages))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_SUPPORT_OFFSET))(this, usage);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYUSAGEEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
