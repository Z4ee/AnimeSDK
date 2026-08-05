#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertDescription.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertLevel.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Mono::Security::Protocol::Tls { class Alert; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION_GET_ALERT_OFFSET UNITYSDK_OFFSET(0x1F93BD10)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F93BDA0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F93BDF0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F93BE80)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F93BFA0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F93C090)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1F93A090)
#define MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F93BD20)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int TlsException_TypeDefinitionIndex = 2387;

	class TlsException : public ::System::Exception
	{
	public:
		::Mono::Security::Protocol::Tls::Alert* alert; // 0x88

		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_OFFSET))(this, message);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_2_OFFSET))(this, message, ex);
		}

		::System::Void _ctor_3(::Mono::Security::Protocol::Tls::AlertLevel level, ::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertLevel, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_3_OFFSET))(this, level, description);
		}

		::System::Void _ctor_4(::Mono::Security::Protocol::Tls::AlertLevel level, ::Mono::Security::Protocol::Tls::AlertDescription description, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertLevel, ::Mono::Security::Protocol::Tls::AlertDescription, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_4_OFFSET))(this, level, description, message);
		}

		::System::Void _ctor_5(::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_5_OFFSET))(this, description);
		}

		::System::Void _ctor_6(::Mono::Security::Protocol::Tls::AlertDescription description, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::AlertDescription, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION__CTOR_6_OFFSET))(this, description, message);
		}

		::Mono::Security::Protocol::Tls::Alert* get_Alert()
		{
			return ((::Mono::Security::Protocol::Tls::Alert*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSEXCEPTION_GET_ALERT_OFFSET))(this);
		}
	};
}
