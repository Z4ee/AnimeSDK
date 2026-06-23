#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasPage; }
namespace Spine::Unity { class SpineAtlasAsset; }
namespace System { class String; }

#define SPINE_UNITY_MATERIALSTEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1AD18F10)
#define SPINE_UNITY_MATERIALSTEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1AD196A0)
#define SPINE_UNITY_MATERIALSTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD18F00)

namespace Spine::Unity
{
	inline static constexpr unsigned int MaterialsTextureLoader_TypeDefinitionIndex = 39435;

	class MaterialsTextureLoader : public ::System::Object
	{
	public:
		::Spine::Unity::SpineAtlasAsset* atlasAsset; // 0x10

		::System::Void _ctor(::Spine::Unity::SpineAtlasAsset* atlasAsset)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SpineAtlasAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER__CTOR_OFFSET))(this, atlasAsset);
		}

		::System::Void Load(::Spine::AtlasPage* page, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AtlasPage*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_LOAD_OFFSET))(this, page, path);
		}

		::System::Void Unload(::System::Object* texture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_UNLOAD_OFFSET))(this, texture);
		}
	};
}
