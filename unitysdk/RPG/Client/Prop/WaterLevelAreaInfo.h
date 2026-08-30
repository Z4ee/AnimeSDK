#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelAreaInfo_TypeDefinitionIndex = 78443;

	struct alignas(8) WaterLevelAreaInfo
	{
		::RPG::Client::Prop::BoxmanCoord StartCoord; // 0x10
		::RPG::Client::Prop::BoxmanCoord EndCoord; // 0x18
		::UnityEngine::GameObject* WaterObject; // 0x20
	};
}
