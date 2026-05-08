#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NapLodController_LoadingState.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int NapLodMeshLoadingState_TypeDefinitionIndex = 67781;

struct alignas(8) NapLodMeshLoadingState
{
	::NapLodController_LoadingState State; // 0x10
	::Foundation::AssetRequestHandle RequestHandle; // 0x18
};
