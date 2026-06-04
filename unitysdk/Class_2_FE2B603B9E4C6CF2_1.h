#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_FE2B603B9E4C6CF2_1_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x145124E0)
#define CLASS_2_FE2B603B9E4C6CF2_1_GET_DELTASP_X1000_OFFSET UNITYSDK_OFFSET(0x14512500)
#define CLASS_2_FE2B603B9E4C6CF2_1_METHOD_2_7991C72AB7DF1C9E_OFFSET UNITYSDK_OFFSET(0x14512370)
#define CLASS_2_FE2B603B9E4C6CF2_1_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x145124F0)
#define CLASS_2_FE2B603B9E4C6CF2_1_SET_DELTASP_X1000_OFFSET UNITYSDK_OFFSET(0x14512510)
#define CLASS_2_FE2B603B9E4C6CF2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14512440)

inline static constexpr unsigned int Class_2_FE2B603B9E4C6CF2_1_TypeDefinitionIndex = 55133;

class Class_2_FE2B603B9E4C6CF2_1 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::UInt32 _DamageCounter_k__BackingField; // 0x10
	::System::Int32 _DeltaSp_x1000_k__BackingField; // 0x14

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_1__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_7991C72AB7DF1C9E(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_1_METHOD_2_7991C72AB7DF1C9E_OFFSET))(a1, a2);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_1_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_1_SET_DAMAGECOUNTER_OFFSET))(this, a1);
	}

	::System::Int32 get_DeltaSp_x1000()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_1_GET_DELTASP_X1000_OFFSET))(this);
	}

	::System::Void set_DeltaSp_x1000(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_1_SET_DELTASP_X1000_OFFSET))(this, a1);
	}
};
