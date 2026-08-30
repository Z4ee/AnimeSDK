#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90;
class Class_2_B66C1067C0468FBB;

#define CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC14B0)
#define CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0___STATISTICCHANGEHP_B__0_OFFSET UNITYSDK_OFFSET(0x16CC2300)

inline static constexpr unsigned int Class_1_FB3E7B71A45FEB7C___c__DisplayClass7_0_TypeDefinitionIndex = 76956;

class Class_1_FB3E7B71A45FEB7C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_B66C1067C0468FBB* target; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __StatisticChangeHp_b__0(::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90*))((::PBYTE)hIl2Cpp + CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0___STATISTICCHANGEHP_B__0_OFFSET))(this, a1);
	}
};
