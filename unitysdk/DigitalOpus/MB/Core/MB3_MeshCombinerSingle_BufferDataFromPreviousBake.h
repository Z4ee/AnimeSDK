#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_BufferDataFromPreviousBake_TypeDefinitionIndex = 94566;

	struct alignas(4) MB3_MeshCombinerSingle_BufferDataFromPreviousBake
	{
		::System::Int32 numVertsBaked; // 0x10
		::UnityEngine::Vector3 meshVerticesShift; // 0x14
		::System::Boolean meshVerticiesWereShifted; // 0x20
	};
}
