#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine { class RenderTexture; }

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderTarget_TypeDefinitionIndex = 27681;

	struct alignas(8) RenderTarget
	{
		::UnityEngine::RenderTexture* renderTexture; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier; // 0x18
		::System::Int32 identifier; // 0x40
	};
}
