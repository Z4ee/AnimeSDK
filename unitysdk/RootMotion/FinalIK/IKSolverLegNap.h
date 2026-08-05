#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverLegNapType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F6E9EA0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETLEGTRSLIST_OFFSET UNITYSDK_OFFSET(0x1F6E9590)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1F6E92F0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1F6E92A0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETTOECONVEXPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6EB9B0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETTOECONVEXROTATION_OFFSET UNITYSDK_OFFSET(0x1F6EB8C0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_BANFIXTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F6E90C0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_GROUNDPANELNORMAL_OFFSET UNITYSDK_OFFSET(0x1F6E9040)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_GROUNDPANELPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6E9080)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_IKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F6E9020)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_IKROTATION_OFFSET UNITYSDK_OFFSET(0x1F6E9000)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET__NOTTRIGONOMETRIC_OFFSET UNITYSDK_OFFSET(0x1F6E90D0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F6E9A20)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ONENABLED_OFFSET UNITYSDK_OFFSET(0x1F6E90E0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1F6EA460)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6EAA70)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_GROUNDPANELNORMAL_OFFSET UNITYSDK_OFFSET(0x1F6E9060)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_GROUNDPANELPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6E90A0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_IKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F6E9030)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_IKROTATION_OFFSET UNITYSDK_OFFSET(0x1F6E9010)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F6EA1E0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6EBA20)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLegNap_TypeDefinitionIndex = 38828;

	class IKSolverLegNap : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		// static const ::System::Single PRECISION; // 0x0
		::RootMotion::FinalIK::IKSolverLegNapType legSolveType; // 0x60
		::System::Single groundDampTime; // 0x64
		::System::Single reviseDampTime; // 0x68
		::System::Int32 maxIterations; // 0x6C
		::UnityEngine::Transform* legRoot; // 0x70
		::UnityEngine::Transform* calf; // 0x78
		::UnityEngine::Transform* foot; // 0x80
		::UnityEngine::Transform* toe; // 0x88
		::System::Boolean useAnimatedBendNormal; // 0x90
		::UnityEngine::Transform* rootTransformInfo; // 0x98
		::System::Single bendToTargetWeight; // 0xA0
		::System::Boolean enableToeConvexLift; // 0xA4
		::UnityEngine::Quaternion toeConvexRot; // 0xA8
		::UnityEngine::Vector3 toeConvexOffset; // 0xB8
		::Il2CppArray<::UnityEngine::Vector2>* toeConvex; // 0xC8
		::UnityEngine::Quaternion _IKRotation_k__BackingField; // 0xD0
		::System::Single _IKRotationWeight_k__BackingField; // 0xE0
		::UnityEngine::Vector3 _GroundPanelNormal_k__BackingField; // 0xE4
		::UnityEngine::Vector3 _GroundPanelPosition_k__BackingField; // 0xF0
		::System::Single _lastReviseOffset; // 0xFC
		::System::Single _lastGroundHeight; // 0x100
		::Il2CppArray<::UnityEngine::Vector3>* _defaultLocalPositions; // 0x108
		::Il2CppArray<::UnityEngine::Quaternion>* _defaultLocalRotations; // 0x110
		::UnityEngine::Vector3 _bendNormal; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_IKRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_IKROTATION_OFFSET))(this);
		}

		::System::Void set_IKRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_IKROTATION_OFFSET))(this, value);
		}

		::System::Single get_IKRotationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_IKROTATIONWEIGHT_OFFSET))(this);
		}

		::System::Void set_IKRotationWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_IKROTATIONWEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_GroundPanelNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_GROUNDPANELNORMAL_OFFSET))(this);
		}

		::System::Void set_GroundPanelNormal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_GROUNDPANELNORMAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_GroundPanelPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_GROUNDPANELPOSITION_OFFSET))(this);
		}

		::System::Void set_GroundPanelPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_SET_GROUNDPANELPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_BanFixTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET_BANFIXTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get__notTrigonometric()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GET__NOTTRIGONOMETRIC_OFFSET))(this);
		}

		::System::Void OnEnabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ONENABLED_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETPOINT_OFFSET))(this, transform);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETPOINTS_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ISVALID_OFFSET))(this, message);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetToeConvexRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETTOECONVEXROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetToeConvexPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETTOECONVEXPOSITION_OFFSET))(this);
		}

		::System::Boolean GetLegTrsList(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& list)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_GETLEGTRSLIST_OFFSET))(this, list);
		}
	};
}
