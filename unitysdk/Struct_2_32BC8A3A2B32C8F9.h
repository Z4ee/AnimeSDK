#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBaseController; }

#define STRUCT_2_32BC8A3A2B32C8F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7ADF30)
#define STRUCT_2_32BC8A3A2B32C8F9__CTOR_OFFSET UNITYSDK_OFFSET(0x7ADEB0)

inline static constexpr unsigned int Struct_2_32BC8A3A2B32C8F9_TypeDefinitionIndex = 87310;

struct alignas(8) Struct_2_32BC8A3A2B32C8F9
{
	::MoleMole::UIBaseController* Field_2_0; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + STRUCT_2_32BC8A3A2B32C8F9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_32BC8A3A2B32C8F9_DISPOSE_OFFSET))(this);
	}
};
