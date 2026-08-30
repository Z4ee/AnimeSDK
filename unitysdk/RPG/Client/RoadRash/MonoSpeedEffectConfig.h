#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoSpeedEffectConfig_TypeDefinitionIndex = 75437;

	struct alignas(8) MonoSpeedEffectConfig
	{
		::System::String* PrefabPath; // 0x10
		::System::String* AttachPoint; // 0x18
		::System::Single Scale; // 0x20
		::UnityEngine::Vector3 LocalPositionOffset; // 0x24
		::UnityEngine::Vector3 LocalRotationOffset; // 0x30
		::System::String* StartTriggerName; // 0x40
		::System::String* ChangeStateTriggerName; // 0x48
		::System::String* ChangeStateValueName; // 0x50
		::System::Int32 DefaultStateValue; // 0x58
		::System::Int32 ReleaseChargeStateValue; // 0x5C
		::System::Int32 ReleaseChargeStateValueLv2; // 0x60
		::System::Int32 UltimateStateValue; // 0x64
		::System::Int32 SlamStateValue; // 0x68
		::System::Single SlamStateDuration; // 0x6C
	};
}
