#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTypeMeta_TypeDefinitionIndex = 37982;

	struct alignas(8) EcsWorldTypeMeta
	{
		::System::Type* type; // 0x10
		::System::Int32 typeID; // 0x18
		::System::Int32 classComponentIdEnd; // 0x1C
	};
}
