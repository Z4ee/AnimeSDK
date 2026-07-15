#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9571B284696356E4_TransitionCameraRotateMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_FORWARDDIR_OFFSET UNITYSDK_OFFSET(0x17FBC510)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_RIGHTDIR_OFFSET UNITYSDK_OFFSET(0x17FBC550)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_SHOTAIMCENTERPOS_OFFSET UNITYSDK_OFFSET(0x17FBC490)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_SHOTINITCENTERPOS_OFFSET UNITYSDK_OFFSET(0x17FBC4D0)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_FORWARDDIR_OFFSET UNITYSDK_OFFSET(0x17FBC530)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_RIGHTDIR_OFFSET UNITYSDK_OFFSET(0x17FBC570)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_SHOTAIMCENTERPOS_OFFSET UNITYSDK_OFFSET(0x17FBC4B0)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_SHOTINITCENTERPOS_OFFSET UNITYSDK_OFFSET(0x17FBC4F0)
#define CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBC480)

inline static constexpr unsigned int Class_2_9571B284696356E4_TransitionShotData_TypeDefinitionIndex = 66502;

class Class_2_9571B284696356E4_TransitionShotData : public ::System::Object
{
public:
	::UnityEngine::Vector3 CenterOffset; // 0x10
	::System::Boolean IsClockwiseDir; // 0x1C
	::System::Single Radius; // 0x20
	::System::Single Duration; // 0x24
	::Class_2_9571B284696356E4_TransitionCameraRotateMode AngleRotateMode; // 0x28
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

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 get_ShotAimCenterPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_SHOTAIMCENTERPOS_OFFSET))(this);
	}

	::System::Void set_ShotAimCenterPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_SHOTAIMCENTERPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ShotInitCenterPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_SHOTINITCENTERPOS_OFFSET))(this);
	}

	::System::Void set_ShotInitCenterPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_SHOTINITCENTERPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ForwardDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_FORWARDDIR_OFFSET))(this);
	}

	::System::Void set_ForwardDir(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_FORWARDDIR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RightDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_GET_RIGHTDIR_OFFSET))(this);
	}

	::System::Void set_RightDir(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_TRANSITIONSHOTDATA_SET_RIGHTDIR_OFFSET))(this, a1);
	}
};
