#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::DisplayCase
{
	inline static constexpr unsigned int DisplayBoundsCfgData_TypeDefinitionIndex = 81551;

	struct alignas(4) DisplayBoundsCfgData
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Size; // 0x1C
	};
}
