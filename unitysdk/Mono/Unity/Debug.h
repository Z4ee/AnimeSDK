#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_UNITY_DEBUG_CHECKANDTHROW_1_OFFSET UNITYSDK_OFFSET(0x1C2DE8A0)
#define MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET UNITYSDK_OFFSET(0x1C2DE800)

namespace Mono::Unity
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 2523;

	class Debug : public ::System::Object
	{
	public:
		static ::System::Void CheckAndThrow(::Mono::Unity::UnityTls_unitytls_errorstate errorState, ::System::String* context, ::Mono::Security::Interface::AlertDescription defaultAlert)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_errorstate, ::System::String*, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET))(errorState, context, defaultAlert);
		}

		static ::System::Void CheckAndThrow_1(::Mono::Unity::UnityTls_unitytls_errorstate errorState, ::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, ::System::String* context, ::Mono::Security::Interface::AlertDescription defaultAlert)
		{
			return ((::System::Void(*)(::Mono::Unity::UnityTls_unitytls_errorstate, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::System::String*, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_UNITY_DEBUG_CHECKANDTHROW_1_OFFSET))(errorState, verifyResult, context, defaultAlert);
		}
	};
}
