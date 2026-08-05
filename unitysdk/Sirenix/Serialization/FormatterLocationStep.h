#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterLocationStep_TypeDefinitionIndex = 7510;

	enum class FormatterLocationStep : ::System::Int32
	{
		BeforeRegisteredFormatters = 0,
		AfterRegisteredFormatters = 1,
	};
}
