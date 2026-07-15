#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47CFC2D7B3865B39;

#define CLASS_1_463786FEF28056CE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19377E80)
#define CLASS_1_463786FEF28056CE___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__0_OFFSET UNITYSDK_OFFSET(0x19378460)
#define CLASS_1_463786FEF28056CE___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__1_OFFSET UNITYSDK_OFFSET(0x19378490)

inline static constexpr unsigned int Class_1_463786FEF28056CE___c__DisplayClass16_0_TypeDefinitionIndex = 75083;

class Class_1_463786FEF28056CE___c__DisplayClass16_0 : public ::System::Object
{
public:
	::System::UInt32 skillID; // 0x10
	::System::UInt32 level; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_463786FEF28056CE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateSpecificPlayerSkillInfo_b__0(::Class_1_47CFC2D7B3865B39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_47CFC2D7B3865B39*))((::PBYTE)hIl2Cpp + CLASS_1_463786FEF28056CE___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateSpecificPlayerSkillInfo_b__1(::Class_1_47CFC2D7B3865B39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_47CFC2D7B3865B39*))((::PBYTE)hIl2Cpp + CLASS_1_463786FEF28056CE___C__DISPLAYCLASS16_0__UPDATESPECIFICPLAYERSKILLINFO_B__1_OFFSET))(this, a1);
	}
};
