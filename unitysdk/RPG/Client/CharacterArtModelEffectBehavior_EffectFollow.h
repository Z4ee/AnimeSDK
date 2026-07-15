#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharacterArtModelEffectBehavior_FollowMode.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterArtModelEffectBehavior_EffectFollow_TypeDefinitionIndex = 67111;

	struct alignas(8) CharacterArtModelEffectBehavior_EffectFollow
	{
		::UnityEngine::GameObject* Effect; // 0x10
		::RPG::Client::CharacterArtModelEffectBehavior_FollowMode FollowMode; // 0x18
		::UnityEngine::GameObject* FollowTarget; // 0x20
		::RPG::Client::TAUtils::SimpleTransform LocalTransform; // 0x28
	};
}
