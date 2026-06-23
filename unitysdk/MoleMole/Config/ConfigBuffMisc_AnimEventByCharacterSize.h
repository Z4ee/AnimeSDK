#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_AnimEventByCharacterSize_TypeDefinitionIndex = 69440;

	struct alignas(8) ConfigBuffMisc_AnimEventByCharacterSize
	{
		::System::String* SmallAnimEventID; // 0x10
		::System::String* MiddleAnimEventID; // 0x18
		::System::String* LargeAnimEventID; // 0x20
	};
}
