#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_DeriveBytes_Purpose_TypeDefinitionIndex = 2291;

	enum class PKCS12_DeriveBytes_Purpose : ::System::Int32
	{
		Key = 0,
		IV = 1,
		MAC = 2,
	};
}
