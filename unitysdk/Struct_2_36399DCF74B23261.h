#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class DynamicFloat; }

#define STRUCT_2_36399DCF74B23261_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7C7B0)

inline static constexpr unsigned int Struct_2_36399DCF74B23261_TypeDefinitionIndex = 57908;

struct alignas(8) Struct_2_36399DCF74B23261
{
	::RPG::GameCore::DynamicFloat* MMFJHJFCBMP; // 0x10
	::RPG::GameCore::DynamicFloat* KCNJNNDHEGN; // 0x18
	::RPG::GameCore::DynamicFloat* DDAMKPFFEPB; // 0x20

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_36399DCF74B23261_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
