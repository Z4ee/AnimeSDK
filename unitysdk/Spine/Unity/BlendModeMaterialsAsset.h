#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonDataModifierAsset.h"

namespace Spine { class SkeletonData; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0x1C15E750)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLY_OFFSET UNITYSDK_OFFSET(0x1C15E720)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15F610)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterialsAsset_TypeDefinitionIndex = 40178;

	class BlendModeMaterialsAsset : public ::Spine::Unity::SkeletonDataModifierAsset
	{
	public:
		::UnityEngine::Material* multiplyMaterialTemplate; // 0x18
		::UnityEngine::Material* screenMaterialTemplate; // 0x20
		::UnityEngine::Material* additiveMaterialTemplate; // 0x28
		::System::Boolean applyAdditiveMaterial; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLY_OFFSET))(this, skeletonData);
		}

		static ::System::Void ApplyMaterials(::Spine::SkeletonData* skeletonData, ::UnityEngine::Material* multiplyTemplate, ::UnityEngine::Material* screenTemplate, ::UnityEngine::Material* additiveTemplate, ::System::Boolean includeAdditiveSlots)
		{
			return ((::System::Void(*)(::Spine::SkeletonData*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLYMATERIALS_OFFSET))(skeletonData, multiplyTemplate, screenTemplate, additiveTemplate, includeAdditiveSlots);
		}
	};
}
