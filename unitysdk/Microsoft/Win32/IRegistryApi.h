#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class Object; }
namespace System { class String; }

namespace Microsoft::Win32
{
	inline static constexpr unsigned int IRegistryApi_TypeDefinitionIndex = 101;

	class IRegistryApi
	{
	public:
	};
}
