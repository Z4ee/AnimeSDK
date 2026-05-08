#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C5A03A90BB5E900_Enum_3_523767271D6B9F26.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

#define STRUCT_2_2C5A03A90BB5E900_METHOD_2_4727789A2260CB36_OFFSET UNITYSDK_OFFSET(0x6926D0)

inline static constexpr unsigned int Struct_2_2C5A03A90BB5E900_TypeDefinitionIndex = 42655;

struct alignas(4) Struct_2_2C5A03A90BB5E900
{
	::System::Boolean Field_2_0; // 0x10
	::Struct_2_2C5A03A90BB5E900_Enum_3_523767271D6B9F26 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Void Method_2_4727789A2260CB36(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + STRUCT_2_2C5A03A90BB5E900_METHOD_2_4727789A2260CB36_OFFSET))(this, a1);
	}
};
