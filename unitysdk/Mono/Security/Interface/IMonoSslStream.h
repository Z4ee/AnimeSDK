#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Authentication/CipherAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/ExchangeAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/HashAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class TransportContext; }
namespace System::Net::Security { class AuthenticatedStream; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Threading::Tasks { class Task; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int IMonoSslStream_TypeDefinitionIndex = 2435;

	class IMonoSslStream
	{
	public:
	};
}
