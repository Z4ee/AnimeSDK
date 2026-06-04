#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x18522160)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x18522150)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DECODE_OFFSET UNITYSDK_OFFSET(0x185219D0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x18521EB0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_RSA_OFFSET UNITYSDK_OFFSET(0x18521EA0)
#define MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18521920)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int PrivateKey_TypeDefinitionIndex = 2302;

	class PrivateKey : public ::System::Object
	{
	public:
		::System::Security::Cryptography::RSA* rsa; // 0x10
		::System::Int32 keyType; // 0x18
		::System::Boolean weak; // 0x1C
		::System::Boolean encrypted; // 0x1D

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_GET_RSA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DeriveKey(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DERIVEKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Decode(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_DECODE_OFFSET))(this, a1, a2);
		}

		static ::Mono::Security::Authenticode::PrivateKey* CreateFromFile(::System::String* a1)
		{
			return ((::Mono::Security::Authenticode::PrivateKey*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_OFFSET))(a1);
		}

		static ::Mono::Security::Authenticode::PrivateKey* CreateFromFile_1(::System::String* a1, ::System::String* a2)
		{
			return ((::Mono::Security::Authenticode::PrivateKey*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_PRIVATEKEY_CREATEFROMFILE_1_OFFSET))(a1, a2);
		}
	};
}
