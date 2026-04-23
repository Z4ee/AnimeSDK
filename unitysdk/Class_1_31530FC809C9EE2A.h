#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;

#define CLASS_1_31530FC809C9EE2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7D4220)
#define CLASS_1_31530FC809C9EE2A__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D42B0)

inline static constexpr unsigned int Class_1_31530FC809C9EE2A_TypeDefinitionIndex = 51559;

class Class_1_31530FC809C9EE2A : public ::System::Object
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_1_3; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_2; // 0x21
	::System::Boolean Field_1_1; // 0x22
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31530FC809C9EE2A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31530FC809C9EE2A_DISPOSE_OFFSET))(this);
	}
};
