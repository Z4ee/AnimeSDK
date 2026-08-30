#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C555725EE740F88;
class Class_1_D7976A8B64BD43B9;

#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x153D30C0)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS10_0___TRYADDSHOWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x153D31C0)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c__DisplayClass10_0_TypeDefinitionIndex = 72002;

class Class_1_843A4AFDA7D083A0___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_D7976A8B64BD43B9* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryAddShowData_b__1(::Class_1_6C555725EE740F88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C555725EE740F88*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS10_0___TRYADDSHOWDATA_B__1_OFFSET))(this, a1);
	}
};
