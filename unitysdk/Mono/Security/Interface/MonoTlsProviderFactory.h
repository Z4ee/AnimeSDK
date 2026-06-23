#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class IMonoSslStream; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_CREATEHTTPLISTENER_OFFSET UNITYSDK_OFFSET(0x1E0E8E50)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_CREATEHTTPSREQUEST_OFFSET UNITYSDK_OFFSET(0x1E0E8E40)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETMONOSSLSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1E0E8F70)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETMONOSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1E0E8EB0)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1E0E8D10)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1E0E8A60)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E0E8B10)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E0E8C10)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E0E8B70)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_ISPROVIDERSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E0E8CB0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 2442;

	class MonoTlsProviderFactory : public ::System::Object
	{
	public:
		// static const ::System::Int32 InternalVersion = 0x1; // 0x0

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET))();
		}

		static ::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_INITIALIZE_OFFSET))();
		}

		static ::System::Void Initialize_1(::System::String* provider)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_INITIALIZE_1_OFFSET))(provider);
		}

		static ::System::Boolean IsProviderSupported(::System::String* provider)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_ISPROVIDERSUPPORTED_OFFSET))(provider);
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider_1(::System::String* provider)
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_1_OFFSET))(provider);
		}

		static ::System::Net::HttpWebRequest* CreateHttpsRequest(::System::Uri* requestUri, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Net::HttpWebRequest*(*)(::System::Uri*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_CREATEHTTPSREQUEST_OFFSET))(requestUri, provider, settings);
		}

		static ::System::Net::HttpListener* CreateHttpListener(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Net::HttpListener*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_CREATEHTTPLISTENER_OFFSET))(certificate, provider, settings);
		}

		static ::Mono::Security::Interface::IMonoSslStream* GetMonoSslStream(::System::Net::Security::SslStream* stream)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::System::Net::Security::SslStream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETMONOSSLSTREAM_OFFSET))(stream);
		}

		static ::Mono::Security::Interface::IMonoSslStream* GetMonoSslStream_1(::System::Net::HttpListenerContext* context)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETMONOSSLSTREAM_1_OFFSET))(context);
		}
	};
}
