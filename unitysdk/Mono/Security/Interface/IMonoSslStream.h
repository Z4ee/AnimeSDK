#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Security { class AuthenticatedStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int IMonoSslStream_TypeDefinitionIndex = 2282;

	class IMonoSslStream
	{
	public:
	};
}
