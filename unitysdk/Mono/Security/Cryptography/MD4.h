#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F5069E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET UNITYSDK_OFFSET(0x1F506990)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1F506980)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_TypeDefinitionIndex = 2458;

	class MD4 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD4* Create()
		{
			return ((::Mono::Security::Cryptography::MD4*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::MD4* Create_1(::System::String* hashName)
		{
			return ((::Mono::Security::Cryptography::MD4*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_1_OFFSET))(hashName);
		}
	};
}
