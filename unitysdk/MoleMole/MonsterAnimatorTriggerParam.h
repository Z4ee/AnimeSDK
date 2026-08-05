#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonsterAnimatorTriggerParam_TypeDefinitionIndex = 49437;

	struct alignas(8) MonsterAnimatorTriggerParam
	{
		::System::String* Key; // 0x10
	};
}
