#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_UNITY_DEBUG_CHECKANDTHROW_1_OFFSET UNITYSDK_OFFSET(0x1C480C80)
#define MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET UNITYSDK_OFFSET(0x1C480C00)

namespace Mono::Unity
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 2348;

	class Debug : public ::System::Object
	{
	public:
		static ::System::Void CheckAndThrow(::Mono::Unity::UnityTls_unitytls_errorstate a1, ::System::String* a2, ::Mono::Security::Interface::AlertDescription a3)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_errorstate, ::System::String*, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CheckAndThrow_1(::Mono::Unity::UnityTls_unitytls_errorstate a1, ::Mono::Unity::UnityTls_unitytls_x509verify_result a2, ::System::String* a3, ::Mono::Security::Interface::AlertDescription a4)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_errorstate, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::System::String*, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_UNITY_DEBUG_CHECKANDTHROW_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
