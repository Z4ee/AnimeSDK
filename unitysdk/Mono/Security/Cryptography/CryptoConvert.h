#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x18523550)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET UNITYSDK_OFFSET(0x18522140)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET UNITYSDK_OFFSET(0x185241B0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET UNITYSDK_OFFSET(0x185233F0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET UNITYSDK_OFFSET(0x18523460)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET UNITYSDK_OFFSET(0x185234D0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConvert_TypeDefinitionIndex = 2289;

	class CryptoConvert : public ::System::Object
	{
	public:
		static ::System::Int32 ToInt32LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ToUInt32LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* Trim(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET))(a1, a2);
		}

		static ::System::String* ToHex(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET))(a1);
		}
	};
}
