#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int SWRTAsset_RTMaterial_TypeDefinitionIndex = 35937;

struct alignas(4) SWRTAsset_RTMaterial
{
	::System::Int32 AlbedoSlice; // 0x10
	::System::Int32 NormalSlice; // 0x14
	::UnityEngine::Vector3 AlbedoColor; // 0x18
	::System::Single NormalScale; // 0x24
	::System::Single Metallic; // 0x28
	::System::Single Smoothness; // 0x2C
};
