#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_E87E81F3A9C4E052;

#define CLASS_1_356F6CD06D85EB3F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x174F46C0)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0x174F4A20)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0x174F4830)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x174F4460)
#define CLASS_1_356F6CD06D85EB3F__CTOR_OFFSET UNITYSDK_OFFSET(0x174F4450)

inline static constexpr unsigned int Class_1_356F6CD06D85EB3F_TypeDefinitionIndex = 73365;

class Class_1_356F6CD06D85EB3F : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_2* Field_1_0; // 0x10
	::Class_3_E87E81F3A9C4E052* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Boolean Field_1_8; // 0x38

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_E87E81F3A9C4E052* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_E87E81F3A9C4E052*))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_B991AA5072E9A99A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_METHOD_1_B991AA5072E9A99A_OFFSET))(this);
	}

	::System::Void Method_1_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_METHOD_1_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}
};
