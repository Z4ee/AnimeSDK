#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SpritePackingRotation.h"

#define SPINE_UNITY_SPINESPRITEATLASASSET_SAVEDREGIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18B74D40)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSpriteAtlasAsset_SavedRegionInfo_TypeDefinitionIndex = 37809;

	class SpineSpriteAtlasAsset_SavedRegionInfo : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single width; // 0x18
		::System::Single height; // 0x1C
		::UnityEngine::SpritePackingRotation packingRotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_SAVEDREGIONINFO__CTOR_OFFSET))(this);
		}
	};
}
