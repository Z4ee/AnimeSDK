#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContractType_TypeDefinitionIndex = 9383;

	enum class JsonContractType : ::System::Int32
	{
		None = 0,
		Object = 1,
		Array = 2,
		Primitive = 3,
		String = 4,
		Dictionary = 5,
		Dynamic = 6,
		Serializable = 7,
		Linq = 8,
	};
}
