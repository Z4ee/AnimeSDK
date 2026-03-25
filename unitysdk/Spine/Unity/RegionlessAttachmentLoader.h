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

#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_GET_EMPTYREGION_OFFSET UNITYSDK_OFFSET(0x1840A2C0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1840A550)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1840A6A0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1840A4A0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1840A5B0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1840A610)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1840A3E0)
#define SPINE_UNITY_REGIONLESSATTACHMENTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1840A6F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int RegionlessAttachmentLoader_TypeDefinitionIndex = 34737;

	class RegionlessAttachmentLoader : public ::System::Object
	{
	public:
		static ::Spine::AtlasRegion** StaticGet_emptyRegion()
		{
			return (::Spine::AtlasRegion**)Il2CppClass::FromTypeDefinitionIndex(RegionlessAttachmentLoader_TypeDefinitionIndex)->GetStaticField(0x345B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER__CTOR_OFFSET))(this);
		}

		static ::Spine::AtlasRegion* get_EmptyRegion()
		{
			return ((::Spine::AtlasRegion*(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_GET_EMPTYREGION_OFFSET))();
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* skin, ::System::String* name, ::System::String* path, ::Spine::Sequence* sequence)
		{
			return ((::Spine::RegionAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(this, skin, name, path, sequence);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* skin, ::System::String* name, ::System::String* path, ::Spine::Sequence* sequence)
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(this, skin, name, path, sequence);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::PathAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::PointAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::ClippingAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_REGIONLESSATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(this, skin, name);
		}
	};
}
