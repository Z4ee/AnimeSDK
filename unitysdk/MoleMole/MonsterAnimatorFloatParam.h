#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonsterAnimatorFloatParam_TypeDefinitionIndex = 46520;

	struct alignas(8) MonsterAnimatorFloatParam
	{
		::System::String* Key; // 0x10
		::System::Single Value; // 0x18
	};
}
