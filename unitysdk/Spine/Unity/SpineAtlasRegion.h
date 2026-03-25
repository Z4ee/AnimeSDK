#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define SPINE_UNITY_SPINEATLASREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E300)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAtlasRegion_TypeDefinitionIndex = 34837;

	class SpineAtlasRegion : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* atlasAssetField; // 0x10

		::System::Void _ctor(::System::String* atlasAssetField)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASREGION__CTOR_OFFSET))(this, atlasAssetField);
		}
	};
}
