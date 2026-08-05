#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Atlas; }
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

#define SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET UNITYSDK_OFFSET(0x1FB56D50)
#define SPINE_ATLASATTACHMENTLOADER_LOADSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1FB569C0)
#define SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB570C0)
#define SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB57280)
#define SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB56F00)
#define SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB57150)
#define SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB571E0)
#define SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB56DD0)
#define SPINE_ATLASATTACHMENTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB56950)

namespace Spine
{
	inline static constexpr unsigned int AtlasAttachmentLoader_TypeDefinitionIndex = 33489;

	class AtlasAttachmentLoader : public ::System::Object
	{
	public:
		::Il2CppArray<::Spine::Atlas*>* atlasArray; // 0x10

		::System::Void _ctor(::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER__CTOR_OFFSET))(this, atlasArray);
		}

		::System::Void LoadSequence(::System::String* name, ::System::String* basePath, ::Spine::Sequence* sequence)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_LOADSEQUENCE_OFFSET))(this, name, basePath, sequence);
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* skin, ::System::String* name, ::System::String* path, ::Spine::Sequence* sequence)
		{
			return ((::Spine::RegionAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(this, skin, name, path, sequence);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* skin, ::System::String* name, ::System::String* path, ::Spine::Sequence* sequence)
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(this, skin, name, path, sequence);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::PathAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::PointAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* skin, ::System::String* name)
		{
			return ((::Spine::ClippingAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(this, skin, name);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* name)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET))(this, name);
		}
	};
}
