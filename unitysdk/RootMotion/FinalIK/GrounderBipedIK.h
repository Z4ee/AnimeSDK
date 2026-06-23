#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounder.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class BipedIK; }
namespace RootMotion::FinalIK { class IKSolverLimb; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x1E008FA0)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0x1E008DB0)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E00A010)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E0093E0)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E009D20)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E009440)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E008D20)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1E008CD0)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1E008D70)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_SETLEGIK_OFFSET UNITYSDK_OFFSET(0x1E009BF0)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E008F40)
#define ROOTMOTION_FINALIK_GROUNDERBIPEDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00A290)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderBipedIK_TypeDefinitionIndex = 38299;

	class GrounderBipedIK : public ::RootMotion::FinalIK::Grounder
	{
	public:
		::RootMotion::FinalIK::BipedIK* ik; // 0x50
		::System::Single spineBend; // 0x58
		::System::Single spineSpeed; // 0x5C
		::Il2CppArray<::UnityEngine::Transform*>* feet; // 0x60
		::Il2CppArray<::UnityEngine::Quaternion>* footRotations; // 0x68
		::UnityEngine::Vector3 animatedPelvisLocalPosition; // 0x70
		::UnityEngine::Vector3 solvedPelvisLocalPosition; // 0x7C
		::UnityEngine::Vector3 spineOffset; // 0x88
		::System::Single lastWeight; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean IsReadyToInitiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ISREADYTOINITIATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_UPDATE_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_INITIATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void SetLegIK(::RootMotion::FinalIK::IKSolverLimb* limb, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverLimb*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_SETLEGIK_OFFSET))(this, limb, index);
		}

		::System::Void OnPostSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONPOSTSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERBIPEDIK_ONDESTROY_OFFSET))(this);
		}
	};
}
