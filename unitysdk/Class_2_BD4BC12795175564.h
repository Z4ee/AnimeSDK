#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_BD4BC12795175564_GET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0xE844190)
#define CLASS_2_BD4BC12795175564_METHOD_2_6123A5A4BCF3ED4C_OFFSET UNITYSDK_OFFSET(0xE8440E0)
#define CLASS_2_BD4BC12795175564_SET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0xE8441A0)
#define CLASS_2_BD4BC12795175564__CTOR_OFFSET UNITYSDK_OFFSET(0xE844170)

inline static constexpr unsigned int Class_2_BD4BC12795175564_TypeDefinitionIndex = 58999;

class Class_2_BD4BC12795175564 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::Int64 _DeltaHp_x1000_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BD4BC12795175564__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_6123A5A4BCF3ED4C(::System::Int64 a1)
	{
		return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_BD4BC12795175564_METHOD_2_6123A5A4BCF3ED4C_OFFSET))(a1);
	}

	::System::Int64 get_DeltaHp_x1000()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD4BC12795175564_GET_DELTAHP_X1000_OFFSET))(this);
	}

	::System::Void set_DeltaHp_x1000(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_BD4BC12795175564_SET_DELTAHP_X1000_OFFSET))(this, a1);
	}
};
