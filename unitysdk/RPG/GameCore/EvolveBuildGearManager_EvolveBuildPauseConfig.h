#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EvolveBuildPauseConfig_TypeDefinitionIndex = 53543;

	struct alignas(8) EvolveBuildGearManager_EvolveBuildPauseConfig
	{
		::System::String* PausePanelPath; // 0x10
		::System::String* PauseBinderPath; // 0x18
		::System::UInt32 PausePrefabIndex; // 0x20
	};
}
