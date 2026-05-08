#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PerObjectShadowCullResult_TypeDefinitionIndex = 29616;

enum class PerObjectShadowCullResult : ::System::UInt32
{
	Uninitialized = 0x0,
	Success = 0x1,
	EntityInvalid = 0x2,
	EntityIsSimpleModel = 0x3,
	EntityOutOfMaxDistance = 0x4,
	ReachDisableShadowDistance = 0x5,
	EntityPerObjectShadowOff = 0x6,
	EntityIsNotActive = 0x7,
	EntityCBufferIsNull = 0x8,
	RenderersInvisible = 0x9,
	OutOfFrustum = 0xA,
	OutOfMaxCount = 0xB,
	OutOfAtlas = 0xC,
};
