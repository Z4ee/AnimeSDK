#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTilingByTargetID_TilingOffsetData_TypeDefinitionIndex = 66985;

	struct alignas(4) MonoEffectPluginTilingByTargetID_TilingOffsetData
	{
		::System::UInt32 CharacterID; // 0x10
		::UnityEngine::Vector2 Tiling; // 0x14
		::UnityEngine::Vector2 Offset; // 0x1C
	};
}
