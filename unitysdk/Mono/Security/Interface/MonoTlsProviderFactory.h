#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }

#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B64EE70)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 2288;

	class MonoTlsProviderFactory : public ::System::Object
	{
	public:
		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET))();
		}
	};
}
