#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneSpotStruct_TypeDefinitionIndex = 58190;

	struct alignas(8) LiveHouseSceneSpotStruct
	{
		::UnityEngine::Animator* spotAnimator; // 0x10
		::UnityEngine::GameObject* spotLight; // 0x18
	};
}
