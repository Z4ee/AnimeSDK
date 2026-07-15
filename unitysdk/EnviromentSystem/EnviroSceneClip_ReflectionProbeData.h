#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Cubemap; }

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroSceneClip_ReflectionProbeData_TypeDefinitionIndex = 47723;

	struct alignas(8) EnviroSceneClip_ReflectionProbeData
	{
		::UnityEngine::Cubemap* map; // 0x10
		::System::String* path; // 0x18
		::System::Single intensity; // 0x20
	};
}
