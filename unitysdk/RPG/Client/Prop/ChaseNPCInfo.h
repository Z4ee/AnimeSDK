#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChaseNPCInfo_TypeDefinitionIndex = 74267;

	struct alignas(8) ChaseNPCInfo
	{
		::System::UInt32 npcID; // 0x10
		::System::String* uniqueName; // 0x18
	};
}
