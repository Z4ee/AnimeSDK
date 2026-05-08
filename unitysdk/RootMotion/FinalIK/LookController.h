#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/LookController_FaceDir.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class LookAtIK; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_LOOKCONTROLLER_CUSTOMROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x1BC9B480)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_CUSTOMSLERP_OFFSET UNITYSDK_OFFSET(0x1BC99CB0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_DOUPDATEONCE_OFFSET UNITYSDK_OFFSET(0x1BC96C10)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_FIXDIR_OFFSET UNITYSDK_OFFSET(0x1BC98AA0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_FIXEDLERP_OFFSET UNITYSDK_OFFSET(0x1BC9B430)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_FIXPITCH_OFFSET UNITYSDK_OFFSET(0x1BC9B750)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GETROTATEXZDIR_OFFSET UNITYSDK_OFFSET(0x1BC9B180)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x1BC95700)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETNORMAL_OFFSET UNITYSDK_OFFSET(0x1BC95820)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETPITCHDOWN_OFFSET UNITYSDK_OFFSET(0x1BC95BA0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETPITCHUP_OFFSET UNITYSDK_OFFSET(0x1BC95B60)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONCHANGETARGET_OFFSET UNITYSDK_OFFSET(0x1BC95C40)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONGETTARGET_OFFSET UNITYSDK_OFFSET(0x1BC95C20)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONLOCKINGTARGET_OFFSET UNITYSDK_OFFSET(0x1BC95C80)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONMISSINGTARGET_OFFSET UNITYSDK_OFFSET(0x1BC95C60)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETYAWLEFT_OFFSET UNITYSDK_OFFSET(0x1BC95C00)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETYAWRIGHT_OFFSET UNITYSDK_OFFSET(0x1BC95BE0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_ISVALIDPIVOT_OFFSET UNITYSDK_OFFSET(0x1BC95890)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1BC95AE0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_INITSTARTDIR_OFFSET UNITYSDK_OFFSET(0x1BC961D0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_ISOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1BC9B800)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_ISWEIGHTZERO_OFFSET UNITYSDK_OFFSET(0x1BC98700)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC96C20)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC96C00)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_RESTOREIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BC973F0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_ROTATEBYHINGERYAWPITCH_OFFSET UNITYSDK_OFFSET(0x1BC9A410)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1BC95CA0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_UPDATEBYSPHERICAL_OFFSET UNITYSDK_OFFSET(0x1BC97BE0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_UPDATELOCKINGDIR_OFFSET UNITYSDK_OFFSET(0x1BC98730)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER_UPDATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BC974F0)
#define ROOTMOTION_FINALIK_LOOKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9BF30)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LookController_TypeDefinitionIndex = 36711;

	class LookController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single MinLookAtWeight; // 0x0
		// static const ::System::Single IgnoreLookAtWeight; // 0x0
		::RootMotion::FinalIK::LookAtIK* ik; // 0x18
		::UnityEngine::Transform* target; // 0x20
		::System::Single timescale; // 0x28
		::System::Single PitchUp; // 0x2C
		::System::Single PitchDown; // 0x30
		::System::Single YawLeft; // 0x34
		::System::Single YawRight; // 0x38
		::System::Single SpeedOnGetTarget; // 0x3C
		::System::Single SpeedOnChangeTarget; // 0x40
		::System::Single SpeedOnMissingTarget; // 0x44
		::System::Single SpeedOnLockingTarget; // 0x48
		::System::String* AttachPoint; // 0x50
		::UnityEngine::Vector3 Offset; // 0x58
		::System::Boolean IsDebugDraw; // 0x64
		::System::Single overridePitchUp; // 0x68
		::System::Single overridePitchDown; // 0x6C
		::System::Single overrideYawLeft; // 0x70
		::System::Single overrideYawRight; // 0x74
		::System::Single overrideSpeedOnGetTarget; // 0x78
		::System::Single overrideSpeedOnChangeTarget; // 0x7C
		::System::Single overrideSpeedOnMissingTarget; // 0x80
		::System::Single overrideSpeedOnLockingTarget; // 0x84
		::System::String* overrideAttachPoint; // 0x88
		::System::String* overrideAttachPoint2; // 0x90
		::System::Boolean enableOverrideSpeed; // 0x98
		::System::Boolean enableOverrideAngle; // 0x99
		::RootMotion::FinalIK::LookController_FaceDir _faceDir; // 0x9A
		::UnityEngine::Transform* lastTarget; // 0xA0
		::UnityEngine::Vector3 _startDir; // 0xA8
		::UnityEngine::Vector3 curDir; // 0xB4
		::System::Single currentSpeed; // 0xC0
		::UnityEngine::Vector3 relactiveLastIKPosition; // 0xC4
		::UnityEngine::Vector3 _originalForward; // 0xD0
		::System::Boolean init; // 0xDC
		::System::Boolean isLocking; // 0xDD
		::UnityEngine::Vector3 _debugForward; // 0xE0
		::UnityEngine::Vector3 _debugUp; // 0xEC
		::UnityEngine::Vector3 _debugfrom; // 0xF8
		::UnityEngine::Vector3 _debugtarget; // 0x104
		::UnityEngine::Vector3 _debugFixDir; // 0x110
		::UnityEngine::Vector3 _debugYawLeft; // 0x11C
		::UnityEngine::Vector3 _debugYawRight; // 0x128
		::UnityEngine::Vector3 _debugNormal; // 0x134

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_GetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_GetNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETNORMAL_OFFSET))(this);
		}

		::System::Boolean get_IsValidPivot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_ISVALIDPIVOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_pivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_PIVOT_OFFSET))(this);
		}

		::System::Single get_GetPitchUp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETPITCHUP_OFFSET))(this);
		}

		::System::Single get_GetPitchDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETPITCHDOWN_OFFSET))(this);
		}

		::System::Single get_GetYawRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETYAWRIGHT_OFFSET))(this);
		}

		::System::Single get_GetYawLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETYAWLEFT_OFFSET))(this);
		}

		::System::Single get_GetSpeedOnGetTarget()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONGETTARGET_OFFSET))(this);
		}

		::System::Single get_GetSpeedOnChangeTarget()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONCHANGETARGET_OFFSET))(this);
		}

		::System::Single get_GetSpeedOnMissingTarget()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONMISSINGTARGET_OFFSET))(this);
		}

		::System::Single get_GetSpeedOnLockingTarget()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GET_GETSPEEDONLOCKINGTARGET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_START_OFFSET))(this);
		}

		::System::Void InitStartDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_INITSTARTDIR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void DoUpdateOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_DOUPDATEONCE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean IsWeightZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_ISWEIGHTZERO_OFFSET))(this);
		}

		::System::Boolean UpdateWeight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 pivotPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_UPDATEWEIGHT_OFFSET))(this, forward, normal, pivotPos);
		}

		::System::Void UpdateBySpherical(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 pivotPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_UPDATEBYSPHERICAL_OFFSET))(this, forward, normal, pivotPos);
		}

		::System::Void RestoreIKPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_RESTOREIKPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 FixDir(::UnityEngine::Vector3 curDir, ::UnityEngine::Vector3 targetDir, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_FIXDIR_OFFSET))(this, curDir, targetDir, forward, normal);
		}

		::System::Void UpdateLockingDir(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 pivotPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_UPDATELOCKINGDIR_OFFSET))(this, forward, normal, pivotPos);
		}

		::UnityEngine::Vector3 CustomSlerp(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_CUSTOMSLERP_OFFSET))(this, from, target, forward, normal, t);
		}

		::System::Void RotateByHingerYawPitch(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normalXZ, ::UnityEngine::Vector3 pivotPos, ::UnityEngine::Vector3 targetDirection, ::UnityEngine::Vector3 maxDirectionXZ, ::System::Boolean outofrange)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_ROTATEBYHINGERYAWPITCH_OFFSET))(this, forward, normalXZ, pivotPos, targetDirection, maxDirectionXZ, outofrange);
		}

		::System::Single FixedLerp(::System::Single from, ::System::Single to, ::System::Single t, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_FIXEDLERP_OFFSET))(this, from, to, t, epsilon);
		}

		::UnityEngine::Vector3 GetRotateXZDir(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 fromxz, ::UnityEngine::Vector3 targetxz, ::UnityEngine::Vector3 forwardxz, ::System::Single speed, ::System::Boolean& notchanged)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_GETROTATEXZDIR_OFFSET))(this, forward, normal, fromxz, targetxz, forwardxz, speed, notchanged);
		}

		::UnityEngine::Vector3 CustomRotateTowards(::UnityEngine::Vector3 fromxz, ::UnityEngine::Vector3 targetxz, ::UnityEngine::Vector3 forwardxz, ::System::Single speed)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_CUSTOMROTATETOWARDS_OFFSET))(this, fromxz, targetxz, forwardxz, speed);
		}

		::System::Single FixPitch(::System::Single curPitchAngle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_FIXPITCH_OFFSET))(this, curPitchAngle);
		}

		::System::Boolean IsOutOfRange(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 tarDir, ::UnityEngine::Vector3 targetxz, ::UnityEngine::Vector3 forwardxz, ::UnityEngine::Vector3& maxDirXZ)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LOOKCONTROLLER_ISOUTOFRANGE_OFFSET))(this, forward, normal, tarDir, targetxz, forwardxz, maxDirXZ);
		}
	};
}
