#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET UNITYSDK_OFFSET(0x18668160)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x18667650)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x186604D0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18667750)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET UNITYSDK_OFFSET(0x18667BC0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET UNITYSDK_OFFSET(0x18668250)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18668B60)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 2432;

	class MonoTlsProviderFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>** StaticGet_providerRegistration()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xF1E0);
		}
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xF1E8);
		}
		static ::Mono::Security::Interface::MonoTlsProvider** StaticGet_defaultProvider()
		{
			return (::Mono::Security::Interface::MonoTlsProvider**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xF1F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>** StaticGet_providerCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xF1F8);
		}
		static ::System::Guid* StaticGet_LegacyId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x50A0);
		}
		static ::System::Guid* StaticGet_AppleTlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x50B0);
		}
		static ::System::Guid* StaticGet_UnityTlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x50C0);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x50D0);
		}
		static ::System::Guid* StaticGet_BtlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x50D4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY__CCTOR_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProviderInternal()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET))();
		}

		static ::System::Void InitializeInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* LookupProvider(::System::String* name, ::System::Boolean throwOnError)
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET))(name, throwOnError);
		}

		static ::System::Void InitializeProviderRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* CreateDefaultProviderImpl()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET))();
		}
	};
}
