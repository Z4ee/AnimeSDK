#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/AlertDescription.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_protocol.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

#define MONO_UNITY_UNITYTLSCONVERSIONS_CONVERTPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x19ADAE60)
#define MONO_UNITY_UNITYTLSCONVERSIONS_GETMAXPROTOCOL_OFFSET UNITYSDK_OFFSET(0x19ADAD30)
#define MONO_UNITY_UNITYTLSCONVERSIONS_GETMINPROTOCOL_OFFSET UNITYSDK_OFFSET(0x19ADAC00)
#define MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOALERTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19ADAE80)
#define MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOPOLICYERRROR_OFFSET UNITYSDK_OFFSET(0x19ADB320)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsConversions_TypeDefinitionIndex = 2581;

	class UnityTlsConversions : public ::System::Object
	{
	public:
		static ::Mono::Unity::UnityTls_unitytls_protocol GetMinProtocol(::System::Security::Authentication::SslProtocols protocols)
		{
			return ((::Mono::Unity::UnityTls_unitytls_protocol(*)(::System::Security::Authentication::SslProtocols))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_GETMINPROTOCOL_OFFSET))(protocols);
		}

		static ::Mono::Unity::UnityTls_unitytls_protocol GetMaxProtocol(::System::Security::Authentication::SslProtocols protocols)
		{
			return ((::Mono::Unity::UnityTls_unitytls_protocol(*)(::System::Security::Authentication::SslProtocols))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_GETMAXPROTOCOL_OFFSET))(protocols);
		}

		static ::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(::Mono::Unity::UnityTls_unitytls_protocol protocol)
		{
			return ((::Mono::Security::Interface::TlsProtocols(*)(::Mono::Unity::UnityTls_unitytls_protocol))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_CONVERTPROTOCOLVERSION_OFFSET))(protocol);
		}

		static ::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, ::Mono::Security::Interface::AlertDescription defaultAlert)
		{
			return ((::Mono::Security::Interface::AlertDescription(*)(::Mono::Unity::UnityTls_unitytls_x509verify_result, ::Mono::Security::Interface::AlertDescription))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOALERTDESCRIPTION_OFFSET))(verifyResult, defaultAlert);
		}

		static ::Mono::Security::Interface::MonoSslPolicyErrors VerifyResultToPolicyErrror(::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult)
		{
			return ((::Mono::Security::Interface::MonoSslPolicyErrors(*)(::Mono::Unity::UnityTls_unitytls_x509verify_result))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOPOLICYERRROR_OFFSET))(verifyResult);
		}
	};
}
