#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_FE2B603B9E4C6CF2_2_GET_BP_OFFSET UNITYSDK_OFFSET(0x19527E60)
#define CLASS_2_FE2B603B9E4C6CF2_2_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x19527E40)
#define CLASS_2_FE2B603B9E4C6CF2_2_METHOD_2_7991C72AB7DF1C9E_OFFSET UNITYSDK_OFFSET(0x19527CD0)
#define CLASS_2_FE2B603B9E4C6CF2_2_SET_BP_OFFSET UNITYSDK_OFFSET(0x19527E70)
#define CLASS_2_FE2B603B9E4C6CF2_2_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x19527E50)
#define CLASS_2_FE2B603B9E4C6CF2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19527DA0)

inline static constexpr unsigned int Class_2_FE2B603B9E4C6CF2_2_TypeDefinitionIndex = 59150;

class Class_2_FE2B603B9E4C6CF2_2 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::UInt32 _DamageCounter_k__BackingField; // 0x10
	::System::Int32 _BP_k__BackingField; // 0x14

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_2__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_7991C72AB7DF1C9E(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_2_METHOD_2_7991C72AB7DF1C9E_OFFSET))(a1, a2);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_2_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_2_SET_DAMAGECOUNTER_OFFSET))(this, a1);
	}

	::System::Int32 get_BP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_2_GET_BP_OFFSET))(this);
	}

	::System::Void set_BP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE2B603B9E4C6CF2_2_SET_BP_OFFSET))(this, a1);
	}
};
