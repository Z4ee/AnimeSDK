#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_630;
class Class_0_16E4307DCC419505_635;

#define CLASS_1_C584489F76966D79_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0x1872A480)
#define CLASS_1_C584489F76966D79_METHOD_1_92DAC9DC7C663830_OFFSET UNITYSDK_OFFSET(0x1872A240)
#define CLASS_1_C584489F76966D79__CTOR_OFFSET UNITYSDK_OFFSET(0x1872A230)

inline static constexpr unsigned int Class_1_C584489F76966D79_TypeDefinitionIndex = 61236;

class Class_1_C584489F76966D79 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_635* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_635* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_635*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_92DAC9DC7C663830()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_METHOD_1_92DAC9DC7C663830_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_630* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_630*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}
};
