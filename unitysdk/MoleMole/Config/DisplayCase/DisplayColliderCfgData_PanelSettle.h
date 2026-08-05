#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config::DisplayCase
{
	inline static constexpr unsigned int DisplayColliderCfgData_PanelSettle_TypeDefinitionIndex = 80369;

	struct alignas(4) DisplayColliderCfgData_PanelSettle
	{
		::System::Int32 PanelId; // 0x10
		::UnityEngine::Vector2 XZ; // 0x14
		::UnityEngine::Vector2 RangeY; // 0x1C
	};
}
