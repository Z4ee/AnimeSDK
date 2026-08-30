#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define AIRSHIPRANDOMFLOATING_AWAKE_OFFSET UNITYSDK_OFFSET(0x15969590)
#define AIRSHIPRANDOMFLOATING_METHOD_5_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0x15969CD0)
#define AIRSHIPRANDOMFLOATING_METHOD_5_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x1596A2A0)
#define AIRSHIPRANDOMFLOATING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15969690)
#define AIRSHIPRANDOMFLOATING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15969640)
#define AIRSHIPRANDOMFLOATING_TICK_OFFSET UNITYSDK_OFFSET(0x159697A0)
#define AIRSHIPRANDOMFLOATING_UPDATE_OFFSET UNITYSDK_OFFSET(0x15969740)
#define AIRSHIPRANDOMFLOATING__CTOR_OFFSET UNITYSDK_OFFSET(0x1596A3B0)

inline static constexpr unsigned int AirShipRandomFloating_TypeDefinitionIndex = 47526;

class AirShipRandomFloating : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::AnimationCurve* FloatingCurve; // 0x18
	::System::Single Cycle; // 0x20
	::System::Single Strength; // 0x24
	::UnityEngine::Vector3 RandomRotation; // 0x28
	::System::Single RotationCycle; // 0x34
	::System::Boolean IsIndependent; // 0x38
	::System::Single HKKKOOIBPHO; // 0x3C
	::System::Single JOOPCOAHDAB; // 0x40
	::UnityEngine::Vector3 MPODELMOPOI; // 0x44
	::UnityEngine::Quaternion LFPCGNOFAFK; // 0x50
	::UnityEngine::Vector3 KPLCGJCCPIE; // 0x60
	::UnityEngine::Quaternion LHJBGEFGKIA; // 0x6C
	::UnityEngine::Vector3 OEJNJDBMECP; // 0x7C
	::UnityEngine::Quaternion CFMPIPBOAAD; // 0x88

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
