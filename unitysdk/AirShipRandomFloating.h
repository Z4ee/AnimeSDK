#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define AIRSHIPRANDOMFLOATING_AWAKE_OFFSET UNITYSDK_OFFSET(0x121115F0)
#define AIRSHIPRANDOMFLOATING_METHOD_5_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0x12111D30)
#define AIRSHIPRANDOMFLOATING_METHOD_5_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x12112300)
#define AIRSHIPRANDOMFLOATING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x121116F0)
#define AIRSHIPRANDOMFLOATING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x121116A0)
#define AIRSHIPRANDOMFLOATING_TICK_OFFSET UNITYSDK_OFFSET(0x12111800)
#define AIRSHIPRANDOMFLOATING_UPDATE_OFFSET UNITYSDK_OFFSET(0x121117A0)
#define AIRSHIPRANDOMFLOATING__CTOR_OFFSET UNITYSDK_OFFSET(0x12112410)

inline static constexpr unsigned int AirShipRandomFloating_TypeDefinitionIndex = 43872;

class AirShipRandomFloating : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::AnimationCurve* FloatingCurve; // 0x18
	::System::Single Cycle; // 0x20
	::System::Single Strength; // 0x24
	::UnityEngine::Vector3 RandomRotation; // 0x28
	::System::Single RotationCycle; // 0x34
	::System::Boolean IsIndependent; // 0x38
	::System::Single Field_5_6; // 0x3C
	::System::Single Field_5_7; // 0x40
	::UnityEngine::Vector3 Field_5_8; // 0x44
	::UnityEngine::Quaternion Field_5_9; // 0x50
	::UnityEngine::Vector3 Field_5_10; // 0x60
	::UnityEngine::Quaternion Field_5_11; // 0x6C
	::UnityEngine::Vector3 Field_5_12; // 0x7C
	::UnityEngine::Quaternion Field_5_13; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_UPDATE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_5_A678846DF98684D3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_METHOD_5_A678846DF98684D3_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_5_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPRANDOMFLOATING_METHOD_5_C34AC80B04BCFF1B_OFFSET))(this);
	}
};
