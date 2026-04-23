#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C555725EE740F88;
class Class_1_D7976A8B64BD43B9;

#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9802490)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS9_0___TRYADDSHOWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x98025D0)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c__DisplayClass9_0_TypeDefinitionIndex = 66398;

class Class_1_843A4AFDA7D083A0___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_D7976A8B64BD43B9* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryAddShowData_b__1(::Class_1_6C555725EE740F88* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C555725EE740F88*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS9_0___TRYADDSHOWDATA_B__1_OFFSET))(this, item);
	}
};
