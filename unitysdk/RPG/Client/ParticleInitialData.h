#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleInitialData_TypeDefinitionIndex = 70555;

	struct alignas(8) ParticleInitialData
	{
		::UnityEngine::Vector2 initialRateOverTime; // 0x10
		::System::Single initialSpread; // 0x18
		::UnityEngine::Vector3 initialPosition; // 0x1C
		::Il2CppArray<::System::Single>* initialBurstCountMin; // 0x28
		::Il2CppArray<::System::Single>* initialBurstCountMax; // 0x30
	};
}
