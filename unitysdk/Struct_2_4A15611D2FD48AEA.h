#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4A15611D2FD48AEA_METHOD_2_97C6A7311CDDA6C8_OFFSET UNITYSDK_OFFSET(0x735830)
#define STRUCT_2_4A15611D2FD48AEA_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_4A15611D2FD48AEA__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_4A15611D2FD48AEA_TypeDefinitionIndex = 84811;

struct alignas(4) Struct_2_4A15611D2FD48AEA
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4A15611D2FD48AEA__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4A15611D2FD48AEA_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_97C6A7311CDDA6C8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4A15611D2FD48AEA_METHOD_2_97C6A7311CDDA6C8_OFFSET))(this, a1, a2);
	}
};
