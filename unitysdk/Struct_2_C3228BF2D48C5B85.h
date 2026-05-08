#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C3228BF2D48C5B85_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x702930)

inline static constexpr unsigned int Struct_2_C3228BF2D48C5B85_TypeDefinitionIndex = 78069;

struct alignas(8) Struct_2_C3228BF2D48C5B85
{
	::MoleMole::AbyssS2_EventType Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::String* Field_2_2; // 0x18

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C3228BF2D48C5B85_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
