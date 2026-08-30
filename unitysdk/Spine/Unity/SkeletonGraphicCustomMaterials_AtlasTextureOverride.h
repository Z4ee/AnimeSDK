#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Texture; }

#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ATLASTEXTUREOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B9DD90)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicCustomMaterials_AtlasTextureOverride_TypeDefinitionIndex = 43860;

	struct alignas(8) SkeletonGraphicCustomMaterials_AtlasTextureOverride
	{
		::System::Boolean overrideEnabled; // 0x10
		::UnityEngine::Texture* originalTexture; // 0x18
		::UnityEngine::Texture* replacementTexture; // 0x20

		::System::Boolean Equals(::Spine::Unity::SkeletonGraphicCustomMaterials_AtlasTextureOverride a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::SkeletonGraphicCustomMaterials_AtlasTextureOverride))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ATLASTEXTUREOVERRIDE_EQUALS_OFFSET))(this, a1);
		}
	};
}
