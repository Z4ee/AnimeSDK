#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRendererCustomMaterials_AtlasMaterialOverride.h"
#include "unitysdk/Spine/Unity/SkeletonRendererCustomMaterials_SlotMaterialOverride.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x168C95B0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x168C93D0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x168C9150)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x168C8CE0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x168C8F90)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x168C8AD0)
#define SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x168C9680)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererCustomMaterials_TypeDefinitionIndex = 42250;

	class SkeletonRendererCustomMaterials : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonRendererCustomMaterials_SlotMaterialOverride>* customSlotMaterials; // 0x20
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonRendererCustomMaterials_AtlasMaterialOverride>* customMaterialOverrides; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Void SetCustomSlotMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMSLOTMATERIALS_OFFSET))(this);
		}

		::System::Void RemoveCustomSlotMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMSLOTMATERIALS_OFFSET))(this);
		}

		::System::Void SetCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void RemoveCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERCUSTOMMATERIALS_ONDISABLE_OFFSET))(this);
		}
	};
}
