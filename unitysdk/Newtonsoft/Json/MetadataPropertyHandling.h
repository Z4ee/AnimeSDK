#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int MetadataPropertyHandling_TypeDefinitionIndex = 7019;

	enum class MetadataPropertyHandling : ::System::Int32
	{
		Default = 0,
		ReadAhead = 1,
		Ignore = 2,
	};
}
