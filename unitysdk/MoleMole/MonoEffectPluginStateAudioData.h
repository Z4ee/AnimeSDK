#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginStateAudioData_TypeDefinitionIndex = 78015;

	struct alignas(8) MonoEffectPluginStateAudioData
	{
		::System::String* keyState; // 0x10
		::System::String* enterSoundAction; // 0x18
		::System::String* exitSoundAction; // 0x20
	};
}
