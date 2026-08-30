#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int AppendPrepend_1__AppendPrepend_State_TypeDefinitionIndex = 44086;

	enum class AppendPrepend_1__AppendPrepend_State : ::System::Byte
	{
		None = 0x0,
		RequirePrepend = 0x1,
		RequireAppend = 0x2,
		Completed = 0x3,
	};
}
