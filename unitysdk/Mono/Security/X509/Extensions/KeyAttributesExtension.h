#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/Extensions/KeyUsages.h"
#include "unitysdk/Mono/Security/X509/X509Extension.h"
#include "unitysdk/System/DateTime.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1C275670)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_KEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C275920)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C275A20)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x1C275A60)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x1C275A70)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_SUPPORT_OFFSET UNITYSDK_OFFSET(0x1C275A80)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C275AF0)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C275650)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C275660)
#define MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C275610)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int KeyAttributesExtension_TypeDefinitionIndex = 2336;

	class KeyAttributesExtension : public ::Mono::Security::X509::X509Extension
	{
	public:
		::Il2CppArray<::System::Byte>* keyId; // 0x28
		::System::Int32 kubits; // 0x30
		::System::DateTime notAfter; // 0x38
		::System::DateTime notBefore; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_DECODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_KeyIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_KEYIDENTIFIER_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_NAME_OFFSET))(this);
		}

		::System::DateTime get_NotAfter()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_NOTAFTER_OFFSET))(this);
		}

		::System::DateTime get_NotBefore()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_GET_NOTBEFORE_OFFSET))(this);
		}

		::System::Boolean Support(::Mono::Security::X509::Extensions::KeyUsages usage)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::Extensions::KeyUsages))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_SUPPORT_OFFSET))(this, usage);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_KEYATTRIBUTESEXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
