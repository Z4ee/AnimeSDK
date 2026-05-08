#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_Bone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ADDBONE_OFFSET UNITYSDK_OFFSET(0x1BE1D210)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BE1D510)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1BE1DAD0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1BE1DAE0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GETSINGULARITYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BE1A2A0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_ALLOWCOMMONPARENT_OFFSET UNITYSDK_OFFSET(0x1BE1DBF0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_BONELENGTHCANBEZERO_OFFSET UNITYSDK_OFFSET(0x1BE1DBE0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_LOCALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1BE1A870)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_MINBONES_OFFSET UNITYSDK_OFFSET(0x1BE1DBD0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1BE1A800)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_INITIATEBONES_OFFSET UNITYSDK_OFFSET(0x1BE18E00)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BE1D590)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1BE1DC00)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE1DC10)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_SETCHAIN_OFFSET UNITYSDK_OFFSET(0x1BE1CFF0)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_SINGULARITYDETECTED_OFFSET UNITYSDK_OFFSET(0x1BE1DC20)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1BE1D410)
#define ROOTMOTION_FINALIK_IKSOLVERHEURISTIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1CF90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverHeuristic_TypeDefinitionIndex = 36622;

	class IKSolverHeuristic : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::UnityEngine::Transform* target; // 0x60
		::System::Single tolerance; // 0x68
		::System::Int32 maxIterations; // 0x6C
		::System::Boolean useRotationLimits; // 0x70
		::System::Boolean XY; // 0x71
		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>* bones; // 0x78
		::UnityEngine::Vector3 lastLocalDirection; // 0x80
		::System::Single chainLength; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC__CTOR_OFFSET))(this);
		}

		::System::Boolean SetChain(::Il2CppArray<::UnityEngine::Transform*>* hierarchy, ::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_SETCHAIN_OFFSET))(this, hierarchy, root);
		}

		::System::Void AddBone(::UnityEngine::Transform* bone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ADDBONE_OFFSET))(this, bone);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ISVALID_OFFSET))(this, message);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GETPOINT_OFFSET))(this, transform);
		}

		::System::Int32 get_minBones()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_MINBONES_OFFSET))(this);
		}

		::System::Boolean get_boneLengthCanBeZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_BONELENGTHCANBEZERO_OFFSET))(this);
		}

		::System::Boolean get_allowCommonParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_ALLOWCOMMONPARENT_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_ONUPDATE_OFFSET))(this);
		}

		::System::Void InitiateBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_INITIATEBONES_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_localDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_LOCALDIRECTION_OFFSET))(this);
		}

		::System::Single get_positionOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetSingularityOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_GETSINGULARITYOFFSET_OFFSET))(this);
		}

		::System::Boolean SingularityDetected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERHEURISTIC_SINGULARITYDETECTED_OFFSET))(this);
		}
	};
}
