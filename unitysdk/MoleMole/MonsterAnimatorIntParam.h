#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonsterAnimatorIntParam_TypeDefinitionIndex = 74190;

	struct alignas(8) MonsterAnimatorIntParam
	{
		::System::String* Key; // 0x10
		::System::Int32 Value; // 0x18
	};
}
