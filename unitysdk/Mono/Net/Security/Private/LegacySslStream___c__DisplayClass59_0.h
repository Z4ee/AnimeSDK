#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net::Security::Private { class LegacySslStream; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS59_0__BEGINAUTHENTICATEASSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1D222840)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS59_0__BEGINAUTHENTICATEASSERVER_B__1_OFFSET UNITYSDK_OFFSET(0x1D2228E0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D222830)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int LegacySslStream___c__DisplayClass59_0_TypeDefinitionIndex = 2645;

	class LegacySslStream___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::Mono::Net::Security::Private::LegacySslStream* __4__this; // 0x10
		::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* _BeginAuthenticateAsServer_b__0(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS59_0__BEGINAUTHENTICATEASSERVER_B__0_OFFSET))(this, cert, targetHost);
		}

		::System::Boolean _BeginAuthenticateAsServer_b__1(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::Il2CppArray<::System::Int32>* certErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS59_0__BEGINAUTHENTICATEASSERVER_B__1_OFFSET))(this, cert, certErrors);
		}
	};
}
