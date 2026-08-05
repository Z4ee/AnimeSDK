#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1F5FDB90)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1F5FDB80)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DECODE_OFFSET UNITYSDK_OFFSET(0x1F5FCBF0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x1F5FD140)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_ENCRYPTED_OFFSET UNITYSDK_OFFSET(0x1F5FD0C0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_KEYTYPE_OFFSET UNITYSDK_OFFSET(0x1F5FD0D0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_RSA_OFFSET UNITYSDK_OFFSET(0x1F5FD0F0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_WEAK_OFFSET UNITYSDK_OFFSET(0x1F5FD110)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SAVE_1_OFFSET UNITYSDK_OFFSET(0x1F5FD340)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SAVE_OFFSET UNITYSDK_OFFSET(0x1F5FD330)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SET_KEYTYPE_OFFSET UNITYSDK_OFFSET(0x1F5FD0E0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SET_RSA_OFFSET UNITYSDK_OFFSET(0x1F5FD100)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SET_WEAK_OFFSET UNITYSDK_OFFSET(0x1F5FD130)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5FCB40)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FCB30)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int PrivateKey_TypeDefinitionIndex = 2478;

	class PrivateKey : public ::System::Object
	{
	public:
		// static const ::System::UInt32 magic = 0xB0B5F11E; // 0x0
		::System::Security::Cryptography::RSA* rsa; // 0x10
		::System::Boolean weak; // 0x18
		::System::Boolean encrypted; // 0x19
		::System::Int32 keyType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_1_OFFSET))(this, data, password);
		}

		::System::Boolean get_Encrypted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_ENCRYPTED_OFFSET))(this);
		}

		::System::Int32 get_KeyType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_KEYTYPE_OFFSET))(this);
		}

		::System::Void set_KeyType(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SET_KEYTYPE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_RSA_OFFSET))(this);
		}

		::System::Void set_RSA(::System::Security::Cryptography::RSA* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SET_RSA_OFFSET))(this, value);
		}

		::System::Boolean get_Weak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_WEAK_OFFSET))(this);
		}

		::System::Void set_Weak(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SET_WEAK_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::Il2CppArray<::System::Byte>* salt, ::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DERIVEKEY_OFFSET))(this, salt, password);
		}

		::System::Boolean Decode(::Il2CppArray<::System::Byte>* pvk, ::System::String* password)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DECODE_OFFSET))(this, pvk, password);
		}

		::System::Void Save(::System::String* filename)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SAVE_OFFSET))(this, filename);
		}

		::System::Void Save_1(::System::String* filename, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_SAVE_1_OFFSET))(this, filename, password);
		}

		static ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::System::String* filename)
		{
			return ((::Mono::Security::Authenticode::PrivateKey*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_OFFSET))(filename);
		}

		static ::Mono::Security::Authenticode::PrivateKey* CreateFromFile_1(::System::String* filename, ::System::String* password)
		{
			return ((::Mono::Security::Authenticode::PrivateKey*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_1_OFFSET))(filename, password);
		}
	};
}
