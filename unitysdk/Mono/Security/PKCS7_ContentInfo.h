#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_CONTENTINFO_GETASN1_OFFSET UNITYSDK_OFFSET(0x1BB28050)
#define MONO_SECURITY_PKCS7_CONTENTINFO_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1BB28040)
#define MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BB28150)
#define MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1BB28130)
#define MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BB28160)
#define MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1BB28140)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB27CF0)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BB27D30)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BB27D70)
#define MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB27CC0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_ContentInfo_TypeDefinitionIndex = 2261;

	class PKCS7_ContentInfo : public ::System::Object
	{
	public:
		::System::String* contentType; // 0x10
		::Mono::Security::ASN1* content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::Mono::Security::ASN1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO__CTOR_3_OFFSET))(this, a1);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_Content()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Mono::Security::ASN1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_CONTENTINFO_GETASN1_OFFSET))(this);
		}
	};
}
