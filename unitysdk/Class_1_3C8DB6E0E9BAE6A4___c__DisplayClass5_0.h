#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90;
class Class_2_49CAB3DE74280C58;

#define CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129697E0)
#define CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS5_0___STATISTICDEATH_B__0_OFFSET UNITYSDK_OFFSET(0x129698C0)

inline static constexpr unsigned int Class_1_3C8DB6E0E9BAE6A4___c__DisplayClass5_0_TypeDefinitionIndex = 71185;

class Class_1_3C8DB6E0E9BAE6A4___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_49CAB3DE74280C58* dyingEntity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __StatisticDeath_b__0(::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_92178DBBCC977AF4_Class_1_7A01831FD2DABB90*))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__DISPLAYCLASS5_0___STATISTICDEATH_B__0_OFFSET))(this, c);
	}
};
