#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextContainerChildWindowController_DamageTextTypeRecord_TypeDefinitionIndex = 78051;

	struct alignas(8) UIInLevelDamageTextContainerChildWindowController_DamageTextTypeRecord
	{
		::Foundation::AssetPath Path; // 0x10
		::UnityEngine::Bounds Bounds; // 0x20
		::UnityEngine::Vector2 ScreenOffset; // 0x38
	};
}
