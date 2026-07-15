#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPoint_FixPointParsePartData_TypeDefinitionIndex = 9603;

	struct alignas(8) FixPoint_FixPointParsePartData
	{
		::RPG::GameCore::FixPoint Value; // 0x10
		::System::Int64 RawValue; // 0x10
		::System::Int32 I0; // 0x10
		::System::Int32 I1; // 0x14
	};
}
