#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_CONTENTINFO_GETASN1_OFFSET UNITYSDK_OFFSET(0x16143B30)
#define MONO_SECURITY_PKCS7_CONTENTINFO_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x16143B20)
#define MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x16143C80)
#define MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x16143C60)
#define MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x16143C90)
#define MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x16143C70)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16143900)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16143940)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16143980)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x161438D0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_ContentInfo_TypeDefinitionIndex = 2249;

	class PKCS7_ContentInfo : public ::System::Object
	{
	public:
		::System::String* contentType; // 0x10
		::Mono::Security::ASN1* content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* oid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_1_OFFSET))(this, oid);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_2_OFFSET))(this, data);
		}

		::System::Void _ctor_3(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_3_OFFSET))(this, asn1);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_Content()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Mono::Security::ASN1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENT_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GETASN1_OFFSET))(this);
		}
	};
}
