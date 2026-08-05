#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonsterAnimatorBoolParam_TypeDefinitionIndex = 80842;

	struct alignas(8) MonsterAnimatorBoolParam
	{
		::System::String* Key; // 0x10
		::System::Boolean Value; // 0x18
	};
}
