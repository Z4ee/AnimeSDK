#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNpcLodSettings_TypeDefinitionIndex = 55888;

struct alignas(4) NPCAvatarMeshAssetsSO_FNpcLodSettings
{
	::System::Boolean overrideDefaultLod; // 0x10
	::System::Single lodBias; // 0x14
};
