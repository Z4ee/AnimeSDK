#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LEAVESCONFIG_GETNORMALIZEDUVWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1D3CDA90)
#define LEAVESCONFIG_GET_STEPDELTATIME_OFFSET UNITYSDK_OFFSET(0x1D3CD880)
#define LEAVESCONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D3CD8D0)
#define LEAVESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CDB90)

inline static constexpr unsigned int LeavesConfig_TypeDefinitionIndex = 26886;

class LeavesConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Int32 maxLeafCount; // 0x18
	::System::Single simulationFps; // 0x1C
	::System::Boolean useFixedStep; // 0x20
	::System::Int32 maxSubStepsPerFrame; // 0x24
	::System::Single leafLifetime; // 0x28
	::UnityEngine::Vector3 gravity; // 0x2C
	::UnityEngine::Vector3 wind; // 0x38
	::System::Single leafDensity; // 0x44
	::System::Single velocityDamping; // 0x48
	::System::Single stretchStiffness; // 0x4C
	::System::Single compressStiffness; // 0x50
	::System::Single bendStiffness; // 0x54
	::System::Single restBendAngle; // 0x58
	::System::Single emitterHeightOffset; // 0x5C
	::UnityEngine::Vector3 emitterCenter; // 0x60
	::UnityEngine::Vector3 emitterExtents; // 0x6C
	::System::Single spawnPerSecond; // 0x78
	::System::Int32 maxSpawnPerFrame; // 0x7C
	::System::Int32 postInitSpawnCount; // 0x80
	::System::Single postInitMaxSpawnInterval; // 0x84
	::UnityEngine::Vector2 leafSizeRange; // 0x88
	::UnityEngine::Vector2 initialSpeedRange; // 0x90
	::System::Single horizontalRandomness; // 0x98
	::System::Single upwardBoost; // 0x9C
	::System::Boolean enableBoundaryBoxes; // 0xA0
	::System::Boolean enableSceneCollision; // 0xA1
	::System::Int32 maxCollisionBoxes; // 0xA4
	::System::Single collisionFriction; // 0xA8
	::System::Single groundSpeedThreshold; // 0xAC
	::System::Boolean enableCharacterInteraction; // 0xB0
	::System::Single characterForceRadius; // 0xB4
	::System::Single characterForceStrength; // 0xB8
	::System::Single characterUpwardRatio; // 0xBC
	::System::Single characterMinSpeed; // 0xC0
	::System::Boolean enableVortexField; // 0xC4
	::System::Single vortexStrength; // 0xC8
	::System::Boolean enableFrontMask; // 0xCC
	::System::Single frontMaskStrength; // 0xD0
	::System::Boolean enableCharacterLag; // 0xD4
	::System::Single characterLagLerp; // 0xD8
	::System::Single uvWeightQ0; // 0xDC
	::System::Single uvWeightQ1; // 0xE0
	::System::Single uvWeightQ2; // 0xE4
	::System::Single uvWeightQ3; // 0xE8
	::System::Single meshBoundsExtent; // 0xEC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCONFIG__CTOR_OFFSET))(this);
	}

	::System::Single get_StepDeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCONFIG_GET_STEPDELTATIME_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCONFIG_ONVALIDATE_OFFSET))(this);
	}

	::System::Void GetNormalizedUVWeights(::System::Single& w0, ::System::Single& w1, ::System::Single& w2, ::System::Single& w3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + LEAVESCONFIG_GETNORMALIZEDUVWEIGHTS_OFFSET))(this, w0, w1, w2, w3);
	}
};
