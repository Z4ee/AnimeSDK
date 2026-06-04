#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasPage; }
namespace Spine::Unity { class SpineAtlasAsset; }
namespace System { class String; }

#define SPINE_UNITY_MATERIALSTEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1ACB4EB0)
#define SPINE_UNITY_MATERIALSTEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1ACB5230)
#define SPINE_UNITY_MATERIALSTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB4EA0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MaterialsTextureLoader_TypeDefinitionIndex = 41392;

	class MaterialsTextureLoader : public ::System::Object
	{
	public:
		::Spine::Unity::SpineAtlasAsset* atlasAsset; // 0x10

		::System::Void _ctor(::Spine::Unity::SpineAtlasAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SpineAtlasAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Load(::Spine::AtlasPage* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AtlasPage*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Unload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_UNLOAD_OFFSET))(this, a1);
		}
	};
}
