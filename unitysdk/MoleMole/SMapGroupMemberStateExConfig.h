#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_59937F72FEA575BF_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SMapGroupMemberStateExConfig_TypeDefinitionIndex = 61120;

	struct alignas(8) SMapGroupMemberStateExConfig
	{
		::System::Int32 GroupId; // 0x10
		::System::Int32 MemberId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 StateValue; // 0x20
		::Enum_3_59937F72FEA575BF_2 Operator; // 0x24
	};
}
