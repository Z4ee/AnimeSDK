#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Rendering/BlendOp.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"

#define SERIALIZEDRENDERTARGETBLENDSTATE_METHOD_2_51B4561CCE5A1A4D_OFFSET UNITYSDK_OFFSET(0x8B680)
#define SERIALIZEDRENDERTARGETBLENDSTATE_METHOD_2_B08EF8FE94449D01_OFFSET UNITYSDK_OFFSET(0x8B740)

inline static constexpr unsigned int SerializedRenderTargetBlendState_TypeDefinitionIndex = 38278;

struct alignas(4) SerializedRenderTargetBlendState
{
	::UnityEngine::Rendering::ColorWriteMask writeMask; // 0x10
	::UnityEngine::Rendering::BlendMode sourceColorBlendMode; // 0x14
	::UnityEngine::Rendering::BlendMode destinationColorBlendMode; // 0x18
	::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode; // 0x1C
	::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode; // 0x20
	::UnityEngine::Rendering::BlendOp colorBlendOperation; // 0x24
	::UnityEngine::Rendering::BlendOp alphaBlendOperation; // 0x28

	/*
	::System::Void Method_2_51B4561CCE5A1A4D(::UnityEngine::Rendering::RenderTargetBlendState a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + SERIALIZEDRENDERTARGETBLENDSTATE_METHOD_2_51B4561CCE5A1A4D_OFFSET))(this, a1);
	}
	*/

	/*
	::UnityEngine::Rendering::RenderTargetBlendState Method_2_B08EF8FE94449D01()
	{
		return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDRENDERTARGETBLENDSTATE_METHOD_2_B08EF8FE94449D01_OFFSET))(this);
	}
	*/
};
