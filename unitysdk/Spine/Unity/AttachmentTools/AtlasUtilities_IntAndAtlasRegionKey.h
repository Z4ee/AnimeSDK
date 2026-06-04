#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class AtlasRegion; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3867970)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2FAF0)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_IntAndAtlasRegionKey_TypeDefinitionIndex = 41495;

	struct alignas(8) AtlasUtilities_IntAndAtlasRegionKey
	{
		::System::Int32 i; // 0x10
		::Spine::AtlasRegion* region; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::Spine::AtlasRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INTANDATLASREGIONKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
