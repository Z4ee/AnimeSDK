#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x177660A0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x17766090)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DECODE_OFFSET UNITYSDK_OFFSET(0x17765940)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x17765E10)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_RSA_OFFSET UNITYSDK_OFFSET(0x17765E00)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x17765890)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int PrivateKey_TypeDefinitionIndex = 2302;

	class PrivateKey : public ::System::Object
	{
	public:
		::System::Security::Cryptography::RSA* rsa; // 0x10
		::System::Int32 keyType; // 0x18
		::System::Boolean encrypted; // 0x1C
		::System::Boolean weak; // 0x1D

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_OFFSET))(this, data, password);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_RSA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::Il2CppArray<::System::Byte>* salt, ::System::String* password)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DERIVEKEY_OFFSET))(this, salt, password);
		}

		::System::Boolean Decode(::Il2CppArray<::System::Byte>* pvk, ::System::String* password)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DECODE_OFFSET))(this, pvk, password);
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
