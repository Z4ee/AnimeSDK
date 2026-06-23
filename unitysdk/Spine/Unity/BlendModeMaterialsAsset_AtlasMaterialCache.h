#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_CLONEATLASREGIONWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AD112A0)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD11300)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_GETATLASPAGEWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AD11430)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD11210)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterialsAsset_AtlasMaterialCache_TypeDefinitionIndex = 39514;

	class BlendModeMaterialsAsset_AtlasMaterialCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::Spine::AtlasPage*, ::UnityEngine::Material*>, ::Spine::AtlasPage*>* cache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE__CTOR_OFFSET))(this);
		}

		::Spine::AtlasRegion* CloneAtlasRegionWithMaterial(::Spine::AtlasRegion* originalRegion, ::UnityEngine::Material* materialTemplate)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::Spine::AtlasRegion*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_CLONEATLASREGIONWITHMATERIAL_OFFSET))(this, originalRegion, materialTemplate);
		}

		::Spine::AtlasPage* GetAtlasPageWithMaterial(::Spine::AtlasPage* originalPage, ::UnityEngine::Material* materialTemplate)
		{
			return ((::Spine::AtlasPage*(*)(::PVOID, ::Spine::AtlasPage*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_GETATLASPAGEWITHMATERIAL_OFFSET))(this, originalPage, materialTemplate);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_DISPOSE_OFFSET))(this);
		}
	};
}
