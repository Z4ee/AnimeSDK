#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1F8E7AF0)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1F8E7C90)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_GET_KEYPURPOSE_OFFSET UNITYSDK_OFFSET(0x1F8E8110)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F8E8120)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8E8160)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E7AD0)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F8E7AE0)
#define MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E7A20)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int ExtendedKeyUsageExtension_TypeDefinitionIndex = 2333;

	class ExtendedKeyUsageExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::System::Collections::ArrayList* keyPurpose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_DECODE_OFFSET))(this);
		}

		::System::Void Encode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_ENCODE_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_KeyPurpose()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_GET_KEYPURPOSE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_EXTENDEDKEYUSAGEEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
