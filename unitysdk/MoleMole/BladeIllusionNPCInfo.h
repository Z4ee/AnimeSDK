#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int BladeIllusionNPCInfo_TypeDefinitionIndex = 39718;

	struct alignas(8) BladeIllusionNPCInfo
	{
		::System::String* prefabPath; // 0x10
		::UnityEngine::Vector3 spawnPos; // 0x18
		::UnityEngine::Vector3 spawnDir; // 0x24
	};
}
