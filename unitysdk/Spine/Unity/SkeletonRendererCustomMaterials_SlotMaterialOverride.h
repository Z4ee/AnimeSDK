#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SLOTMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B9E600)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererCustomMaterials_SlotMaterialOverride_TypeDefinitionIndex = 43862;

	struct alignas(8) SkeletonRendererCustomMaterials_SlotMaterialOverride
	{
		::System::Boolean overrideDisabled; // 0x10
		::System::String* slotName; // 0x18
		::UnityEngine::Material* material; // 0x20

		::System::Boolean Equals(::Spine::Unity::SkeletonRendererCustomMaterials_SlotMaterialOverride a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::SkeletonRendererCustomMaterials_SlotMaterialOverride))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SLOTMATERIALOVERRIDE_EQUALS_OFFSET))(this, a1);
		}
	};
}
