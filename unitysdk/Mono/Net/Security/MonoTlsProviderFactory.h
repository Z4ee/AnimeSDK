#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET UNITYSDK_OFFSET(0x1C47EBC0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C47E0E0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C477150)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C47E1E0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET UNITYSDK_OFFSET(0x1C47E620)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C47ECB0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C47F520)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 2444;

	class MonoTlsProviderFactory : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x30E30);
		}
		static ::Mono::Security::Interface::MonoTlsProvider** StaticGet_defaultProvider()
		{
			return (::Mono::Security::Interface::MonoTlsProvider**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x30E38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>** StaticGet_providerCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x30E40);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>** StaticGet_providerRegistration()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x30E48);
		}
		static ::System::Guid* StaticGet_LegacyId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xCF80);
		}
		static ::System::Guid* StaticGet_BtlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xCF90);
		}
		static ::System::Guid* StaticGet_AppleTlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xCFA0);
		}
		static ::System::Guid* StaticGet_UnityTlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xCFB0);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0xCFC0);
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

		static ::Mono::Security::Interface::MonoTlsProvider* LookupProvider(::System::String* a1, ::System::Boolean a2)
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET))(a1, a2);
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
