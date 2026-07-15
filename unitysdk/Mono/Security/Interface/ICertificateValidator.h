#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Security::Interface { class ValidationResult; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ICertificateValidator_TypeDefinitionIndex = 2278;

	class ICertificateValidator
	{
	public:
	};
}
