#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_4.h"
#include "unitysdk/System/Object.h"

class Class_2_7EA45D2647F35CDD;

#define CLASS_1_766323094E99705A__CTOR_OFFSET UNITYSDK_OFFSET(0x15887870)

inline static constexpr unsigned int Class_1_766323094E99705A_TypeDefinitionIndex = 75616;

class Class_1_766323094E99705A : public ::System::Object
{
public:
	::Class_2_7EA45D2647F35CDD* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::Struct_2_E03B78B927A9E70C_4 Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::System::UInt32 a2, ::Struct_2_E03B78B927A9E70C_4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::System::UInt32, ::Struct_2_E03B78B927A9E70C_4))((::PBYTE)hIl2Cpp + CLASS_1_766323094E99705A__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
