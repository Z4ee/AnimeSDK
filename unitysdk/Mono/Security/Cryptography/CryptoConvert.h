#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x1613BB80)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET UNITYSDK_OFFSET(0x1613A3C0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET UNITYSDK_OFFSET(0x1613C5F0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET UNITYSDK_OFFSET(0x1613B9C0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET UNITYSDK_OFFSET(0x1613BA60)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET UNITYSDK_OFFSET(0x1613BB00)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConvert_TypeDefinitionIndex = 2288;

	class CryptoConvert : public ::System::Object
	{
	public:
		static ::System::Int32 ToInt32LE(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET))(bytes, offset);
		}

		static ::System::UInt32 ToUInt32LE(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET))(bytes, offset);
		}

		static ::Il2CppArray<::System::Byte>* Trim(::Il2CppArray<::System::Byte>* array)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET))(array);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Il2CppArray<::System::Byte>* blob)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET))(blob);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob_1(::Il2CppArray<::System::Byte>* blob, ::System::Int32 offset)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET))(blob, offset);
		}

		static ::System::String* ToHex(::Il2CppArray<::System::Byte>* input)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET))(input);
		}
	};
}
