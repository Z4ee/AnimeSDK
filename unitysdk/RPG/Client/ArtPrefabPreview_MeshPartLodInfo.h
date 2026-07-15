#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int ArtPrefabPreview_MeshPartLodInfo_TypeDefinitionIndex = 65313;

	struct alignas(8) ArtPrefabPreview_MeshPartLodInfo
	{
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
	};
}
