#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GyroBaseMono_Axes.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GYROBASEMONO_ENABLEGYRO_OFFSET UNITYSDK_OFFSET(0x1B76E0E0)
#define GYROBASEMONO_GET_CURRENTGRAVITY_OFFSET UNITYSDK_OFFSET(0x1B76DF90)
#define GYROBASEMONO_START_OFFSET UNITYSDK_OFFSET(0x1B76E090)
#define GYROBASEMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76E240)

inline static constexpr unsigned int GyroBaseMono_TypeDefinitionIndex = 8331;

class GyroBaseMono : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean autoEnable; // 0x18
	::System::Boolean ParallexLocal; // 0x19
	::GyroBaseMono_Axes ParallexAxes; // 0x1C
	::UnityEngine::Vector2 ParallexScale; // 0x20
	::UnityEngine::Vector2 ParallexMax; // 0x28
	::System::Single ParallexSensitivity; // 0x30
	::System::Boolean Recover; // 0x34
	::System::Single RecoverAngle; // 0x38
	::System::Single RecoverBoundHardness; // 0x3C
	::System::Boolean isEnableGyro; // 0x40
	::UnityEngine::Vector3 baseGyroGravity; // 0x44
	::UnityEngine::Vector3 gravityOffset; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROBASEMONO__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_CurrentGravity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROBASEMONO_GET_CURRENTGRAVITY_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GYROBASEMONO_START_OFFSET))(this);
	}

	::System::Void EnableGyro(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GYROBASEMONO_ENABLEGYRO_OFFSET))(this, enable);
	}
};
