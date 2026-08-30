#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SerializedRenderTargetBlendState.h"
#include "unitysdk/System/ValueType.h"

#define SERIALIZEDBLENDSTATE_METHOD_2_0DD48251E464EFCB_OFFSET UNITYSDK_OFFSET(0x3B8F340)
#define SERIALIZEDBLENDSTATE_METHOD_2_2CE1B569DD3C4970_OFFSET UNITYSDK_OFFSET(0x3B8F350)

inline static constexpr unsigned int SerializedBlendState_TypeDefinitionIndex = 47875;

struct alignas(4) SerializedBlendState
{
	::SerializedRenderTargetBlendState blendState0; // 0x10
	::SerializedRenderTargetBlendState blendState1; // 0x2C
	::SerializedRenderTargetBlendState blendState2; // 0x48
	::SerializedRenderTargetBlendState blendState3; // 0x64
	::SerializedRenderTargetBlendState blendState4; // 0x80
	::SerializedRenderTargetBlendState blendState5; // 0x9C
	::SerializedRenderTargetBlendState blendState6; // 0xB8
	::SerializedRenderTargetBlendState blendState7; // 0xD4
	::System::Boolean separateMRTBlendStates; // 0xF0
	::System::Boolean alphaToMask; // 0xF1

	/*
	::System::Void Method_2_0DD48251E464EFCB(::UnityEngine::Rendering::BlendState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendState&))((::PBYTE)hIl2Cpp + SERIALIZEDBLENDSTATE_METHOD_2_0DD48251E464EFCB_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_2CE1B569DD3C4970(::UnityEngine::Rendering::BlendState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendState&))((::PBYTE)hIl2Cpp + SERIALIZEDBLENDSTATE_METHOD_2_2CE1B569DD3C4970_OFFSET))(this, a1);
	}
	*/
};
