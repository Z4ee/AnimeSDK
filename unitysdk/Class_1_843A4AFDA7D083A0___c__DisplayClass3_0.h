#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C555725EE740F88;
class Class_1_D7976A8B64BD43B9;

#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C63800)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17C64180)
#define CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x17C641A0)

inline static constexpr unsigned int Class_1_843A4AFDA7D083A0___c__DisplayClass3_0_TypeDefinitionIndex = 68804;

class Class_1_843A4AFDA7D083A0___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_D7976A8B64BD43B9* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryRemoveShowData_b__0(::Class_1_6C555725EE740F88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C555725EE740F88*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _TryRemoveShowData_b__1(::Class_1_6C555725EE740F88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C555725EE740F88*))((::PBYTE)hIl2Cpp + CLASS_1_843A4AFDA7D083A0___C__DISPLAYCLASS3_0__TRYREMOVESHOWDATA_B__1_OFFSET))(this, a1);
	}
};
