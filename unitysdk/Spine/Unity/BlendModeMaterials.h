#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BlendMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasRegion; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class BlendModeMaterials_ReplacementMaterial; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALS_APPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0x1ACAD910)
#define SPINE_UNITY_BLENDMODEMATERIALS_BLENDMODEFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACAD520)
#define SPINE_UNITY_BLENDMODEMATERIALS_CLONEATLASREGIONWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACAE190)
#define SPINE_UNITY_BLENDMODEMATERIALS_GET_REQUIRESBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1ACAD500)
#define SPINE_UNITY_BLENDMODEMATERIALS_SET_REQUIRESBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1ACAD510)
#define SPINE_UNITY_BLENDMODEMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACAE370)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials_TypeDefinitionIndex = 41380;

	class BlendModeMaterials : public ::System::Object
	{
	public:
		::System::Boolean requiresBlendModeMaterials; // 0x10
		::System::Boolean applyAdditiveMaterial; // 0x11
		::System::Collections::Generic::List_1<::Spine::Unity::BlendModeMaterials_ReplacementMaterial*>* additiveMaterials; // 0x18
		::System::Collections::Generic::List_1<::Spine::Unity::BlendModeMaterials_ReplacementMaterial*>* multiplyMaterials; // 0x20
		::System::Collections::Generic::List_1<::Spine::Unity::BlendModeMaterials_ReplacementMaterial*>* screenMaterials; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_RequiresBlendModeMaterials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_GET_REQUIRESBLENDMODEMATERIALS_OFFSET))(this);
		}

		::System::Void set_RequiresBlendModeMaterials(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_SET_REQUIRESBLENDMODEMATERIALS_OFFSET))(this, a1);
		}

		::Spine::BlendMode BlendModeForMaterial(::UnityEngine::Material* a1)
		{
			return ((::Spine::BlendMode(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_BLENDMODEFORMATERIAL_OFFSET))(this, a1);
		}

		::System::Void ApplyMaterials(::Spine::SkeletonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_APPLYMATERIALS_OFFSET))(this, a1);
		}

		::Spine::AtlasRegion* CloneAtlasRegionWithMaterial(::Spine::AtlasRegion* a1, ::System::Collections::Generic::List_1<::Spine::Unity::BlendModeMaterials_ReplacementMaterial*>* a2)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::Spine::AtlasRegion*, ::System::Collections::Generic::List_1<::Spine::Unity::BlendModeMaterials_ReplacementMaterial*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CLONEATLASREGIONWITHMATERIAL_OFFSET))(this, a1, a2);
		}
	};
}
