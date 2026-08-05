#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BD4393E06674E076_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x7D3100)

inline static constexpr unsigned int Struct_2_BD4393E06674E076_TypeDefinitionIndex = 53343;

struct alignas(8) Struct_2_BD4393E06674E076
{
	::MoleMole::HollowChessboard::RenderDataHandle Field_2_0; // 0x10

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BD4393E06674E076_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
