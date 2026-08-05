#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6140430CE1FE631F.h"

class Class_0_16E4307DCC419505_212;

#define CLASS_3_B66663F4ED0887B9_METHOD_3_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x18C1EDC0)
#define CLASS_3_B66663F4ED0887B9_METHOD_3_FCFB5DE045BD6704_OFFSET UNITYSDK_OFFSET(0x18C1EF90)
#define CLASS_3_B66663F4ED0887B9__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1F150)

inline static constexpr unsigned int Class_3_B66663F4ED0887B9_TypeDefinitionIndex = 78968;

class Class_3_B66663F4ED0887B9 : public ::Class_2_6140430CE1FE631F
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B66663F4ED0887B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B66663F4ED0887B9_METHOD_3_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_3_FCFB5DE045BD6704(::Class_0_16E4307DCC419505_212* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_212*))((::PBYTE)hIl2Cpp + CLASS_3_B66663F4ED0887B9_METHOD_3_FCFB5DE045BD6704_OFFSET))(this, a1);
	}
};
