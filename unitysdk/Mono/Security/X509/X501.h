#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET UNITYSDK_OFFSET(0x1853CE20)
#define MONO_SECURITY_X509_X501_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1853E1F0)
#define MONO_SECURITY_X509_X501_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1853CCD0)
#define MONO_SECURITY_X509_X501__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853E3D0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X501_TypeDefinitionIndex = 2255;

	class X501 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_organizationalUnitName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AF80);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_organizationName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AF88);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_domainComponent()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AF90);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_localityName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AF98);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_title()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFA0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_countryName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFA8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_givenName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFB0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFB8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_userid()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFC0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_surname()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFC8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_initial()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFD0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFD8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_stateOrProvinceName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFE0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_dnQualifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFE8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_streetAddress()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x1AFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501__CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::Mono::Security::ASN1* a1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::Mono::Security::ASN1* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AppendEntry(::System::Text::StringBuilder* a1, ::Mono::Security::ASN1* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET))(a1, a2, a3);
		}
	};
}
