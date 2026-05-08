#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6C764DFFE92EC478.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SpawnPointMaskRegion_TypeDefinitionIndex = 72858;

	struct alignas(8) SpawnPointMaskRegion
	{
		::Enum_3_6C764DFFE92EC478 shape; // 0x10
		::System::String* prefixFilter; // 0x18
		::System::Single radius; // 0x20
		::System::Single height; // 0x24
		::UnityEngine::Vector3 extend; // 0x28
	};
}
