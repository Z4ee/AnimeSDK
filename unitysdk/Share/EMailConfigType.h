#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailConfigType_TypeDefinitionIndex = 14339;

	enum class EMailConfigType : ::System::Int16
	{
		Common = 0,
		UserDefine = 2,
		Operation = 1,
	};
}
