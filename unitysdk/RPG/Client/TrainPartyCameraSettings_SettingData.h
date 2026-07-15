#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyCameraSettings_SettingData_TypeDefinitionIndex = 57541;

	struct alignas(4) TrainPartyCameraSettings_SettingData
	{
		::UnityEngine::Vector3 offset; // 0x10
	};
}
