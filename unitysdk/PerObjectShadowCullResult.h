#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PerObjectShadowCullResult_TypeDefinitionIndex = 26967;

enum class PerObjectShadowCullResult : ::System::UInt32
{
	EntityIsNotActive = 0x7,
	Uninitialized = 0x0,
	Success = 0x1,
	OutOfAtlas = 0xC,
	OutOfMaxCount = 0xB,
	EntityIsSimpleModel = 0x3,
	EntityPerObjectShadowOff = 0x6,
	EntityInvalid = 0x2,
	ReachDisableShadowDistance = 0x5,
	EntityCBufferIsNull = 0x8,
	OutOfFrustum = 0xA,
	EntityOutOfMaxDistance = 0x4,
	RenderersInvisible = 0x9,
};
