#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90;
class Class_2_49CAB3DE74280C58;

#define CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEA764C0)
#define CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0___STATISTICCHANGEHP_B__0_OFFSET UNITYSDK_OFFSET(0xEA77320)

inline static constexpr unsigned int Class_1_FB3E7B71A45FEB7C___c__DisplayClass7_0_TypeDefinitionIndex = 62969;

class Class_1_FB3E7B71A45FEB7C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_49CAB3DE74280C58* target; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __StatisticChangeHp_b__0(::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90*))((::PBYTE)hIl2Cpp + CLASS_1_FB3E7B71A45FEB7C___C__DISPLAYCLASS7_0___STATISTICCHANGEHP_B__0_OFFSET))(this, c);
	}
};
