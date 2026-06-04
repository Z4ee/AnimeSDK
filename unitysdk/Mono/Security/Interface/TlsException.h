#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/System/Exception.h"

namespace Mono::Security::Interface { class Alert; }
namespace System { class String; }

#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1852A010)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18529FA0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsException_TypeDefinitionIndex = 2286;

	class TlsException : public ::System::Exception
	{
	public:
		::Mono::Security::Interface::Alert* alert; // 0x88

		::System::Void _ctor(::Mono::Security::Interface::Alert* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::Alert*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Mono::Security::Interface::AlertDescription a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::AlertDescription, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
