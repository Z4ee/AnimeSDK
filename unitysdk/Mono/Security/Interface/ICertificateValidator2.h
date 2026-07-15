#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface { class ValidationResult; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ICertificateValidator2_TypeDefinitionIndex = 2279;

	class ICertificateValidator2
	{
	public:
	};
}
