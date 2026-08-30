#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_ADJUST_OFFSET UNITYSDK_OFFSET(0x1BB3B140)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEIV_OFFSET UNITYSDK_OFFSET(0x1BB32550)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x1BB324E0)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEMAC_OFFSET UNITYSDK_OFFSET(0x1BB34B50)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVE_OFFSET UNITYSDK_OFFSET(0x1BB3B200)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1BB3B120)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BB3B130)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1BB32300)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x1BB32400)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB3B8A0)
#define MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB322F0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_DeriveBytes_TypeDefinitionIndex = 2265;

	class PKCS12_DeriveBytes : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_keyDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0x2CD60);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_macDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0x2CD68);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_ivDiversifier()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS12_DeriveBytes_TypeDefinitionIndex)->GetStaticField(0x2CD70);
		}
		::Il2CppArray<::System::Byte>* _salt; // 0x10
		::System::String* _hashName; // 0x18
		::Il2CppArray<::System::Byte>* _password; // 0x20
		::System::Int32 _iterations; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES__CCTOR_OFFSET))();
		}

		::System::Void set_HashName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_HASHNAME_OFFSET))(this, a1);
		}

		::System::Void set_IterationCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void set_Password(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_PASSWORD_OFFSET))(this, a1);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_SET_SALT_OFFSET))(this, a1);
		}

		::System::Void Adjust(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_ADJUST_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Derive(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* DeriveIV(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEIV_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* DeriveMAC(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DERIVEBYTES_DERIVEMAC_OFFSET))(this, a1);
		}
	};
}
