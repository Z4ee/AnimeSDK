#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/Config/Boolean.h"

class Class_3_6D73516CC6FEADD7;

#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x113E5FC0)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x113E6480)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_9158AEFCF39F2400_OFFSET UNITYSDK_OFFSET(0x113E6330)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x113E6500)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113E62D0)
#define CLASS_2_9DAFE6A077A11AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6320)

inline static constexpr unsigned int Class_2_9DAFE6A077A11AC9_TypeDefinitionIndex = 61572;

class Class_2_9DAFE6A077A11AC9 : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_6D73516CC6FEADD7* Field_2_0; // 0x28
	::System::Boolean Field_2_1; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Single Field_2_3; // 0x38
	::System::Single Field_2_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9158AEFCF39F2400(::Class_3_6D73516CC6FEADD7* a1, ::MoleMole::Config::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6D73516CC6FEADD7*, ::MoleMole::Config::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_9158AEFCF39F2400_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
