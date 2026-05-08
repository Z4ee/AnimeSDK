#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_FovOffset_TypeDefinitionIndex = 80256;

	struct alignas(4) MonoEffectPluginAttachToCamera_FovOffset
	{
		::System::Single fov; // 0x10
		::UnityEngine::Vector3 attachOffset; // 0x14
	};
}
