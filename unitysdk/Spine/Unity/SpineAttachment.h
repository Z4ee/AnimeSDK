#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SpineAttachment_Hierarchy.h"
#include "unitysdk/Spine/Unity/SpineAttributeBase.h"

namespace Spine { class Attachment; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }

#define SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x168D41C0)
#define SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x168D40B0)
#define SPINE_UNITY_SPINEATTACHMENT_GETHIERARCHY_OFFSET UNITYSDK_OFFSET(0x168D3F00)
#define SPINE_UNITY_SPINEATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x168D3E90)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAttachment_TypeDefinitionIndex = 42296;

	class SpineAttachment : public ::Spine::Unity::SpineAttributeBase
	{
	public:
		::System::String* slotField; // 0x28
		::System::String* skinField; // 0x30
		::System::Boolean placeholdersOnly; // 0x38
		::System::Boolean returnAttachmentPath; // 0x39
		::System::Boolean currentSkinOnly; // 0x3A

		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::Spine::Unity::SpineAttachment_Hierarchy GetHierarchy(::System::String* a1)
		{
			return ((::Spine::Unity::SpineAttachment_Hierarchy(*)(::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETHIERARCHY_OFFSET))(a1);
		}

		static ::Spine::Attachment* GetAttachment(::System::String* a1, ::Spine::SkeletonData* a2)
		{
			return ((::Spine::Attachment*(*)(::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET))(a1, a2);
		}

		static ::Spine::Attachment* GetAttachment_1(::System::String* a1, ::Spine::Unity::SkeletonDataAsset* a2)
		{
			return ((::Spine::Attachment*(*)(::System::String*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_1_OFFSET))(a1, a2);
		}
	};
}
