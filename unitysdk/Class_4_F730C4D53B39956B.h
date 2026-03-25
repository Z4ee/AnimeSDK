#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5A10464B73D74440.h"

#define CLASS_4_F730C4D53B39956B_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCB19EE0)
#define CLASS_4_F730C4D53B39956B_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xCB19EF0)
#define CLASS_4_F730C4D53B39956B__CTOR_OFFSET UNITYSDK_OFFSET(0xCB19F50)

inline static constexpr unsigned int Class_4_F730C4D53B39956B_TypeDefinitionIndex = 60672;

class Class_4_F730C4D53B39956B : public ::Class_3_5A10464B73D74440
{
public:
	::System::Int32 Field_4_0; // 0x18
	::System::Int32 Field_4_1; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_F730C4D53B39956B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 get_value()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F730C4D53B39956B_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_F730C4D53B39956B_SET_VALUE_OFFSET))(this, a1);
	}
};
