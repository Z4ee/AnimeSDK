#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_12B972761C81A163_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0xD3A4190)
#define CLASS_2_12B972761C81A163_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD3A41B0)
#define CLASS_2_12B972761C81A163_GET_RATIO_OFFSET UNITYSDK_OFFSET(0xD3A41D0)
#define CLASS_2_12B972761C81A163_METHOD_2_9824A4104A48CE7B_OFFSET UNITYSDK_OFFSET(0xD3A3D30)
#define CLASS_2_12B972761C81A163_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0xD3A41A0)
#define CLASS_2_12B972761C81A163_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD3A41C0)
#define CLASS_2_12B972761C81A163_SET_RATIO_OFFSET UNITYSDK_OFFSET(0xD3A41E0)
#define CLASS_2_12B972761C81A163__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A40B0)

inline static constexpr unsigned int Class_2_12B972761C81A163_TypeDefinitionIndex = 54401;

class Class_2_12B972761C81A163 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::Boolean _IsActive_k__BackingField; // 0x10
	::System::Single _Ratio_k__BackingField; // 0x14
	::System::UInt32 _DamageCounter_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_9824A4104A48CE7B(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_METHOD_2_9824A4104A48CE7B_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_SET_DAMAGECOUNTER_OFFSET))(this, value);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Single get_Ratio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12B972761C81A163_SET_RATIO_OFFSET))(this, value);
	}
};
