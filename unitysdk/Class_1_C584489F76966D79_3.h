#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_494;
class Class_0_16E4307DCC419505_499;

#define CLASS_1_C584489F76966D79_3_GET__OPERAND_OFFSET UNITYSDK_OFFSET(0x8BD7D50)
#define CLASS_1_C584489F76966D79_3_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0x8BD7BD0)
#define CLASS_1_C584489F76966D79_3__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD7BC0)

inline static constexpr unsigned int Class_1_C584489F76966D79_3_TypeDefinitionIndex = 64483;

class Class_1_C584489F76966D79_3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_499* __Operand_k__BackingField; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_499* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_499*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_494*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_3_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_499* get__Operand()
	{
		return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_3_GET__OPERAND_OFFSET))(this);
	}
};
