#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleAddShield; }

#define CLASS_2_75CA2A4817F464D6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D3F060)
#define CLASS_2_75CA2A4817F464D6_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x18D3EF50)
#define CLASS_2_75CA2A4817F464D6__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3EF40)

inline static constexpr unsigned int Class_2_75CA2A4817F464D6_TypeDefinitionIndex = 39736;

class Class_2_75CA2A4817F464D6 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddShield* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddShield* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddShield*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_75CA2A4817F464D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75CA2A4817F464D6_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75CA2A4817F464D6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
