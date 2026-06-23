#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X520_AttributeTypeAndValue; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET UNITYSDK_OFFSET(0x1E1E4A10)
#define MONO_SECURITY_X509_X501_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E7550)
#define MONO_SECURITY_X509_X501_GETATTRIBUTEFROMOID_OFFSET UNITYSDK_OFFSET(0x1E1E5AE0)
#define MONO_SECURITY_X509_X501_ISHEX_OFFSET UNITYSDK_OFFSET(0x1E1E6750)
#define MONO_SECURITY_X509_X501_ISOID_OFFSET UNITYSDK_OFFSET(0x1E1E6510)
#define MONO_SECURITY_X509_X501_READATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E1E6580)
#define MONO_SECURITY_X509_X501_READESCAPED_OFFSET UNITYSDK_OFFSET(0x1E1E6D80)
#define MONO_SECURITY_X509_X501_READHEX_OFFSET UNITYSDK_OFFSET(0x1E1E6790)
#define MONO_SECURITY_X509_X501_READQUOTED_OFFSET UNITYSDK_OFFSET(0x1E1E6FA0)
#define MONO_SECURITY_X509_X501_READVALUE_OFFSET UNITYSDK_OFFSET(0x1E1E71F0)
#define MONO_SECURITY_X509_X501_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E1E58E0)
#define MONO_SECURITY_X509_X501_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E48A0)
#define MONO_SECURITY_X509_X501__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E77F0)
#define MONO_SECURITY_X509_X501__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E4890)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X501_TypeDefinitionIndex = 2292;

	class X501 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_title()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x24D0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x24D8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_surname()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x24E0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_organizationalUnitName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x24E8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_domainComponent()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x24F0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_localityName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x24F8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_streetAddress()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2500);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2508);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_organizationName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2510);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_stateOrProvinceName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2518);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_countryName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2520);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_userid()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2528);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_dnQualifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2530);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_givenName()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2538);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_initial()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(X501_TypeDefinitionIndex)->GetStaticField(0x2540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501__CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::Mono::Security::ASN1* seq)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_OFFSET))(seq);
		}

		static ::System::String* ToString_1(::Mono::Security::ASN1* seq, ::System::Boolean reversed, ::System::String* separator, ::System::Boolean quotes)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_1_OFFSET))(seq, reversed, separator, quotes);
		}

		static ::System::Void AppendEntry(::System::Text::StringBuilder* sb, ::Mono::Security::ASN1* entry, ::System::Boolean quotes)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET))(sb, entry, quotes);
		}

		static ::Mono::Security::X509::X520_AttributeTypeAndValue* GetAttributeFromOid(::System::String* attributeType)
		{
			return ((::Mono::Security::X509::X520_AttributeTypeAndValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_GETATTRIBUTEFROMOID_OFFSET))(attributeType);
		}

		static ::System::Boolean IsOid(::System::String* oid)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_ISOID_OFFSET))(oid);
		}

		static ::Mono::Security::X509::X520_AttributeTypeAndValue* ReadAttribute(::System::String* value, ::System::Int32& pos)
		{
			return ((::Mono::Security::X509::X520_AttributeTypeAndValue*(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READATTRIBUTE_OFFSET))(value, pos);
		}

		static ::System::Boolean IsHex(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_ISHEX_OFFSET))(c);
		}

		static ::System::String* ReadHex(::System::String* value, ::System::Int32& pos)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READHEX_OFFSET))(value, pos);
		}

		static ::System::Int32 ReadEscaped(::System::Text::StringBuilder* sb, ::System::String* value, ::System::Int32 pos)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READESCAPED_OFFSET))(sb, value, pos);
		}

		static ::System::Int32 ReadQuoted(::System::Text::StringBuilder* sb, ::System::String* value, ::System::Int32 pos)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READQUOTED_OFFSET))(sb, value, pos);
		}

		static ::System::String* ReadValue(::System::String* value, ::System::Int32& pos)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READVALUE_OFFSET))(value, pos);
		}

		static ::Mono::Security::ASN1* FromString(::System::String* rdn)
		{
			return ((::Mono::Security::ASN1*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_FROMSTRING_OFFSET))(rdn);
		}
	};
}
