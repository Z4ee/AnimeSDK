#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERALOCKBOSSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xECE7B70)

namespace MoleMole
{
	inline static constexpr unsigned int CameraLockBossConfig_TypeDefinitionIndex = 77976;

	class CameraLockBossConfig : public ::System::Object
	{
	public:
		::System::Single LT_MAX_RANGE; // 0x10
		::System::Single LT_LOOKATOFFSETRATIO; // 0x14
		::UnityEngine::Vector2 LT_BOSS_ELEVATION_REGION; // 0x18
		::UnityEngine::AnimationCurve* maxElevationCurve; // 0x20
		::UnityEngine::AnimationCurve* minElevationCurve; // 0x28
		::UnityEngine::AnimationCurve* maxLookAtRelativeHeight; // 0x30
		::UnityEngine::AnimationCurve* minLookAtRelativeHeight; // 0x38
		::UnityEngine::AnimationCurve* maxLookAtCancelRelativeHeight; // 0x40
		::UnityEngine::AnimationCurve* minLookAtCancelRelativeHeight; // 0x48
		::System::Single cancelTimeThreshold; // 0x50
		::System::Single elevationInterpToSpeed; // 0x54
		::System::Boolean activateRange; // 0x58
		::System::Single LT_LOOKATOFFSETTIME; // 0x5C
		::UnityEngine::AnimationCurve* LT_LOOKATOFFSETENTERLERPCURVE; // 0x60
		::System::Single LT_LOOKATOFFSETEXITTIME; // 0x68
		::UnityEngine::AnimationCurve* LT_LOOKATOFFSETEXITLERPCURVE; // 0x70
		::UnityEngine::Vector2 LT_BOSS_POLAR_OFFSET_X; // 0x78
		::UnityEngine::Vector2 LT_BOSS_POLAR_OFFSET_Y; // 0x80
		::UnityEngine::AnimationCurve* LT_BOSS_POLARCURVE; // 0x88
		::UnityEngine::Vector2 LT_BOSS_DISPOLAR_OFFSET_X; // 0x90
		::UnityEngine::Vector2 LT_BOSS_DISPOLAR_OFFSET_Y; // 0x98
		::UnityEngine::AnimationCurve* LT_DISBOSS_POLARCURVE; // 0xA0
		::System::Single LT_POLARLERPRATIO; // 0xA8
		::System::Single LT_POLARLERPTIME; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERALOCKBOSSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
