#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesDynamicCollider_DynamicCollider_TypeDefinitionIndex = 73081;

	struct alignas(8) DronesDynamicCollider_DynamicCollider
	{
		::System::String* key; // 0x10
		::UnityEngine::GameObject* root; // 0x18
	};
}
