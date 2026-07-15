#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PluginStorage_DataType_TypeDefinitionIndex = 38285;

	enum class HEU_PluginStorage_DataType : ::System::Int32
	{
		BOOL = 0,
		INT = 1,
		LONG = 2,
		FLOAT = 3,
		STRING = 4,
	};
}
