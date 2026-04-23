#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Attachment; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Skin; }
namespace Spine { class Slot; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class PolygonCollider2D; }

#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ADDCOLLIDERSFORSKIN_OFFSET UNITYSDK_OFFSET(0x19E392E0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x19E399C0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET UNITYSDK_OFFSET(0x19E397E0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x19E384E0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x19E384D0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x19E384F0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x19E38500)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x19E384C0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_HANDLEREBUILD_OFFSET UNITYSDK_OFFSET(0x19E38E40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19E38520)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19E39B20)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_MATCHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x19E39B40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19E398E0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19E38BF0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_START_OFFSET UNITYSDK_OFFSET(0x19E38510)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E39FB0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19E39EA0)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoundingBoxFollowerGraphic_TypeDefinitionIndex = 40572;

	class BoundingBoxFollowerGraphic : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_DebugMessages()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoundingBoxFollowerGraphic_TypeDefinitionIndex)->GetStaticField(0xE910);
		}
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::String* slotName; // 0x20
		::System::Boolean isTrigger; // 0x28
		::System::Boolean usedByEffector; // 0x29
		::System::Boolean usedByComposite; // 0x2A
		::System::Boolean clearStateOnDisable; // 0x2B
		::Spine::Slot* slot; // 0x30
		::Spine::BoundingBoxAttachment* currentAttachment; // 0x38
		::System::String* currentAttachmentName; // 0x40
		::UnityEngine::PolygonCollider2D* currentCollider; // 0x48
		::System::Collections::Generic::Dictionary_2<::Spine::BoundingBoxAttachment*, ::UnityEngine::PolygonCollider2D*>* colliderTable; // 0x50
		::System::Collections::Generic::Dictionary_2<::Spine::BoundingBoxAttachment*, ::System::String*>* nameTable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC__CCTOR_OFFSET))();
		}

		::Spine::Slot* get_Slot()
		{
			return ((::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_SLOT_OFFSET))(this);
		}

		::Spine::BoundingBoxAttachment* get_CurrentAttachment()
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENT_OFFSET))(this);
		}

		::System::String* get_CurrentAttachmentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENTNAME_OFFSET))(this);
		}

		::UnityEngine::PolygonCollider2D* get_CurrentCollider()
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTCOLLIDER_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONENABLE_OFFSET))(this);
		}

		::System::Void HandleRebuild(::Spine::Unity::SkeletonGraphic* sr)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_HANDLEREBUILD_OFFSET))(this, sr);
		}

		::System::Void Initialize(::System::Boolean overwrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_INITIALIZE_OFFSET))(this, overwrite);
		}

		::System::Void AddCollidersForSkin(::Spine::Skin* skin, ::System::Int32 slotIndex, ::Il2CppArray<::UnityEngine::PolygonCollider2D*>* previousColliders, ::System::Single scale, ::System::Int32& collidersCount)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*, ::System::Int32, ::Il2CppArray<::UnityEngine::PolygonCollider2D*>*, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ADDCOLLIDERSFORSKIN_OFFSET))(this, skin, slotIndex, previousColliders, scale, collidersCount);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CLEARSTATE_OFFSET))(this);
		}

		::System::Void DisposeExcessCollidersAfter(::System::Int32 requiredCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET))(this, requiredCount);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void MatchAttachment(::Spine::Attachment* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_MATCHATTACHMENT_OFFSET))(this, attachment);
		}
	};
}
