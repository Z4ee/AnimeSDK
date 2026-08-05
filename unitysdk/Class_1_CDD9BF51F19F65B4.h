#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FD608D6AF4D47270.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_506;
class Class_3_9F091E965E210217_33;

#define CLASS_1_CDD9BF51F19F65B4_METHOD_1_D53A6F882DDE1B5B_OFFSET UNITYSDK_OFFSET(0x14BA6BF0)
#define CLASS_1_CDD9BF51F19F65B4__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA69F0)

inline static constexpr unsigned int Class_1_CDD9BF51F19F65B4_TypeDefinitionIndex = 80223;

class Class_1_CDD9BF51F19F65B4 : public ::System::Object
{
public:
	::Class_3_9F091E965E210217_33* Field_1_6; // 0x10
	::Class_2_208CC9941471731A_506* Field_1_5; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::Enum_3_FD608D6AF4D47270 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CDD9BF51F19F65B4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D53A6F882DDE1B5B(::Class_3_9F091E965E210217_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9F091E965E210217_33*))((::PBYTE)hIl2Cpp + CLASS_1_CDD9BF51F19F65B4_METHOD_1_D53A6F882DDE1B5B_OFFSET))(this, a1);
	}
};
