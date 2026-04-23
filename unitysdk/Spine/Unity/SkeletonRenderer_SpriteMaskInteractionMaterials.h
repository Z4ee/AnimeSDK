#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define SPINE_UNITY_SKELETONRENDERER_SPRITEMASKINTERACTIONMATERIALS_GET_ANYMATERIALCREATED_OFFSET UNITYSDK_OFFSET(0x19E5D2F0)
#define SPINE_UNITY_SKELETONRENDERER_SPRITEMASKINTERACTIONMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5D340)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_SpriteMaskInteractionMaterials_TypeDefinitionIndex = 40601;

	class SkeletonRenderer_SpriteMaskInteractionMaterials : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* materialsMaskDisabled; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materialsInsideMask; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* materialsOutsideMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SPRITEMASKINTERACTIONMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AnyMaterialCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SPRITEMASKINTERACTIONMATERIALS_GET_ANYMATERIALCREATED_OFFSET))(this);
		}
	};
}
