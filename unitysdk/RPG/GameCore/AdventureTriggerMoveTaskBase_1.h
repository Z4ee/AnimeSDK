#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMoveTaskBase_1_TypeDefinitionIndex = 55357;

	template <typename T>
	class AdventureTriggerMoveTaskBase_1 : public ::RPG::GameCore::ImmediateTaskBase_1<T>
	{
	public:
		::RPG::Client::CameraBlendCurve* _SpeedCurve; // 0x0
		::RPG::Client::CameraBlendCurve* _SteerCurve; // 0x0
		::System::Boolean _ApplyRunSpeedRatio; // 0x0
	};
}
