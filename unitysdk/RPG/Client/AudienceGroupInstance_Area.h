#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class AudienceLayoutConfig; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_Area_TypeDefinitionIndex = 66067;

	struct alignas(8) AudienceGroupInstance_Area
	{
		::UnityEngine::Transform* origin; // 0x10
		::RPG::Client::AudienceLayoutConfig* layoutConfig; // 0x18
	};
}
