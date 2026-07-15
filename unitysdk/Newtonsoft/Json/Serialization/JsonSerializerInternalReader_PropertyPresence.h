#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader_PropertyPresence_TypeDefinitionIndex = 9399;

	enum class JsonSerializerInternalReader_PropertyPresence : ::System::Int32
	{
		None = 0,
		Null = 1,
		Value = 2,
	};
}
