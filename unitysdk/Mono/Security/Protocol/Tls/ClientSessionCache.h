#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class ClientSessionInfo; }
namespace Mono::Security::Protocol::Tls { class Context; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_ADD_OFFSET UNITYSDK_OFFSET(0x1C3C05B0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_FROMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C3C0FB0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_FROMHOST_OFFSET UNITYSDK_OFFSET(0x1C3C0930)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_SETCONTEXTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1C3C1370)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_SETCONTEXTINCACHE_OFFSET UNITYSDK_OFFSET(0x1C3C1200)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3C04F0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C14E0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ClientSessionCache_TypeDefinitionIndex = 2354;

	class ClientSessionCache : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_cache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(ClientSessionCache_TypeDefinitionIndex)->GetStaticField(0x2370);
		}
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ClientSessionCache_TypeDefinitionIndex)->GetStaticField(0x2378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void Add(::System::String* host, ::Il2CppArray<::System::Byte>* id)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_ADD_OFFSET))(host, id);
		}

		static ::Il2CppArray<::System::Byte>* FromHost(::System::String* host)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_FROMHOST_OFFSET))(host);
		}

		static ::Mono::Security::Protocol::Tls::ClientSessionInfo* FromContext(::Mono::Security::Protocol::Tls::Context* context, ::System::Boolean checkValidity)
		{
			return ((::Mono::Security::Protocol::Tls::ClientSessionInfo*(*)(::Mono::Security::Protocol::Tls::Context*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_FROMCONTEXT_OFFSET))(context, checkValidity);
		}

		static ::System::Boolean SetContextInCache(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Boolean(*)(::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_SETCONTEXTINCACHE_OFFSET))(context);
		}

		static ::System::Boolean SetContextFromCache(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Boolean(*)(::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTSESSIONCACHE_SETCONTEXTFROMCACHE_OFFSET))(context);
		}
	};
}
