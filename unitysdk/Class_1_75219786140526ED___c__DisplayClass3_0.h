#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_367B452FA4E5EC2C;
class Class_1_FCC22A0BAD3D5A17;

#define CLASS_1_75219786140526ED___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185E6250)
#define CLASS_1_75219786140526ED___C__DISPLAYCLASS3_0___CREATEFORSTORY_B__5_OFFSET UNITYSDK_OFFSET(0x185E65B0)

inline static constexpr unsigned int Class_1_75219786140526ED___c__DisplayClass3_0_TypeDefinitionIndex = 76603;

class Class_1_75219786140526ED___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_367B452FA4E5EC2C* engagement; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateForStory_b__5(::Class_1_FCC22A0BAD3D5A17* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___C__DISPLAYCLASS3_0___CREATEFORSTORY_B__5_OFFSET))(this, a1, a2);
	}
};
