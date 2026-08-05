#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F5068F0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_OFFSET UNITYSDK_OFFSET(0x1F5068A0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F506890)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2_TypeDefinitionIndex = 2456;

	class MD2 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD2* Create()
		{
			return ((::Mono::Security::Cryptography::MD2*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::MD2* Create_1(::System::String* hashName)
		{
			return ((::Mono::Security::Cryptography::MD2*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_1_OFFSET))(hashName);
		}
	};
}
