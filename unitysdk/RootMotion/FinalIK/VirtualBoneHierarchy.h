#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class VirtualBone; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_ADDBONE_OFFSET UNITYSDK_OFFSET(0x1BD1CBA0)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_APPLYTOREALTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BD1DC60)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_DEBUGDRAWVIRTUALBONE_OFFSET UNITYSDK_OFFSET(0x1BD1EA60)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BD1EB30)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_FINDBONE_OFFSET UNITYSDK_OFFSET(0x1BD1CD00)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1BD1CB90)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_INITHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1BD1CDA0)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_SYNCANIMATIONTOVIRTUALBONES_OFFSET UNITYSDK_OFFSET(0x1BD1DEC0)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_UPDATEBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BD1D0A0)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_UPDATESOLVERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BD1D3A0)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1EB60)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VirtualBoneHierarchy_TypeDefinitionIndex = 36736;

	class VirtualBoneHierarchy : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>* _Bones_k__BackingField; // 0x10
		::System::Single gizmoSize; // 0x18
		::System::Boolean debugDrawGizmos; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>* get_Bones()
		{
			return ((::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_GET_BONES_OFFSET))(this);
		}

		::RootMotion::FinalIK::VirtualBone* AddBone(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation, ::RootMotion::FinalIK::VirtualBone* parent)
		{
			return ((::RootMotion::FinalIK::VirtualBone*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RootMotion::FinalIK::VirtualBone*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_ADDBONE_OFFSET))(this, localPosition, localRotation, parent);
		}

		::RootMotion::FinalIK::VirtualBone* FindBone(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::VirtualBone*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_FINDBONE_OFFSET))(this, transform);
		}

		::System::Void InitHierarchy(::Il2CppArray<::RootMotion::FinalIK::VirtualBone*>* bones)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::VirtualBone*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_INITHIERARCHY_OFFSET))(this, bones);
		}

		::System::Void UpdateBoneTransform(::RootMotion::FinalIK::VirtualBone* bone, ::System::Nullable_1<::Foundation::Unreal::FTransform>& parentSolverTransform)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VirtualBone*, ::System::Nullable_1<::Foundation::Unreal::FTransform>&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_UPDATEBONETRANSFORM_OFFSET))(this, bone, parentSolverTransform);
		}

		::System::Void UpdateSolverTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_UPDATESOLVERTRANSFORMS_OFFSET))(this);
		}

		::System::Void ApplyToRealTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_APPLYTOREALTRANSFORMS_OFFSET))(this);
		}

		::System::Void SyncAnimationToVirtualBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_SYNCANIMATIONTOVIRTUALBONES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>* Evaluate()
		{
			return ((::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_EVALUATE_OFFSET))(this);
		}

		::System::Void DebugDrawVirtualBone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY_DEBUGDRAWVIRTUALBONE_OFFSET))(this);
		}
	};
}
