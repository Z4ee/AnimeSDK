#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_SHA224_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1DB62CC0)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224_CREATE_OFFSET UNITYSDK_OFFSET(0x1DB62B90)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62B80)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SHA224_TypeDefinitionIndex = 2470;

	class SHA224 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::SHA224* Create()
		{
			return ((::Mono::Security::Cryptography::SHA224*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::SHA224* Create_1(::System::String* hashName)
		{
			return ((::Mono::Security::Cryptography::SHA224*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224_CREATE_1_OFFSET))(hashName);
		}
	};
}
