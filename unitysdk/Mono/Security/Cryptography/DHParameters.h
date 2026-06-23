#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DHParameters_TypeDefinitionIndex = 2452;

	struct alignas(8) DHParameters
	{
		::Il2CppArray<::System::Byte>* P; // 0x10
		::Il2CppArray<::System::Byte>* G; // 0x18
		::Il2CppArray<::System::Byte>* X; // 0x20
	};
}
