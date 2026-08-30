#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraBlendCurve; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCarCamera_PlayEndCamera_TypeDefinitionIndex = 75432;

	struct alignas(8) MonoRoadRashCarCamera_PlayEndCamera
	{
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x10
		::System::Single KeepParentDuration; // 0x18
		::RPG::Client::CameraBlendCurve* SlowMotionTimeScaleCurve; // 0x20
		::System::Single SlowMotionDuration; // 0x28
	};
}
