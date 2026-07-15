#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int PedestrianMemberExternalConfig_BatchAnimation_SpecialAnim_TypeDefinitionIndex = 66173;

	struct alignas(8) PedestrianMemberExternalConfig_BatchAnimation_SpecialAnim
	{
		::System::String* Name; // 0x10
		::System::Int32 AnimIndex; // 0x18
	};
}
