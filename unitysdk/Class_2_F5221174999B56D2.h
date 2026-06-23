#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E4C37CFC48389F00.h"

#define CLASS_2_F5221174999B56D2_METHOD_2_0917AE196AEC2CE2_OFFSET UNITYSDK_OFFSET(0x18052470)
#define CLASS_2_F5221174999B56D2_METHOD_2_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x18052280)
#define CLASS_2_F5221174999B56D2__CTOR_OFFSET UNITYSDK_OFFSET(0x18052360)

inline static constexpr unsigned int Class_2_F5221174999B56D2_TypeDefinitionIndex = 52682;

class Class_2_F5221174999B56D2 : public ::Class_1_E4C37CFC48389F00
{
public:
	::System::Single Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5221174999B56D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9E3751A8C9767297(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_F5221174999B56D2_METHOD_2_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0917AE196AEC2CE2(::System::Single a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_F5221174999B56D2_METHOD_2_0917AE196AEC2CE2_OFFSET))(this, a1, a2);
	}
};
