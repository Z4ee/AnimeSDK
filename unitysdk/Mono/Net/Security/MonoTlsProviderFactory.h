#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET UNITYSDK_OFFSET(0x1A0F1140)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_DEBUG_OFFSET UNITYSDK_OFFSET(0x1A0F21F0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A0F04D0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1A0F24F0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A0F22C0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1A0F2550)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEDEBUG_OFFSET UNITYSDK_OFFSET(0x1A0F20F0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A0F1260)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A0F0600)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET UNITYSDK_OFFSET(0x1A0F0B10)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1A0F26D0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A0F2670)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_ISPROVIDERSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A0F2350)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDERTYPE_OFFSET UNITYSDK_OFFSET(0x1A0F1CA0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A0F1480)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F2730)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 2630;

	class MonoTlsProviderFactory : public ::System::Object
	{
	public:
		static ::Mono::Security::Interface::MonoTlsProvider** StaticGet_defaultProvider()
		{
			return (::Mono::Security::Interface::MonoTlsProvider**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x28A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>** StaticGet_providerRegistration()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x28A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>** StaticGet_providerCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x28B0);
		}
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x28B8);
		}
		static ::System::Boolean* StaticGet_enableDebug()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x10A0);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x10A1);
		}
		static ::System::Guid* StaticGet_AppleTlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x10A4);
		}
		static ::System::Guid* StaticGet_LegacyId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x10B4);
		}
		static ::System::Guid* StaticGet_UnityTlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x10C4);
		}
		static ::System::Guid* StaticGet_BtlsId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(MonoTlsProviderFactory_TypeDefinitionIndex)->GetStaticField(0x10D4);
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

		static ::System::Void InitializeInternal_1(::System::String* provider)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_1_OFFSET))(provider);
		}

		static ::System::Type* LookupProviderType(::System::String* name, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDERTYPE_OFFSET))(name, throwOnError);
		}

		static ::Mono::Security::Interface::MonoTlsProvider* LookupProvider(::System::String* name, ::System::Boolean throwOnError)
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET))(name, throwOnError);
		}

		static ::System::Void InitializeDebug()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEDEBUG_OFFSET))();
		}

		static ::System::Void Debug(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_DEBUG_OFFSET))(message, args);
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

		static ::System::Boolean IsProviderSupported(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_ISPROVIDERSUPPORTED_OFFSET))(name);
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider_1(::System::String* name)
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_1_OFFSET))(name);
		}

		static ::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZE_OFFSET))();
		}

		static ::System::Void Initialize_1(::System::String* provider)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZE_1_OFFSET))(provider);
		}
	};
}
