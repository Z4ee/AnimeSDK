#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Attachment; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Skin; }
namespace Spine { class Slot; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class PolygonCollider2D; }

#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_ADDCOLLIDERSFORSKIN_OFFSET UNITYSDK_OFFSET(0x168A3DD0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x168A4740)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET UNITYSDK_OFFSET(0x168A4340)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x168A3590)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x168A3580)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x168A35A0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x168A35B0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x168A3570)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_HANDLEREBUILD_OFFSET UNITYSDK_OFFSET(0x168A3DC0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x168A35D0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x168A4900)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_MATCHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x168A4920)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x168A4630)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x168A3C00)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_START_OFFSET UNITYSDK_OFFSET(0x168A35C0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER__CCTOR_OFFSET UNITYSDK_OFFSET(0x168A4E20)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x168A4D10)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoundingBoxFollower_TypeDefinitionIndex = 42213;

	class BoundingBoxFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_DebugMessages()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoundingBoxFollower_TypeDefinitionIndex)->GetStaticField(0x10530);
		}
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER__CCTOR_OFFSET))();
		}

		::Spine::Slot* get_Slot()
		{
			return ((::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_SLOT_OFFSET))(this);
		}

		::Spine::BoundingBoxAttachment* get_CurrentAttachment()
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENT_OFFSET))(this);
		}

		::System::String* get_CurrentAttachmentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENTNAME_OFFSET))(this);
		}

		::UnityEngine::PolygonCollider2D* get_CurrentCollider()
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTCOLLIDER_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONENABLE_OFFSET))(this);
		}

		::System::Void HandleRebuild(::Spine::Unity::SkeletonRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_HANDLEREBUILD_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void AddCollidersForSkin(::Spine::Skin* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::PolygonCollider2D*>* a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*, ::System::Int32, ::Il2CppArray<::UnityEngine::PolygonCollider2D*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_ADDCOLLIDERSFORSKIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONDISABLE_OFFSET))(this);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_CLEARSTATE_OFFSET))(this);
		}

		::System::Void DisposeExcessCollidersAfter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void MatchAttachment(::Spine::Attachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_MATCHATTACHMENT_OFFSET))(this, a1);
		}
	};
}
