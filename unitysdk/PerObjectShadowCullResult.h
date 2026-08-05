#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PerObjectShadowCullResult_TypeDefinitionIndex = 27471;

enum class PerObjectShadowCullResult : ::System::UInt32
{
	EntityIsNotActive = 0x7,
	ReachDisableShadowDistance = 0x5,
	OutOfAtlas = 0xC,
	OutOfFrustum = 0xA,
	RenderersInvisible = 0x9,
	EntityOutOfMaxDistance = 0x4,
	Success = 0x1,
	OutOfMaxCount = 0xB,
	Uninitialized = 0x0,
	EntityInvalid = 0x2,
	EntityIsSimpleModel = 0x3,
	EntityPerObjectShadowOff = 0x6,
	EntityCBufferIsNull = 0x8,
};
