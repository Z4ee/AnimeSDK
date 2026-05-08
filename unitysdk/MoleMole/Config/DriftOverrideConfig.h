#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_DRIFTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x123189D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DriftOverrideConfig_TypeDefinitionIndex = 64308;

	class DriftOverrideConfig : public ::System::Object
	{
	public:
		::System::Single OverflowDecelerateDuration; // 0x10
		::UnityEngine::AnimationCurve* OverflowDecelerateDurationCurve; // 0x18
		::System::Single OverflowDecelRatioNoInput; // 0x20
		::UnityEngine::AnimationCurve* OverflowDecelerateCurve; // 0x28
		::System::Single DriftExitSideSpeed; // 0x30
		::System::Single DriftAccelDurationRatio; // 0x34
		::UnityEngine::AnimationCurve* DriftAccelDurationRatioByInitSpeed; // 0x38
		::System::Single DriftAccelBoostThreshold; // 0x40
		::System::Single DriftAccelMaxAddSpeed; // 0x44
		::UnityEngine::AnimationCurve* DriftAccelAddSpeedCurve; // 0x48
		::System::Single DriftMaxForce; // 0x50
		::UnityEngine::AnimationCurve* DriftAccelerateCurve; // 0x58
		::System::Single DriftMaxTotalSpeedRatio; // 0x60
		::System::Single DriftMaxAngle; // 0x64
		::System::Single DriftMinAngle; // 0x68
		::System::Single DriftMaxAngularSpeed; // 0x6C
		::UnityEngine::AnimationCurve* DriftSteerCurve; // 0x70
		::UnityEngine::AnimationCurve* DriftSteerAgainstCurve; // 0x78
		::UnityEngine::AnimationCurve* DriftSteerBackCurve; // 0x80
		::System::Single ReDriftCooldown; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DRIFTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}
	};
}
