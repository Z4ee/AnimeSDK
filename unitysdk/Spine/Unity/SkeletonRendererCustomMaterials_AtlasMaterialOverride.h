#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ATLASMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B0250)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererCustomMaterials_AtlasMaterialOverride_TypeDefinitionIndex = 39480;

	struct alignas(8) SkeletonRendererCustomMaterials_AtlasMaterialOverride
	{
		::System::Boolean overrideDisabled; // 0x10
		::UnityEngine::Material* originalMaterial; // 0x18
		::UnityEngine::Material* replacementMaterial; // 0x20

		::System::Boolean Equals(::Spine::Unity::SkeletonRendererCustomMaterials_AtlasMaterialOverride other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::SkeletonRendererCustomMaterials_AtlasMaterialOverride))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ATLASMATERIALOVERRIDE_EQUALS_OFFSET))(this, other);
		}
	};
}
