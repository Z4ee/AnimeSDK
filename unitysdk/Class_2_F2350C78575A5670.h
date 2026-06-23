#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C2D4BBA2A4A8499.h"

class Class_0_16E4307DCC419505_647;

#define CLASS_2_F2350C78575A5670_METHOD_2_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0x10D95910)
#define CLASS_2_F2350C78575A5670__CTOR_OFFSET UNITYSDK_OFFSET(0x10D95900)

inline static constexpr unsigned int Class_2_F2350C78575A5670_TypeDefinitionIndex = 65152;

class Class_2_F2350C78575A5670 : public ::Class_1_7C2D4BBA2A4A8499
{
public:
	::Class_0_16E4307DCC419505_647* Field_2_1; // 0x10
	::Class_0_16E4307DCC419505_647* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_647* a1, ::Class_0_16E4307DCC419505_647* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_647*, ::Class_0_16E4307DCC419505_647*))((::PBYTE)hIl2Cpp + CLASS_2_F2350C78575A5670__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E4EC0FD7A76783C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2350C78575A5670_METHOD_2_E4EC0FD7A76783C9_OFFSET))(this);
	}
};
