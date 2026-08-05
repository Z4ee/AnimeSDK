#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttachment_Hierarchy.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace Spine { class Attachment; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }

#define SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x1C19EA30)
#define SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1C19E990)
#define SPINE_UNITY_SPINEATTACHMENT_GETHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1C19E7C0)
#define SPINE_UNITY_SPINEATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C19E6D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAttachment_TypeDefinitionIndex = 40189;

	class SpineAttachment : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::String* skinField; // 0x28
		::System::String* slotField; // 0x30
		::System::Boolean returnAttachmentPath; // 0x38
		::System::Boolean currentSkinOnly; // 0x39
		::System::Boolean placeholdersOnly; // 0x3A

		::System::Void _ctor(::System::Boolean currentSkinOnly, ::System::Boolean returnAttachmentPath, ::System::Boolean placeholdersOnly, ::System::String* slotField, ::System::String* dataField, ::System::String* skinField, ::System::Boolean includeNone, ::System::Boolean fallbackToTextField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT__CTOR_OFFSET))(this, currentSkinOnly, returnAttachmentPath, placeholdersOnly, slotField, dataField, skinField, includeNone, fallbackToTextField);
		}

		static ::Spine::Unity::SpineAttachment_Hierarchy GetHierarchy(::System::String* fullPath)
		{
			return ((::Spine::Unity::SpineAttachment_Hierarchy(*)(::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETHIERARCHY_OFFSET))(fullPath);
		}

		static ::Spine::Attachment* GetAttachment(::System::String* attachmentPath, ::Spine::SkeletonData* skeletonData)
		{
			return ((::Spine::Attachment*(*)(::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET))(attachmentPath, skeletonData);
		}

		static ::Spine::Attachment* GetAttachment_1(::System::String* attachmentPath, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::Spine::Attachment*(*)(::System::String*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_1_OFFSET))(attachmentPath, skeletonDataAsset);
		}
	};
}
