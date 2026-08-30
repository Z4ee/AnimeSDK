#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonUtilityBone_Mode.h"
#include "unitysdk/Spine/Unity/SkeletonUtilityBone_UpdatePhase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace Spine::Unity { class SkeletonUtilityBone; }
namespace Spine::Unity { class SkeletonUtilityConstraint; }
namespace Spine::Unity { class SkeletonUtility_SkeletonUtilityDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class PolygonCollider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONUTILITY_ADDBONERIGIDBODY2D_OFFSET UNITYSDK_OFFSET(0x1833BC70)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1833BAF0)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1833B850)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1833B340)
#define SPINE_UNITY_SKELETONUTILITY_ADD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1833BD70)
#define SPINE_UNITY_SKELETONUTILITY_COLLECTBONES_OFFSET UNITYSDK_OFFSET(0x1833D070)
#define SPINE_UNITY_SKELETONUTILITY_GETBONEROOT_OFFSET UNITYSDK_OFFSET(0x1833EAC0)
#define SPINE_UNITY_SKELETONUTILITY_GETBOUNDINGBOXBOUNDS_OFFSET UNITYSDK_OFFSET(0x1833BB90)
#define SPINE_UNITY_SKELETONUTILITY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1833C2E0)
#define SPINE_UNITY_SKELETONUTILITY_GET_POSITIONSCALE_OFFSET UNITYSDK_OFFSET(0x1833C320)
#define SPINE_UNITY_SKELETONUTILITY_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1833C0D0)
#define SPINE_UNITY_SKELETONUTILITY_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1833C1A0)
#define SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_1_OFFSET UNITYSDK_OFFSET(0x1833DA30)
#define SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET UNITYSDK_OFFSET(0x1833D9F0)
#define SPINE_UNITY_SKELETONUTILITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1833C350)
#define SPINE_UNITY_SKELETONUTILITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1833C860)
#define SPINE_UNITY_SKELETONUTILITY_REGISTERBONE_OFFSET UNITYSDK_OFFSET(0x1833DA60)
#define SPINE_UNITY_SKELETONUTILITY_REGISTERCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1833DB90)
#define SPINE_UNITY_SKELETONUTILITY_REMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1833BDF0)
#define SPINE_UNITY_SKELETONUTILITY_RESUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1833C330)
#define SPINE_UNITY_SKELETONUTILITY_SETCOLLIDERPOINTSLOCAL_OFFSET UNITYSDK_OFFSET(0x183111A0)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNBONERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1833F220)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNBONE_OFFSET UNITYSDK_OFFSET(0x1833EE00)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1833F060)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNROOT_OFFSET UNITYSDK_OFFSET(0x1833EC40)
#define SPINE_UNITY_SKELETONUTILITY_START_OFFSET UNITYSDK_OFFSET(0x1833D9E0)
#define SPINE_UNITY_SKELETONUTILITY_UNREGISTERBONE_OFFSET UNITYSDK_OFFSET(0x1833DB30)
#define SPINE_UNITY_SKELETONUTILITY_UNREGISTERCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1833DC60)
#define SPINE_UNITY_SKELETONUTILITY_UPDATEALLBONES_OFFSET UNITYSDK_OFFSET(0x1833E8E0)
#define SPINE_UNITY_SKELETONUTILITY_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1833EAB0)
#define SPINE_UNITY_SKELETONUTILITY_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1833E850)
#define SPINE_UNITY_SKELETONUTILITY_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1833E980)
#define SPINE_UNITY_SKELETONUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1833BE70)
#define SPINE_UNITY_SKELETONUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1833F580)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtility_TypeDefinitionIndex = 43868;

	class SkeletonUtility : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate* OnReset; // 0x18
		::UnityEngine::Transform* boneRoot; // 0x20
		::System::Boolean flipBy180DegreeRotation; // 0x28
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x30
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x38
		::UnityEngine::Canvas* canvas; // 0x40
		::Spine::Unity::ISkeletonAnimation* skeletonAnimation; // 0x48
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x50
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonUtilityBone*>* boneComponents; // 0x58
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonUtilityConstraint*>* constraintComponents; // 0x60
		::System::Single positionScale; // 0x68
		::System::Boolean hasOverrideBones; // 0x6C
		::System::Boolean hasConstraints; // 0x6D
		::System::Boolean needToReprocessBones; // 0x6E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::PolygonCollider2D* AddBoundingBoxGameObject(::Spine::Skeleton* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::Transform* a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::Spine::Skeleton*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::PolygonCollider2D* AddBoundingBoxGameObject_1(::System::String* a1, ::Spine::BoundingBoxAttachment* a2, ::Spine::Slot* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::System::String*, ::Spine::BoundingBoxAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::PolygonCollider2D* AddBoundingBoxAsComponent(::Spine::BoundingBoxAttachment* a1, ::Spine::Slot* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::Spine::BoundingBoxAttachment*, ::Spine::Slot*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXASCOMPONENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetColliderPointsLocal(::UnityEngine::PolygonCollider2D* a1, ::Spine::Slot* a2, ::Spine::BoundingBoxAttachment* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::PolygonCollider2D*, ::Spine::Slot*, ::Spine::BoundingBoxAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SETCOLLIDERPOINTSLOCAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Bounds GetBoundingBoxBounds(::Spine::BoundingBoxAttachment* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Bounds(*)(::Spine::BoundingBoxAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GETBOUNDINGBOXBOUNDS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rigidbody2D* AddBoneRigidbody2D(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBONERIGIDBODY2D_OFFSET))(a1, a2, a3);
		}

		::System::Void add_OnReset(::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADD_ONRESET_OFFSET))(this, a1);
		}

		::System::Void remove_OnReset(::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REMOVE_ONRESET_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATE_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonComponent* get_SkeletonComponent()
		{
			return ((::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_SKELETONCOMPONENT_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_SKELETON_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_PositionScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_POSITIONSCALE_OFFSET))(this);
		}

		::System::Void ResubscribeEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_RESUBSCRIBEEVENTS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ONDISABLE_OFFSET))(this);
		}

		::System::Void HandleRendererReset(::Spine::Unity::SkeletonRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET))(this, a1);
		}

		::System::Void HandleRendererReset_1(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_1_OFFSET))(this, a1);
		}

		::System::Void RegisterBone(::Spine::Unity::SkeletonUtilityBone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REGISTERBONE_OFFSET))(this, a1);
		}

		::System::Void UnregisterBone(::Spine::Unity::SkeletonUtilityBone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UNREGISTERBONE_OFFSET))(this, a1);
		}

		::System::Void RegisterConstraint(::Spine::Unity::SkeletonUtilityConstraint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityConstraint*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REGISTERCONSTRAINT_OFFSET))(this, a1);
		}

		::System::Void UnregisterConstraint(::Spine::Unity::SkeletonUtilityConstraint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityConstraint*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UNREGISTERCONSTRAINT_OFFSET))(this, a1);
		}

		::System::Void CollectBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_COLLECTBONES_OFFSET))(this);
		}

		::System::Void UpdateLocal(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void UpdateWorld(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void UpdateComplete(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void UpdateAllBones(::Spine::Unity::SkeletonUtilityBone_UpdatePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_UpdatePhase))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATEALLBONES_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetBoneRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GETBONEROOT_OFFSET))(this);
		}

		::UnityEngine::GameObject* SpawnRoot(::Spine::Unity::SkeletonUtilityBone_Mode a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNROOT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* SpawnHierarchy(::Spine::Unity::SkeletonUtilityBone_Mode a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNHIERARCHY_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* SpawnBoneRecursively(::Spine::Bone* a1, ::UnityEngine::Transform* a2, ::Spine::Unity::SkeletonUtilityBone_Mode a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Bone*, ::UnityEngine::Transform*, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNBONERECURSIVELY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::GameObject* SpawnBone(::Spine::Bone* a1, ::UnityEngine::Transform* a2, ::Spine::Unity::SkeletonUtilityBone_Mode a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Bone*, ::UnityEngine::Transform*, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNBONE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
