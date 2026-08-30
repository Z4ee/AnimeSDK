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

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1E637170)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1E637140)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1E637190)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_1_OFFSET UNITYSDK_OFFSET(0x1E637120)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1E637100)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_1_OFFSET UNITYSDK_OFFSET(0x1E637060)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET UNITYSDK_OFFSET(0x1E636F00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x1E636BB0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_2_OFFSET UNITYSDK_OFFSET(0x1E636D30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E636B60)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentRegionExtensions_TypeDefinitionIndex = 43923;

	class AttachmentRegionExtensions : public ::System::Object
	{
	public:
		static ::Spine::RegionAttachment* ToRegionAttachment(::UnityEngine::Sprite* a1, ::UnityEngine::Material* a2, ::System::Single a3)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET))(a1, a2, a3);
		}

		static ::Spine::RegionAttachment* ToRegionAttachment_1(::UnityEngine::Sprite* a1, ::Spine::AtlasPage* a2, ::System::Single a3)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_1_OFFSET))(a1, a2, a3);
		}

		static ::Spine::RegionAttachment* ToRegionAttachmentPMAClone(::UnityEngine::Sprite* a1, ::UnityEngine::Shader* a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::UnityEngine::Material* a5, ::System::Single a6)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Spine::RegionAttachment* ToRegionAttachmentPMAClone_1(::UnityEngine::Sprite* a1, ::UnityEngine::Material* a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTPMACLONE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Spine::RegionAttachment* ToRegionAttachment_2(::Spine::AtlasRegion* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::Spine::RegionAttachment*(*)(::Spine::AtlasRegion*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetScale(::Spine::RegionAttachment* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET))(a1, a2);
		}

		static ::System::Void SetScale_1(::Spine::RegionAttachment* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetPositionOffset(::Spine::RegionAttachment* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET))(a1, a2);
		}

		static ::System::Void SetPositionOffset_1(::Spine::RegionAttachment* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetRotation(::Spine::RegionAttachment* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET))(a1, a2);
		}
	};
}
