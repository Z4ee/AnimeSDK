#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteMatchCalculator_FluteSimpleData_TypeDefinitionIndex = 73267;

	struct alignas(8) FiveDimFluteMatchCalculator_FluteSimpleData
	{
		::System::UInt32 ID; // 0x10
		::System::String* Code; // 0x18
	};
}
