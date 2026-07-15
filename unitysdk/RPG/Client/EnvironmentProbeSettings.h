#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentProbeSettings_TypeDefinitionIndex = 66642;

	struct alignas(8) EnvironmentProbeSettings
	{
		::System::String* ReflectionProbePath; // 0x10
		::UnityEngine::Texture* Texture; // 0x18
	};
}
