#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfPhysics_TypeDefinitionIndex = 80979;

	struct alignas(8) ConfigSurfPhysics
	{
		::System::Boolean useCustomPhysics; // 0x10
		::UnityEngine::LayerMask TrackLayer; // 0x14
		::System::Single OnGroundHeightThreshold; // 0x18
		::System::Single CollisionRadius; // 0x1C
		::UnityEngine::AnimationCurve* HitTrackSpeedLoss; // 0x20
	};
}
