#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayerGenerateData_TypeDefinitionIndex = 63808;

	struct alignas(8) StreamingLayerGenerateData
	{
		::NapStreaming::StreamingLayer streamingLayer; // 0x10
		::System::Boolean cookBRG; // 0x14
		::System::String* generateTitle; // 0x18
		::System::Single loadDistance; // 0x20
		::System::Single hlodLoadDistance; // 0x24
		::System::Single unloadDistance; // 0x28
		::System::Single gridSize; // 0x2C
		::System::Single skipMaxSize; // 0x30
		::System::Int32 splitGridMinCount; // 0x34
		::System::Boolean generateHlod; // 0x38
		::System::Boolean generatePCGHlod; // 0x39
		::System::Int32 mergeHlodMinCount; // 0x3C
		::System::Boolean defaultLoad; // 0x40
		::Il2CppArray<::System::Single>* lodDistances; // 0x48
		::System::Boolean lodDisableCulled; // 0x50
	};
}
