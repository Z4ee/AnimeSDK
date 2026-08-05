#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InfoMessageType_TypeDefinitionIndex = 7396;

	enum class InfoMessageType : ::System::Int32
	{
		None = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
	};
}
