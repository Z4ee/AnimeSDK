#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MinimapImage_FadeInfo_TypeDefinitionIndex = 72500;

	struct alignas(4) MinimapImage_FadeInfo
	{
		::System::Int32 section2Index; // 0x10
		::UnityEngine::Vector2 section1Pos; // 0x14
		::UnityEngine::Vector2 edge1to2; // 0x1C
		::UnityEngine::Vector2 perpendicularEdge; // 0x24
	};
}
