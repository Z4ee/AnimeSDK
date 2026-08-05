#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MBVersion_PipelineType_TypeDefinitionIndex = 94545;

	enum class MBVersion_PipelineType : ::System::Int32
	{
		Unsupported = 0,
		Default = 1,
		URP = 2,
		HDRP = 3,
	};
}
