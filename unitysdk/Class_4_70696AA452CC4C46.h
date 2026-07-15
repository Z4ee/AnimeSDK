#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5A10464B73D74440.h"

#define CLASS_4_70696AA452CC4C46_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x164F8D40)
#define CLASS_4_70696AA452CC4C46_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x164F8D50)
#define CLASS_4_70696AA452CC4C46__CTOR_OFFSET UNITYSDK_OFFSET(0x164F8DA0)

inline static constexpr unsigned int Class_4_70696AA452CC4C46_TypeDefinitionIndex = 70601;

class Class_4_70696AA452CC4C46 : public ::Class_3_5A10464B73D74440
{
public:
	::System::Int32 Field_4_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_70696AA452CC4C46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_value()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_70696AA452CC4C46_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_70696AA452CC4C46_SET_VALUE_OFFSET))(this, a1);
	}
};
