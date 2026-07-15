#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils_ConvertResult_TypeDefinitionIndex = 9322;

	enum class ConvertUtils_ConvertResult : ::System::Int32
	{
		Success = 0,
		CannotConvertNull = 1,
		NotInstantiableType = 2,
		NoValidConversion = 3,
	};
}
