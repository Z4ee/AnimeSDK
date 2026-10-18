#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAddShield; }

#define CLASS_2_75CA2A4817F464D6_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x1CA42E70)
#define CLASS_2_75CA2A4817F464D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA42E60)

inline static constexpr unsigned int Class_2_75CA2A4817F464D6_TypeDefinitionIndex = 43116;

class Class_2_75CA2A4817F464D6 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddShield* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddShield* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddShield*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_75CA2A4817F464D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75CA2A4817F464D6_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
