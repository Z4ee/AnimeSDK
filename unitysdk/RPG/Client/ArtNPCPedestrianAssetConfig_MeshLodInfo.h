#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_MeshLodInfo_TypeDefinitionIndex = 66156;

	struct alignas(8) ArtNPCPedestrianAssetConfig_MeshLodInfo
	{
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
	};
}
