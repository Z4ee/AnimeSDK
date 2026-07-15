#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo_TypeDefinitionIndex = 66977;

	struct alignas(8) MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo
	{
		::UnityEngine::Animator* Animator; // 0x10
		::System::Boolean IsOverrideLayer; // 0x18
		::System::Int32 OverrideLayer; // 0x1C
		::System::Boolean SyncAllStateFromTarget; // 0x20
		::System::String* SyncState; // 0x28
		::System::Boolean UseFixedTime; // 0x30
	};
}
