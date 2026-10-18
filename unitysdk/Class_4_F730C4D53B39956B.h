#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5A10464B73D74440.h"

#define CLASS_4_F730C4D53B39956B_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB7749C0)
#define CLASS_4_F730C4D53B39956B_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB7749D0)
#define CLASS_4_F730C4D53B39956B__CTOR_OFFSET UNITYSDK_OFFSET(0xB774A30)

inline static constexpr unsigned int Class_4_F730C4D53B39956B_TypeDefinitionIndex = 74012;

class Class_4_F730C4D53B39956B : public ::Class_3_5A10464B73D74440
{
public:
	::System::Int32 ENMIPOPKOOL; // 0x18
	::System::Int32 PJKFLONMKED; // 0x1C

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
