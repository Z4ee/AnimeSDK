#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineBakeCacheManager_ESplineFollowCommandType.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeCacheManager_SplineFollowCommand_TypeDefinitionIndex = 84855;

	struct alignas(8) CrowdSplineBakeCacheManager_SplineFollowCommand
	{
		::NPCCrowd::Ability::CrowdSplineBakeCacheManager_ESplineFollowCommandType Type; // 0x10
		::System::UInt32 EntityId; // 0x14
		::FluffyUnderware::Curvy::CurvySpline* Spline; // 0x18
		::System::Single StopRadius; // 0x20
		::System::Boolean StartFromNearest; // 0x24
		::System::Boolean SnapToGround; // 0x25
	};
}
