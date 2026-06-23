#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimAutoTargeting_TypeDefinitionIndex = 80330;

	struct alignas(8) CharacterAimAutoTargeting
	{
		::System::Boolean enabled; // 0x10
		::System::Single range; // 0x14
		::System::Single duration; // 0x18
		::System::String* speedCurve; // 0x20
	};
}
