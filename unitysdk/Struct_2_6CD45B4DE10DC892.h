#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TaskContext; }

#define STRUCT_2_6CD45B4DE10DC892_METHOD_2_FF35922B674791EC_OFFSET UNITYSDK_OFFSET(0x38FEB90)
#define STRUCT_2_6CD45B4DE10DC892__CTOR_OFFSET UNITYSDK_OFFSET(0x38FEB60)

inline static constexpr unsigned int Struct_2_6CD45B4DE10DC892_TypeDefinitionIndex = 53651;

struct alignas(8) Struct_2_6CD45B4DE10DC892
{
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_6CD45B4DE10DC892__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF35922B674791EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CD45B4DE10DC892_METHOD_2_FF35922B674791EC_OFFSET))(this);
	}
};
