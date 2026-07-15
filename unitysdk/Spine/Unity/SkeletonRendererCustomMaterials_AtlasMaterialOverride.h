#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ATLASMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3938F20)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererCustomMaterials_AtlasMaterialOverride_TypeDefinitionIndex = 42252;

	struct alignas(8) SkeletonRendererCustomMaterials_AtlasMaterialOverride
	{
		::System::Boolean overrideDisabled; // 0x10
		::UnityEngine::Material* originalMaterial; // 0x18
		::UnityEngine::Material* replacementMaterial; // 0x20

		::System::Boolean Equals(::Spine::Unity::SkeletonRendererCustomMaterials_AtlasMaterialOverride a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::SkeletonRendererCustomMaterials_AtlasMaterialOverride))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ATLASMATERIALOVERRIDE_EQUALS_OFFSET))(this, a1);
		}
	};
}
