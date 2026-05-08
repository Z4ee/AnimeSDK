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
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class PolygonCollider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONUTILITY_ADDBONERIGIDBODY2D_OFFSET UNITYSDK_OFFSET(0x18B6CBB0)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x18B6C9F0)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x18B6C750)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x18B6C360)
#define SPINE_UNITY_SKELETONUTILITY_ADD_ONRESET_OFFSET UNITYSDK_OFFSET(0x18B6CD90)
#define SPINE_UNITY_SKELETONUTILITY_COLLECTBONES_OFFSET UNITYSDK_OFFSET(0x18B6EC70)
#define SPINE_UNITY_SKELETONUTILITY_GETBONEROOT_OFFSET UNITYSDK_OFFSET(0x18B70820)
#define SPINE_UNITY_SKELETONUTILITY_GETBOUNDINGBOXBOUNDS_OFFSET UNITYSDK_OFFSET(0x18B6CA90)
#define SPINE_UNITY_SKELETONUTILITY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18B6D620)
#define SPINE_UNITY_SKELETONUTILITY_GET_POSITIONSCALE_OFFSET UNITYSDK_OFFSET(0x18B6D880)
#define SPINE_UNITY_SKELETONUTILITY_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x18B6D270)
#define SPINE_UNITY_SKELETONUTILITY_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x18B6D520)
#define SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_1_OFFSET UNITYSDK_OFFSET(0x18B6F6B0)
#define SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET UNITYSDK_OFFSET(0x18B6F3E0)
#define SPINE_UNITY_SKELETONUTILITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B6D8B0)
#define SPINE_UNITY_SKELETONUTILITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B6DE60)
#define SPINE_UNITY_SKELETONUTILITY_REGISTERBONE_OFFSET UNITYSDK_OFFSET(0x18B6F6E0)
#define SPINE_UNITY_SKELETONUTILITY_REGISTERCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x18B6F7C0)
#define SPINE_UNITY_SKELETONUTILITY_REMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x18B6CE10)
#define SPINE_UNITY_SKELETONUTILITY_RESUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x18B6D890)
#define SPINE_UNITY_SKELETONUTILITY_SETCOLLIDERPOINTSLOCAL_OFFSET UNITYSDK_OFFSET(0x18B37CD0)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNBONERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x18B71200)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNBONE_OFFSET UNITYSDK_OFFSET(0x18B70D10)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNHIERARCHY_OFFSET UNITYSDK_OFFSET(0x18B71090)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNROOT_OFFSET UNITYSDK_OFFSET(0x18B70BA0)
#define SPINE_UNITY_SKELETONUTILITY_START_OFFSET UNITYSDK_OFFSET(0x18B6F3D0)
#define SPINE_UNITY_SKELETONUTILITY_UNREGISTERBONE_OFFSET UNITYSDK_OFFSET(0x18B6F760)
#define SPINE_UNITY_SKELETONUTILITY_UNREGISTERCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x18B6F840)
#define SPINE_UNITY_SKELETONUTILITY_UPDATEALLBONES_OFFSET UNITYSDK_OFFSET(0x18B705C0)
#define SPINE_UNITY_SKELETONUTILITY_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x18B70810)
#define SPINE_UNITY_SKELETONUTILITY_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x18B70520)
#define SPINE_UNITY_SKELETONUTILITY_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x18B70760)
#define SPINE_UNITY_SKELETONUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x18B6CE90)
#define SPINE_UNITY_SKELETONUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B715F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtility_TypeDefinitionIndex = 37857;

	class SkeletonUtility : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate* OnReset; // 0x18
		::UnityEngine::Transform* boneRoot; // 0x20
		::System::Boolean flipBy180DegreeRotation; // 0x28
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x30
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x38
		::Spine::Unity::ISkeletonAnimation* skeletonAnimation; // 0x40
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x48
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonUtilityBone*>* boneComponents; // 0x50
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonUtilityConstraint*>* constraintComponents; // 0x58
		::System::Single positionScale; // 0x60
		::System::Boolean hasOverrideBones; // 0x64
		::System::Boolean hasConstraints; // 0x65
		::System::Boolean needToReprocessBones; // 0x66

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::PolygonCollider2D* AddBoundingBoxGameObject(::Spine::Skeleton* skeleton, ::System::String* skinName, ::System::String* slotName, ::System::String* attachmentName, ::UnityEngine::Transform* parent, ::System::Boolean isTrigger)
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::Spine::Skeleton*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET))(skeleton, skinName, slotName, attachmentName, parent, isTrigger);
		}

		static ::UnityEngine::PolygonCollider2D* AddBoundingBoxGameObject_1(::System::String* name, ::Spine::BoundingBoxAttachment* box, ::Spine::Slot* slot, ::UnityEngine::Transform* parent, ::System::Boolean isTrigger)
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::System::String*, ::Spine::BoundingBoxAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_1_OFFSET))(name, box, slot, parent, isTrigger);
		}

		static ::UnityEngine::PolygonCollider2D* AddBoundingBoxAsComponent(::Spine::BoundingBoxAttachment* box, ::Spine::Slot* slot, ::UnityEngine::GameObject* gameObject, ::System::Boolean isTrigger)
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::Spine::BoundingBoxAttachment*, ::Spine::Slot*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXASCOMPONENT_OFFSET))(box, slot, gameObject, isTrigger);
		}

		static ::System::Void SetColliderPointsLocal(::UnityEngine::PolygonCollider2D* collider, ::Spine::Slot* slot, ::Spine::BoundingBoxAttachment* box, ::System::Single scale)
		{
			return ((::System::Void(*)(::UnityEngine::PolygonCollider2D*, ::Spine::Slot*, ::Spine::BoundingBoxAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SETCOLLIDERPOINTSLOCAL_OFFSET))(collider, slot, box, scale);
		}

		static ::UnityEngine::Bounds GetBoundingBoxBounds(::Spine::BoundingBoxAttachment* boundingBox, ::System::Single depth)
		{
			return ((::UnityEngine::Bounds(*)(::Spine::BoundingBoxAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GETBOUNDINGBOXBOUNDS_OFFSET))(boundingBox, depth);
		}

		static ::UnityEngine::Rigidbody2D* AddBoneRigidbody2D(::UnityEngine::GameObject* gameObject, ::System::Boolean isKinematic, ::System::Single gravityScale)
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBONERIGIDBODY2D_OFFSET))(gameObject, isKinematic, gravityScale);
		}

		::System::Void add_OnReset(::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADD_ONRESET_OFFSET))(this, value);
		}

		::System::Void remove_OnReset(::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtility_SkeletonUtilityDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REMOVE_ONRESET_OFFSET))(this, value);
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

		::System::Void HandleRendererReset(::Spine::Unity::SkeletonRenderer* r)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET))(this, r);
		}

		::System::Void HandleRendererReset_1(::Spine::Unity::SkeletonGraphic* g)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_1_OFFSET))(this, g);
		}

		::System::Void RegisterBone(::Spine::Unity::SkeletonUtilityBone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REGISTERBONE_OFFSET))(this, bone);
		}

		::System::Void UnregisterBone(::Spine::Unity::SkeletonUtilityBone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UNREGISTERBONE_OFFSET))(this, bone);
		}

		::System::Void RegisterConstraint(::Spine::Unity::SkeletonUtilityConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityConstraint*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REGISTERCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void UnregisterConstraint(::Spine::Unity::SkeletonUtilityConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityConstraint*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UNREGISTERCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void CollectBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_COLLECTBONES_OFFSET))(this);
		}

		::System::Void UpdateLocal(::Spine::Unity::ISkeletonAnimation* anim)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATELOCAL_OFFSET))(this, anim);
		}

		::System::Void UpdateWorld(::Spine::Unity::ISkeletonAnimation* anim)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATEWORLD_OFFSET))(this, anim);
		}

		::System::Void UpdateComplete(::Spine::Unity::ISkeletonAnimation* anim)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATECOMPLETE_OFFSET))(this, anim);
		}

		::System::Void UpdateAllBones(::Spine::Unity::SkeletonUtilityBone_UpdatePhase phase)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_UpdatePhase))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATEALLBONES_OFFSET))(this, phase);
		}

		::UnityEngine::Transform* GetBoneRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GETBONEROOT_OFFSET))(this);
		}

		::UnityEngine::GameObject* SpawnRoot(::Spine::Unity::SkeletonUtilityBone_Mode mode, ::System::Boolean pos, ::System::Boolean rot, ::System::Boolean sca)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNROOT_OFFSET))(this, mode, pos, rot, sca);
		}

		::UnityEngine::GameObject* SpawnHierarchy(::Spine::Unity::SkeletonUtilityBone_Mode mode, ::System::Boolean pos, ::System::Boolean rot, ::System::Boolean sca)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNHIERARCHY_OFFSET))(this, mode, pos, rot, sca);
		}

		::UnityEngine::GameObject* SpawnBoneRecursively(::Spine::Bone* bone, ::UnityEngine::Transform* parent, ::Spine::Unity::SkeletonUtilityBone_Mode mode, ::System::Boolean pos, ::System::Boolean rot, ::System::Boolean sca)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Bone*, ::UnityEngine::Transform*, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNBONERECURSIVELY_OFFSET))(this, bone, parent, mode, pos, rot, sca);
		}

		::UnityEngine::GameObject* SpawnBone(::Spine::Bone* bone, ::UnityEngine::Transform* parent, ::Spine::Unity::SkeletonUtilityBone_Mode mode, ::System::Boolean pos, ::System::Boolean rot, ::System::Boolean sca)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Spine::Bone*, ::UnityEngine::Transform*, ::Spine::Unity::SkeletonUtilityBone_Mode, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNBONE_OFFSET))(this, bone, parent, mode, pos, rot, sca);
		}
	};
}
