#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PerRendererInfo_TypeDefinitionIndex = 36035;

	struct alignas(8) PerRendererInfo
	{
		::UnityEngine::Renderer* render; // 0x10
		::System::Int32 subMeshCount; // 0x18
		::System::UInt32 renderingLayerMasks; // 0x1C
		::System::Int32 passIDs; // 0x20
	};
}
