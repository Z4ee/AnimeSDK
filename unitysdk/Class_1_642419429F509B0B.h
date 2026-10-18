#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_106;
class Class_0_16E4307DCC419505_108;
class Class_1_EAEB14864ACA411F;

#define CLASS_1_642419429F509B0B_METHOD_1_08927160715437D1_OFFSET UNITYSDK_OFFSET(0x1C549780)
#define CLASS_1_642419429F509B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C549770)

inline static constexpr unsigned int Class_1_642419429F509B0B_TypeDefinitionIndex = 41746;

class Class_1_642419429F509B0B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_108* AHACKGAOMKB; // 0x10
	::Class_0_16E4307DCC419505_106* BAOINEPGGPK; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_108* a1, ::Class_0_16E4307DCC419505_106* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_108*, ::Class_0_16E4307DCC419505_106*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_EAEB14864ACA411F* Method_1_08927160715437D1(::System::UInt32 a1)
	{
		return ((::Class_1_EAEB14864ACA411F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_08927160715437D1_OFFSET))(this, a1);
	}
};
