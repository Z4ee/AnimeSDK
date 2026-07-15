#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EWolfBroGunPlayTargetScoreMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetScoreResult_TypeDefinitionIndex = 65673;

	struct alignas(4) WolfBroGunPlayTargetScoreResult
	{
		::RPG::Client::EWolfBroGunPlayTargetScoreMode Mode; // 0x10
		::System::Single Value1; // 0x14
		::System::Single Value2; // 0x18
		::UnityEngine::Vector3 Position; // 0x1C
		::System::Single Scale; // 0x28
	};
}
