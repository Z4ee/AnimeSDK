#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class AtlasRegion; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CDEC0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x31380)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_IntAndAtlasRegionKey_TypeDefinitionIndex = 40668;

	struct alignas(8) AtlasUtilities_IntAndAtlasRegionKey
	{
		::System::Int32 i; // 0x10
		::Spine::AtlasRegion* region; // 0x18

		::System::Void _ctor(::System::Int32 i, ::Spine::AtlasRegion* region)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY__CTOR_OFFSET))(this, i, region);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
