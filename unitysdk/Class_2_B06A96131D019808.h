#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_B06A96131D019808_GET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0x10A4DA10)
#define CLASS_2_B06A96131D019808_METHOD_2_322A16B644C16228_OFFSET UNITYSDK_OFFSET(0x10A4D960)
#define CLASS_2_B06A96131D019808_SET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0x10A4DA20)
#define CLASS_2_B06A96131D019808__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4D9F0)

inline static constexpr unsigned int Class_2_B06A96131D019808_TypeDefinitionIndex = 47667;

class Class_2_B06A96131D019808 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::Int32 _DeltaHp_x1000_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B06A96131D019808__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_322A16B644C16228(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B06A96131D019808_METHOD_2_322A16B644C16228_OFFSET))(a1);
	}

	::System::Int32 get_DeltaHp_x1000()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B06A96131D019808_GET_DELTAHP_X1000_OFFSET))(this);
	}

	::System::Void set_DeltaHp_x1000(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B06A96131D019808_SET_DELTAHP_X1000_OFFSET))(this, value);
	}
};
