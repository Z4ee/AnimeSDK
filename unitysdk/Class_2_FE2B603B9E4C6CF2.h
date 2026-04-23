#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_FE2B603B9E4C6CF2_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x124F86D0)
#define CLASS_2_FE2B603B9E4C6CF2_GET_INTVAL_OFFSET UNITYSDK_OFFSET(0x124F86F0)
#define CLASS_2_FE2B603B9E4C6CF2_METHOD_2_7991C72AB7DF1C9E_OFFSET UNITYSDK_OFFSET(0x124F8540)
#define CLASS_2_FE2B603B9E4C6CF2_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x124F86E0)
#define CLASS_2_FE2B603B9E4C6CF2_SET_INTVAL_OFFSET UNITYSDK_OFFSET(0x124F8700)
#define CLASS_2_FE2B603B9E4C6CF2__CTOR_OFFSET UNITYSDK_OFFSET(0x124F8610)

inline static constexpr unsigned int Class_2_FE2B603B9E4C6CF2_TypeDefinitionIndex = 54404;

class Class_2_FE2B603B9E4C6CF2 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::Int32 _IntVal_k__BackingField; // 0x10
	::System::UInt32 _DamageCounter_k__BackingField; // 0x14

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_7991C72AB7DF1C9E(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_METHOD_2_7991C72AB7DF1C9E_OFFSET))(a1, a2);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_SET_DAMAGECOUNTER_OFFSET))(this, value);
	}

	::System::Int32 get_IntVal()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_GET_INTVAL_OFFSET))(this);
	}

	::System::Void set_IntVal(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_SET_INTVAL_OFFSET))(this, value);
	}
};
