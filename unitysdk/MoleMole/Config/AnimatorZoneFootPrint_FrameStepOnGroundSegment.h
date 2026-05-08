#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_FrameStepOnGroundSegment_TypeDefinitionIndex = 49604;

	struct alignas(4) AnimatorZoneFootPrint_FrameStepOnGroundSegment
	{
		::System::Boolean IsSliding; // 0x10
		::System::Int32 StartFrame; // 0x14
		::System::Int32 EndFrame; // 0x18
		::UnityEngine::Vector3 GroundPositionL; // 0x1C
	};
}
