#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2D85C3C5517A2A08_TransitionCameraRotateMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_FORWARDDIR_OFFSET UNITYSDK_OFFSET(0x8BC9580)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_RIGHTDIR_OFFSET UNITYSDK_OFFSET(0x8BC95C0)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_SHOTAIMCENTERPOS_OFFSET UNITYSDK_OFFSET(0x8BC9500)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_SHOTINITCENTERPOS_OFFSET UNITYSDK_OFFSET(0x8BC9540)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_FORWARDDIR_OFFSET UNITYSDK_OFFSET(0x8BC95A0)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_RIGHTDIR_OFFSET UNITYSDK_OFFSET(0x8BC95E0)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_SHOTAIMCENTERPOS_OFFSET UNITYSDK_OFFSET(0x8BC9520)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_SHOTINITCENTERPOS_OFFSET UNITYSDK_OFFSET(0x8BC9560)
#define CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC94F0)

inline static constexpr unsigned int Class_2_2D85C3C5517A2A08_TransitionShotData_TypeDefinitionIndex = 56926;

class Class_2_2D85C3C5517A2A08_TransitionShotData : public ::System::Object
{
public:
	::UnityEngine::Vector3 CenterOffset; // 0x10
	::System::Boolean IsClockwiseDir; // 0x1C
	::System::Single Radius; // 0x20
	::System::Single Duration; // 0x24
	::Class_2_2D85C3C5517A2A08_TransitionCameraRotateMode AngleRotateMode; // 0x28
	::System::Single AngleSpeed; // 0x2C
	::System::Single LinearSpeed; // 0x30
	::System::Single RotDuration; // 0x34
	::System::Single WorldYOffset; // 0x38
	::System::Single Dutch; // 0x3C
	::System::Boolean UseStartPoleAngle; // 0x40
	::System::Single StartPoleAngle; // 0x44
	::System::Single SecondStartPoleAngle; // 0x48
	::System::Single StartPoleAngleBias; // 0x4C
	::System::Single SecondStartPoleAngleBias; // 0x50
	::System::Single RadiusOffsetMin; // 0x54
	::UnityEngine::AnimationCurve* OffsetChangeCurve; // 0x58
	::System::Single FOVStart; // 0x60
	::System::Single FOVEnd; // 0x64
	::UnityEngine::AnimationCurve* FOVChangeCurve; // 0x68
	::System::Single CameraRadius; // 0x70
	::UnityEngine::Vector3 CameraMove; // 0x74
	::UnityEngine::AnimationCurve* CameraMoveCurveX; // 0x80
	::UnityEngine::AnimationCurve* CameraMoveCurveY; // 0x88
	::UnityEngine::AnimationCurve* CameraMoveCurveZ; // 0x90
	::UnityEngine::Vector3 _ShotAimCenterPos_k__BackingField; // 0x98
	::UnityEngine::Vector3 _ShotInitCenterPos_k__BackingField; // 0xA4
	::UnityEngine::Vector3 _ForwardDir_k__BackingField; // 0xB0
	::UnityEngine::Vector3 _RightDir_k__BackingField; // 0xBC

	::System::Void _ctor(::System::Single radius, ::System::Single duration, ::System::Single angleSpeed)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA__CTOR_OFFSET))(this, radius, duration, angleSpeed);
	}

	::UnityEngine::Vector3 get_ShotAimCenterPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_SHOTAIMCENTERPOS_OFFSET))(this);
	}

	::System::Void set_ShotAimCenterPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_SHOTAIMCENTERPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_ShotInitCenterPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_SHOTINITCENTERPOS_OFFSET))(this);
	}

	::System::Void set_ShotInitCenterPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_SHOTINITCENTERPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_ForwardDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_FORWARDDIR_OFFSET))(this);
	}

	::System::Void set_ForwardDir(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_FORWARDDIR_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_RightDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_GET_RIGHTDIR_OFFSET))(this);
	}

	::System::Void set_RightDir(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_TRANSITIONSHOTDATA_SET_RIGHTDIR_OFFSET))(this, value);
	}
};
