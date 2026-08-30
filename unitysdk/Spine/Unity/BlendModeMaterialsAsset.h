#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonDataModifierAsset.h"

namespace Spine { class SkeletonData; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E638280)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLY_OFFSET UNITYSDK_OFFSET(0x1E638250)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E638D10)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterialsAsset_TypeDefinitionIndex = 43896;

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

		::System::Void Apply(::Spine::SkeletonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLY_OFFSET))(this, a1);
		}

		static ::System::Void ApplyMaterials(::Spine::SkeletonData* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::UnityEngine::Material* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::Spine::SkeletonData*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLYMATERIALS_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
