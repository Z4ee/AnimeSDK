#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueReadType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_B84868A9FB142439_METHOD_2_CF329A796676F457_OFFSET UNITYSDK_OFFSET(0x1B49C5B0)

inline static constexpr unsigned int Struct_2_B84868A9FB142439_TypeDefinitionIndex = 10831;

struct alignas(8) Struct_2_B84868A9FB142439
{
	::RPG::GameCore::DynamicValueReadType GMPGDEINODK; // 0x10
	::System::String* AIBNIIADGOA; // 0x18
	::System::Int32 GMDBHJKEAEI; // 0x20

	static ::Struct_2_B84868A9FB142439 Method_2_CF329A796676F457(::System::String* a1)
	{
		return ((::Struct_2_B84868A9FB142439(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B84868A9FB142439_METHOD_2_CF329A796676F457_OFFSET))(a1);
	}
};
