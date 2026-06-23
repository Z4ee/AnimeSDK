#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define STRUCT_2_5C32124DBDC8DB34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x80B6E0)
#define STRUCT_2_5C32124DBDC8DB34__CTOR_OFFSET UNITYSDK_OFFSET(0x80B6B0)

inline static constexpr unsigned int Struct_2_5C32124DBDC8DB34_TypeDefinitionIndex = 62242;

struct alignas(8) Struct_2_5C32124DBDC8DB34
{
	::System::Action* Field_2_0; // 0x10

	::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_5C32124DBDC8DB34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C32124DBDC8DB34_DISPOSE_OFFSET))(this);
	}
};
