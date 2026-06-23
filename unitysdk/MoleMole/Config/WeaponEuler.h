#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeaponEuler_TypeDefinitionIndex = 70189;

	struct alignas(4) WeaponEuler
	{
		::UnityEngine::Vector3 InitEuler; // 0x10
		::UnityEngine::Vector3 StayEuler; // 0x1C
	};
}
