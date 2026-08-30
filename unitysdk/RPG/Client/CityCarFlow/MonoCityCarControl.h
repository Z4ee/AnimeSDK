#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CarControl.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCC23800)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarControl_TypeDefinitionIndex = 80843;

	class MonoCityCarControl : public ::CarControl
	{
	public:
		::System::Single HalfLength; // 0x188
		::System::Single HalfWidth; // 0x18C
		::UnityEngine::AnimationCurve* SafetyDistance2SpeedCurve; // 0x190
		::UnityEngine::AnimationCurve* TurnSpeedRatioCurve; // 0x198
		::UnityEngine::AnimationCurve* SlopeSpeedRatioCurve; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARCONTROL__CTOR_OFFSET))(this);
		}
	};
}
