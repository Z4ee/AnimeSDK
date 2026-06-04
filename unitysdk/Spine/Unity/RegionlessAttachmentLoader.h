#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasRegion; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class MeshAttachment; }
namespace Spine { class PathAttachment; }
namespace Spine { class PointAttachment; }
namespace Spine { class RegionAttachment; }
namespace Spine { class Sequence; }
namespace Spine { class Skin; }
namespace System { class String; }

#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_GET_EMPTYREGION_OFFSET UNITYSDK_OFFSET(0x1ACBE300)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1ACBE590)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1ACBE6E0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1ACBE4E0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1ACBE5F0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1ACBE650)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1ACBE420)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBE730)

namespace Spine::Unity
{
	inline static constexpr unsigned int RegionlessAttachmentLoader_TypeDefinitionIndex = 41383;

	class RegionlessAttachmentLoader : public ::System::Object
	{
	public:
		static ::Spine::AtlasRegion** StaticGet_emptyRegion()
		{
			return (::Spine::AtlasRegion**)Il2CppClass::FromTypeDefinitionIndex(RegionlessAttachmentLoader_TypeDefinitionIndex)->GetStaticField(0x62100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER__CTOR_OFFSET))(this);
		}

		static ::Spine::AtlasRegion* get_EmptyRegion()
		{
			return ((::Spine::AtlasRegion*(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_GET_EMPTYREGION_OFFSET))();
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* a1, ::System::String* a2, ::System::String* a3, ::Spine::Sequence* a4)
		{
			return ((::Spine::RegionAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* a1, ::System::String* a2, ::System::String* a3, ::Spine::Sequence* a4)
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::PathAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::PointAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::ClippingAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(this, a1, a2);
		}
	};
}
