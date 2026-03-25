#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int EffectConfig_TypeDefinitionIndex = 63606;

	struct alignas(8) EffectConfig
	{
		::System::String* EffectName; // 0x10
		::UnityEngine::Transform* EffectTransform; // 0x18
	};
}
