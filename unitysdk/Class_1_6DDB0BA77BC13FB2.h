#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_359;
class Class_0_16E4307DCC419505_646;

#define CLASS_1_6DDB0BA77BC13FB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1288B010)

inline static constexpr unsigned int Class_1_6DDB0BA77BC13FB2_TypeDefinitionIndex = 65001;

class Class_1_6DDB0BA77BC13FB2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_359* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_646* Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DDB0BA77BC13FB2__CTOR_OFFSET))(this);
	}
};
