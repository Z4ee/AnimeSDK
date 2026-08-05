#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace Spine { class RegionAttachment; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1C15D6F0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1C15D6C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1C15D710)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_1_OFFSET UNITYSDK_OFFSET(0x1C15D6A0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1C15D670)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_1_OFFSET UNITYSDK_OFFSET(0x1C15D5C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET UNITYSDK_OFFSET(0x1C15D260)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x1C15CDF0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_2_OFFSET UNITYSDK_OFFSET(0x1C15D0B0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1C15CD70)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentRegionExtensions_TypeDefinitionIndex = 40205;

	class AttachmentRegionExtensions : public ::System::Object
	{
	public:
		static ::Spine::RegionAttachment* ToRegionAttachment(::UnityEngine::Sprite* sprite, ::UnityEngine::Material* material, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET))(sprite, material, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachment_1(::UnityEngine::Sprite* sprite, ::Spine::AtlasPage* page, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_1_OFFSET))(sprite, page, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachmentPMAClone(::UnityEngine::Sprite* sprite, ::UnityEngine::Shader* shader, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET))(sprite, shader, textureFormat, mipmaps, materialPropertySource, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachmentPMAClone_1(::UnityEngine::Sprite* sprite, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_1_OFFSET))(sprite, materialPropertySource, textureFormat, mipmaps, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachment_2(::Spine::AtlasRegion* region, ::System::String* attachmentName, ::System::Single scale, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::Spine::AtlasRegion*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_2_OFFSET))(region, attachmentName, scale, rotation);
		}

		static ::System::Void SetScale(::Spine::RegionAttachment* regionAttachment, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET))(regionAttachment, scale);
		}

		static ::System::Void SetScale_1(::Spine::RegionAttachment* regionAttachment, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_1_OFFSET))(regionAttachment, x, y);
		}

		static ::System::Void SetPositionOffset(::Spine::RegionAttachment* regionAttachment, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET))(regionAttachment, offset);
		}

		static ::System::Void SetPositionOffset_1(::Spine::RegionAttachment* regionAttachment, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_1_OFFSET))(regionAttachment, x, y);
		}

		static ::System::Void SetRotation(::Spine::RegionAttachment* regionAttachment, ::System::Single rotation)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET))(regionAttachment, rotation);
		}
	};
}
