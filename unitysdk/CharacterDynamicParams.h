#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

inline static constexpr unsigned int CharacterDynamicParams_TypeDefinitionIndex = 27041;

struct alignas(4) CharacterDynamicParams
{
	::UnityEngine::Vector4 MiddlePointPosition; // 0x10
	::UnityEngine::Vector4 CharacterMainLightData; // 0x20
	::UnityEngine::Vector4 CharacterMainLightData1; // 0x30
	::UnityEngine::Vector4 AmbientGradientShape; // 0x40
	::UnityEngine::Vector4 VertexLightIndices; // 0x50
	::UnityEngine::Vector4 PixelLightIndices; // 0x60
	::UnityEngine::Vector4 IndirectDiffuse; // 0x70
	::UnityEngine::Vector4 IndirectDiffuseSkin; // 0x80
	::UnityEngine::Vector4 EntityInfo; // 0x90
};
