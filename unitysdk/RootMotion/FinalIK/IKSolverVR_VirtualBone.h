#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_GETDIRECTIONTOBENDPOINT_OFFSET UNITYSDK_OFFSET(0x1BE20DE0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_PRESOLVE_OFFSET UNITYSDK_OFFSET(0x1BE1F870)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_READ_OFFSET UNITYSDK_OFFSET(0x1BE1F510)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATEAROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x1BE1FC90)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATEBY_1_OFFSET UNITYSDK_OFFSET(0x1BE20240)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATEBY_OFFSET UNITYSDK_OFFSET(0x1BE1FF50)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATETO_OFFSET UNITYSDK_OFFSET(0x1BE205D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVECCD_OFFSET UNITYSDK_OFFSET(0x1BE21840)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVEFABRIKJOINT_OFFSET UNITYSDK_OFFSET(0x1BE21750)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVEFABRIK_OFFSET UNITYSDK_OFFSET(0x1BE210E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVETRIGONOMETRIC_OFFSET UNITYSDK_OFFSET(0x1BE207A0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SWINGROTATION_OFFSET UNITYSDK_OFFSET(0x1BE1F540)
#define ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1F4C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_VirtualBone_TypeDefinitionIndex = 36645;

	class IKSolverVR_VirtualBone : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 readPosition; // 0x10
		::UnityEngine::Quaternion readRotation; // 0x1C
		::UnityEngine::Vector3 solverPosition; // 0x2C
		::UnityEngine::Quaternion solverRotation; // 0x38
		::System::Single length; // 0x48
		::System::Single sqrMag; // 0x4C
		::UnityEngine::Vector3 axis; // 0x50

		::System::Void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE__CTOR_OFFSET))(this, position, rotation);
		}

		::System::Void Read(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_READ_OFFSET))(this, position, rotation);
		}

		static ::System::Void SwingRotation(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 index, ::UnityEngine::Vector3 swingTarget, ::System::Single weight)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SWINGROTATION_OFFSET))(bones, index, swingTarget, weight);
		}

		static ::System::Single PreSolve(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*& bones)
		{
			return ((::System::Single(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_PRESOLVE_OFFSET))(bones);
		}

		static ::System::Void RotateAroundPoint(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 index, ::UnityEngine::Vector3 point, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATEAROUNDPOINT_OFFSET))(bones, index, point, rotation);
		}

		static ::System::Void RotateBy(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 index, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATEBY_OFFSET))(bones, index, rotation);
		}

		static ::System::Void RotateBy_1(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATEBY_1_OFFSET))(bones, rotation);
		}

		static ::System::Void RotateTo(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 index, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_ROTATETO_OFFSET))(bones, index, rotation);
		}

		static ::System::Void SolveTrigonometric(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 first, ::System::Int32 second, ::System::Int32 third, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 bendNormal, ::System::Single weight)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVETRIGONOMETRIC_OFFSET))(bones, first, second, third, targetPosition, bendNormal, weight);
		}

		static ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 direction, ::System::Single directionMag, ::UnityEngine::Vector3 bendDirection, ::System::Single sqrMag1, ::System::Single sqrMag2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_GETDIRECTIONTOBENDPOINT_OFFSET))(direction, directionMag, bendDirection, sqrMag1, sqrMag2);
		}

		static ::System::Void SolveFABRIK(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 targetPosition, ::System::Single weight, ::System::Single minNormalizedTargetDistance, ::System::Int32 iterations, ::System::Single length, ::UnityEngine::Vector3 startOffset)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVEFABRIK_OFFSET))(bones, startPosition, targetPosition, weight, minNormalizedTargetDistance, iterations, length, startOffset);
		}

		static ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::System::Single length)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVEFABRIKJOINT_OFFSET))(pos1, pos2, length);
		}

		static ::System::Void SolveCCD(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::UnityEngine::Vector3 targetPosition, ::System::Single weight, ::System::Int32 iterations)
		{
			return ((::System::Void(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_VIRTUALBONE_SOLVECCD_OFFSET))(bones, targetPosition, weight, iterations);
		}
	};
}
