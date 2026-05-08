#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GPUBOIDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1907E590)

inline static constexpr unsigned int GpuBoidSettings_TypeDefinitionIndex = 29543;

class GpuBoidSettings : public ::UnityEngine::ScriptableObject
{
public:
	::System::Int32 instanceCount; // 0x18
	::UnityEngine::Vector3 boidCenter; // 0x1C
	::System::Single boidRadius; // 0x28
	::UnityEngine::Vector3 hardBounds; // 0x2C
	::System::Single boidMeshScale; // 0x38
	::System::Single boidPerceptionRange; // 0x3C
	::System::Single separation; // 0x40
	::System::Single separationDistance; // 0x44
	::System::Single alignment; // 0x48
	::System::Single cohesion; // 0x4C
	::System::Single maxAccel; // 0x50
	::System::Single maxSpeed; // 0x54
	::System::Single mass; // 0x58
	::System::Single softBoundsStrength; // 0x5C
	::System::Single hardBoundsStrength; // 0x60
	::System::Boolean revertSpeed; // 0x64
	::System::Single ZConstraint; // 0x68
	::System::Single PoiMoveSpeed; // 0x6C
	::System::Single PoiZConstraint; // 0x70
	::System::Single PoiStrength; // 0x74
	::System::Single PoiInfluenceDistance; // 0x78
	::System::Single PoiMaxRadius; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDSETTINGS__CTOR_OFFSET))(this);
	}
};
