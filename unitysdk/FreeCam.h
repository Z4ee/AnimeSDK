#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FreeCam_RotationAxes.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FREECAM_UPDATE_OFFSET UNITYSDK_OFFSET(0x17F2A390)
#define FREECAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2A9A0)

inline static constexpr unsigned int FreeCam_TypeDefinitionIndex = 45715;

class FreeCam : public ::UnityEngine::MonoBehaviour
{
public:
	::FreeCam_RotationAxes axes; // 0x18
	::System::Single sensitivityX; // 0x1C
	::System::Single sensitivityY; // 0x20
	::System::Single minimumX; // 0x24
	::System::Single maximumX; // 0x28
	::System::Single minimumY; // 0x2C
	::System::Single maximumY; // 0x30
	::System::Single moveSpeed; // 0x34
	::System::Boolean lockHeight; // 0x38
	::System::Single rotationY; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FREECAM__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FREECAM_UPDATE_OFFSET))(this);
	}
};
