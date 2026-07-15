#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ORBITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F63CE0)

inline static constexpr unsigned int OrbitData_TypeDefinitionIndex = 45515;

class OrbitData : public ::System::Object
{
public:
	::System::Single orbitRadius; // 0x10
	::System::Single orbitSpeed; // 0x14
	::System::Single rotationSpeed; // 0x18
	::System::Single eccentricity; // 0x1C
	::System::Single orbitTilt; // 0x20
	::System::Single orbitOffset; // 0x24
	::System::Single currentAngle; // 0x28
	::UnityEngine::Vector3 worldPosition; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORBITDATA__CTOR_OFFSET))(this);
	}
};
