#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DecalIRIMatrixListAsset_PerInstancePreview_TypeDefinitionIndex = 70847;

	struct alignas(4) DecalIRIMatrixListAsset_PerInstancePreview
	{
		::UnityEngine::Matrix4x4 WorldMatrix; // 0x10
		::System::Single AMAtlasID; // 0x50
		::System::Single NMSAtlasID; // 0x54
		::UnityEngine::Vector4 TilingOffset; // 0x58
		::System::Single AlphaTestThreshold; // 0x68
		::System::Single NormalScale; // 0x6C
	};
}
