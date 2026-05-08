#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/RotationLimit.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class RotationLimitPolygonal_LimitPoint; }
namespace RootMotion::FinalIK { class RotationLimitPolygonal_ReachCone; }

#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1BC9C680)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_BUILDREACHCONES_OFFSET UNITYSDK_OFFSET(0x1BC9C7B0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETREACHCONE_OFFSET UNITYSDK_OFFSET(0x1BC9EDA0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETSCALAR_OFFSET UNITYSDK_OFFSET(0x1BC9EC10)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITROTATION_OFFSET UNITYSDK_OFFSET(0x1BC9CE50)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITSWING_OFFSET UNITYSDK_OFFSET(0x1BC9D3D0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BC9C5E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1BC9C590)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_POINTTOTANGENTPLANE_OFFSET UNITYSDK_OFFSET(0x1BC9EC40)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1BC9D920)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SETLIMITPOINTS_OFFSET UNITYSDK_OFFSET(0x1BC9C6D0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SMOOTHPOINTS_OFFSET UNITYSDK_OFFSET(0x1BC9E3A0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_START_OFFSET UNITYSDK_OFFSET(0x1BC9CF00)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1BC9C630)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_TANGENTPOINTTOSPHERE_OFFSET UNITYSDK_OFFSET(0x1BC9ECF0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9EF10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitPolygonal_TypeDefinitionIndex = 36680;

	class RotationLimitPolygonal : public ::RootMotion::FinalIK::RotationLimit
	{
	public:
		::System::Single twistLimit; // 0x38
		::System::Int32 smoothIterations; // 0x3C
		::Il2CppArray<::RootMotion::FinalIK::RotationLimitPolygonal_LimitPoint*>* points; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* P; // 0x48
		::Il2CppArray<::RootMotion::FinalIK::RotationLimitPolygonal_ReachCone*>* reachCones; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_ASTHREAD_OFFSET))(this);
		}

		::System::Void SetLimitPoints(::Il2CppArray<::RootMotion::FinalIK::RotationLimitPolygonal_LimitPoint*>* points)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::RotationLimitPolygonal_LimitPoint*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SETLIMITPOINTS_OFFSET))(this, points);
		}

		::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITROTATION_OFFSET))(this, rotation);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_START_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void BuildReachCones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_BUILDREACHCONES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* SmoothPoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SMOOTHPOINTS_OFFSET))(this);
		}

		::System::Single GetScalar(::System::Int32 k)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETSCALAR_OFFSET))(this, k);
		}

		::UnityEngine::Vector3 PointToTangentPlane(::UnityEngine::Vector3 p, ::System::Single r)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_POINTTOTANGENTPLANE_OFFSET))(this, p, r);
		}

		::UnityEngine::Vector3 TangentPointToSphere(::UnityEngine::Vector3 q, ::System::Single r)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_TANGENTPOINTTOSPHERE_OFFSET))(this, q, r);
		}

		::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITSWING_OFFSET))(this, rotation);
		}

		::System::Int32 GetReachCone(::UnityEngine::Vector3 L)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETREACHCONE_OFFSET))(this, L);
		}
	};
}
