#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGateRelateInfo_TypeDefinitionIndex = 72394;

	struct alignas(8) TeleportGateRelateInfo
	{
		::System::Int32 GateIndex; // 0x10
		::Il2CppArray<::System::Int32>* RelateGateIndex; // 0x18
	};
}
