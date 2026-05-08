#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class FABRIKChain; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ADDPOINTSTOARRAY_OFFSET UNITYSDK_OFFSET(0x1B6F7A60)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1B6F7020)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_GETCENTROID_OFFSET UNITYSDK_OFFSET(0x1B6F7630)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1B6F79C0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1B6F7BF0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ISROOT_OFFSET UNITYSDK_OFFSET(0x1B6F72F0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B6F6650)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1B6F70E0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B6F7380)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1B6F6F50)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F7C90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverFABRIKRoot_TypeDefinitionIndex = 36617;

	class IKSolverFABRIKRoot : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::System::Int32 iterations; // 0x60
		::System::Single rootPin; // 0x64
		::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>* chains; // 0x68
		::System::Boolean zeroWeightApplied; // 0x70
		::Il2CppArray<::System::Boolean>* isRoot; // 0x78
		::UnityEngine::Vector3 rootDefaultPosition; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ISVALID_OFFSET))(this, message);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ONINITIATE_OFFSET))(this);
		}

		::System::Boolean IsRoot(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ISROOT_OFFSET))(this, index);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ONUPDATE_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_GETPOINT_OFFSET))(this, transform);
		}

		::System::Void AddPointsToArray(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*& array, ::RootMotion::FinalIK::FABRIKChain* chain)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*&, ::RootMotion::FinalIK::FABRIKChain*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_ADDPOINTSTOARRAY_OFFSET))(this, array, chain);
		}

		::UnityEngine::Vector3 GetCentroid()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIKROOT_GETCENTROID_OFFSET))(this);
		}
	};
}
