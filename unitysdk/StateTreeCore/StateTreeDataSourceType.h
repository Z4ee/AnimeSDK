#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeDataSourceType_TypeDefinitionIndex = 28414;

	enum class StateTreeDataSourceType : ::System::Byte
	{
		None = 0x0,
		GlobalInstanceData = 0x1,
		GlobalInstanceDataObject = 0x2,
		ActiveInstanceData = 0x3,
		ActiveInstanceDataObject = 0x4,
		SharedInstanceData = 0x5,
		SharedInstanceDataObject = 0x6,
		ContextData = 0x7,
		ExternalData = 0x8,
		GlobalParameterData = 0x9,
		SubtreeParameterData = 0xA,
		StateParameterData = 0xB,
	};
}
