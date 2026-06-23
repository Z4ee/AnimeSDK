#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net::Security { class SslStream; }

#define MONO_NET_SECURITY_NOREFLECTIONHELPER_CREATEHTTPLISTENER_OFFSET UNITYSDK_OFFSET(0x1B1B1590)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_CREATEHTTPSREQUEST_OFFSET UNITYSDK_OFFSET(0x1B1B14D0)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETDEFAULTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1B1B1200)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1B1B1050)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETMONOSSLSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1B1B1700)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETMONOSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1B1B1680)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1B1B17F0)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B1B12D0)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B1B1330)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1B1B1430)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B1B1390)
#define MONO_NET_SECURITY_NOREFLECTIONHELPER_ISPROVIDERSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B1B1790)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int NoReflectionHelper_TypeDefinitionIndex = 2631;

	class NoReflectionHelper : public ::System::Object
	{
	public:
		static ::System::Object* GetInternalValidator(::System::Object* provider, ::System::Object* settings)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETINTERNALVALIDATOR_OFFSET))(provider, settings);
		}

		static ::System::Object* GetDefaultValidator(::System::Object* settings)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETDEFAULTVALIDATOR_OFFSET))(settings);
		}

		static ::System::Object* GetProvider()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_OFFSET))();
		}

		static ::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_INITIALIZE_OFFSET))();
		}

		static ::System::Void Initialize_1(::System::String* provider)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_INITIALIZE_1_OFFSET))(provider);
		}

		static ::System::Net::HttpWebRequest* CreateHttpsRequest(::System::Uri* requestUri, ::System::Object* provider, ::System::Object* settings)
		{
			return ((::System::Net::HttpWebRequest*(*)(::System::Uri*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_CREATEHTTPSREQUEST_OFFSET))(requestUri, provider, settings);
		}

		static ::System::Object* CreateHttpListener(::System::Object* certificate, ::System::Object* provider, ::System::Object* settings)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_CREATEHTTPLISTENER_OFFSET))(certificate, provider, settings);
		}

		static ::System::Object* GetMonoSslStream(::System::Net::Security::SslStream* stream)
		{
			return ((::System::Object*(*)(::System::Net::Security::SslStream*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETMONOSSLSTREAM_OFFSET))(stream);
		}

		static ::System::Object* GetMonoSslStream_1(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Object*(*)(::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETMONOSSLSTREAM_1_OFFSET))(context);
		}

		static ::System::Boolean IsProviderSupported(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_ISPROVIDERSUPPORTED_OFFSET))(name);
		}

		static ::System::Object* GetProvider_1(::System::String* name)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_1_OFFSET))(name);
		}
	};
}
