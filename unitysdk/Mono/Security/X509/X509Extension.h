#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X509EXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x1E718600)
#define MONO_SECURITY_X509_X509EXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x1E718610)
#define MONO_SECURITY_X509_X509EXTENSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E718980)
#define MONO_SECURITY_X509_X509EXTENSION_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E718AF0)
#define MONO_SECURITY_X509_X509EXTENSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E718B10)
#define MONO_SECURITY_X509_X509EXTENSION_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1E718620)
#define MONO_SECURITY_X509_X509EXTENSION_GET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1E718950)
#define MONO_SECURITY_X509_X509EXTENSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E718970)
#define MONO_SECURITY_X509_X509EXTENSION_GET_OID_OFFSET UNITYSDK_OFFSET(0x1E718940)
#define MONO_SECURITY_X509_X509EXTENSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7185D0)
#define MONO_SECURITY_X509_X509EXTENSION_SET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1E718960)
#define MONO_SECURITY_X509_X509EXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7191C0)
#define MONO_SECURITY_X509_X509EXTENSION_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1E718BA0)
#define MONO_SECURITY_X509_X509EXTENSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E718100)
#define MONO_SECURITY_X509_X509EXTENSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7184A0)
#define MONO_SECURITY_X509_X509EXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7180F0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Extension_TypeDefinitionIndex = 2302;

	class X509Extension : public ::System::Object
	{
	public:
		::Mono::Security::ASN1* extnValue; // 0x10
		::System::String* extnOid; // 0x18
		::System::Boolean extnCritical; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION__CTOR_1_OFFSET))(this, asn1);
		}

		::System::Void _ctor_2(::Mono::Security::X509::X509Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Extension*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION__CTOR_2_OFFSET))(this, extension);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_DECODE_OFFSET))(this);
		}

		::System::Void Encode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_ENCODE_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_ASN1_OFFSET))(this);
		}

		::System::String* get_Oid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_OID_OFFSET))(this);
		}

		::System::Boolean get_Critical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_CRITICAL_OFFSET))(this);
		}

		::System::Void set_Critical(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_SET_CRITICAL_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_NAME_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_Value()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_EQUALS_OFFSET))(this, obj);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GETBYTES_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteLine(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_WRITELINE_OFFSET))(this, sb, n, pos);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_TOSTRING_OFFSET))(this);
		}
	};
}
