#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_OFFSET UNITYSDK_OFFSET(0x1B64A030)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64A020)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2_TypeDefinitionIndex = 2295;

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
	};
}
