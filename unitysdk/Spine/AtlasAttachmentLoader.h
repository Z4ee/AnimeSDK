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

#define SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET UNITYSDK_OFFSET(0x16050950)
#define SPINE_ATLASATTACHMENTLOADER_LOADSEQUENCE_OFFSET UNITYSDK_OFFSET(0x16050320)
#define SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16050DD0)
#define SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16050FF0)
#define SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16050C10)
#define SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16050E70)
#define SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16050F10)
#define SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x160509D0)
#define SPINE_ATLASATTACHMENTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x160502D0)

namespace Spine
{
	inline static constexpr unsigned int AtlasAttachmentLoader_TypeDefinitionIndex = 38352;

	class AtlasAttachmentLoader : public ::System::Object
	{
	public:
		::Il2CppArray<::Spine::Atlas*>* atlasArray; // 0x10

		::System::Void _ctor(::Il2CppArray<::Spine::Atlas*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void LoadSequence(::System::String* a1, ::System::String* a2, ::Spine::Sequence* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_LOADSEQUENCE_OFFSET))(this, a1, a2, a3);
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* a1, ::System::String* a2, ::System::String* a3, ::Spine::Sequence* a4)
		{
			return ((::Spine::RegionAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* a1, ::System::String* a2, ::System::String* a3, ::Spine::Sequence* a4)
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::PathAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::PointAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* a1, ::System::String* a2)
		{
			return ((::Spine::ClippingAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(this, a1, a2);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* a1)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET))(this, a1);
		}
	};
}
