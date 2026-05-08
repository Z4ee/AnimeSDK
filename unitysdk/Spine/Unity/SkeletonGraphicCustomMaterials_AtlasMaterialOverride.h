#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ATLASMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x811D30)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicCustomMaterials_AtlasMaterialOverride_TypeDefinitionIndex = 37848;

	struct alignas(8) SkeletonGraphicCustomMaterials_AtlasMaterialOverride
	{
		::System::Boolean overrideEnabled; // 0x10
		::UnityEngine::Texture* originalTexture; // 0x18
		::UnityEngine::Material* replacementMaterial; // 0x20

		::System::Boolean Equals(::Spine::Unity::SkeletonGraphicCustomMaterials_AtlasMaterialOverride other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::SkeletonGraphicCustomMaterials_AtlasMaterialOverride))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ATLASMATERIALOVERRIDE_EQUALS_OFFSET))(this, other);
		}
	};
}
