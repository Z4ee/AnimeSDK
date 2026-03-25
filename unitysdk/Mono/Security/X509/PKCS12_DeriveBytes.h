#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_ADJUST_OFFSET UNITYSDK_OFFSET(0x16155C50)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEIV_OFFSET UNITYSDK_OFFSET(0x1614EE00)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x1614ED90)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEMAC_OFFSET UNITYSDK_OFFSET(0x16150EC0)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVE_OFFSET UNITYSDK_OFFSET(0x16155D40)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x16155C30)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x16155C40)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1614EBD0)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x1614ECC0)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CCTOR_OFFSET UNITYSDK_OFFSET(0x16156390)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1614EBC0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_DeriveBytes_TypeDefinitionIndex = 2253;

	class PKCS12_DeriveBytes : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_macDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0xEB80);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_ivDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0xEB88);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_keyDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0xEB90);
		}
		::Il2CppArray<::System::Byte>* _password; // 0x10
		::Il2CppArray<::System::Byte>* _salt; // 0x18
		::System::String* _hashName; // 0x20
		::System::Int32 _iterations; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CCTOR_OFFSET))();
		}

		::System::Void set_HashName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_HASHNAME_OFFSET))(this, value);
		}

		::System::Void set_IterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(this, value);
		}

		::System::Void set_Password(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_SALT_OFFSET))(this, value);
		}

		::System::Void Adjust(::Il2CppArray<::System::Byte>* a, ::System::Int32 aOff, ::Il2CppArray<::System::Byte>* b)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_ADJUST_OFFSET))(this, a, aOff, b);
		}

		::Il2CppArray<::System::Byte>* Derive(::Il2CppArray<::System::Byte>* diversifier, ::System::Int32 n)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVE_OFFSET))(this, diversifier, n);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEKEY_OFFSET))(this, size);
		}

		::Il2CppArray<::System::Byte>* DeriveIV(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEIV_OFFSET))(this, size);
		}

		::Il2CppArray<::System::Byte>* DeriveMAC(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEMAC_OFFSET))(this, size);
		}
	};
}
