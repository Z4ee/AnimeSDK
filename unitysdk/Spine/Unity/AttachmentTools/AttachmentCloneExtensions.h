#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace Spine { class AtlasRegion; }
namespace Spine { class Attachment; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_1_OFFSET UNITYSDK_OFFSET(0x1AD0E790)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET UNITYSDK_OFFSET(0x1AD0E410)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentCloneExtensions_TypeDefinitionIndex = 39539;

	class AttachmentCloneExtensions : public ::System::Object
	{
	public:
		static ::Spine::Attachment* GetRemappedClone(::Spine::Attachment* o, ::UnityEngine::Sprite* sprite, ::UnityEngine::Material* sourceMaterial, ::System::Boolean premultiplyAlpha, ::System::Boolean cloneMeshAsLinked, ::System::Boolean useOriginalRegionSize, ::System::Boolean pivotShiftsMeshUVCoords, ::System::Boolean useOriginalRegionScale, ::UnityEngine::TextureFormat pmaCloneTextureFormat, ::System::Boolean pmaCloneMipmaps)
		{
			return ((::Spine::Attachment*(*)(::Spine::Attachment*, ::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_OFFSET))(o, sprite, sourceMaterial, premultiplyAlpha, cloneMeshAsLinked, useOriginalRegionSize, pivotShiftsMeshUVCoords, useOriginalRegionScale, pmaCloneTextureFormat, pmaCloneMipmaps);
		}

		static ::Spine::Attachment* GetRemappedClone_1(::Spine::Attachment* o, ::Spine::AtlasRegion* atlasRegion, ::System::Boolean cloneMeshAsLinked, ::System::Boolean useOriginalRegionSize, ::System::Single scale)
		{
			return ((::Spine::Attachment*(*)(::Spine::Attachment*, ::Spine::AtlasRegion*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTCLONEEXTENSIONS_GETREMAPPEDCLONE_1_OFFSET))(o, atlasRegion, cloneMeshAsLinked, useOriginalRegionSize, scale);
		}
	};
}
