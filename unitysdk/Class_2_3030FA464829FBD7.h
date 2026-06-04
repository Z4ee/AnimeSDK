#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionSpawnAoeOnCurSectionRows; }

#define CLASS_2_3030FA464829FBD7_METHOD_2_C017ED001E3CF580_OFFSET UNITYSDK_OFFSET(0x18AC1250)
#define CLASS_2_3030FA464829FBD7__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC1240)

inline static constexpr unsigned int Class_2_3030FA464829FBD7_TypeDefinitionIndex = 35065;

class Class_2_3030FA464829FBD7 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*))((::PBYTE)hIl2Cpp + CLASS_2_3030FA464829FBD7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C017ED001E3CF580(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3030FA464829FBD7_METHOD_2_C017ED001E3CF580_OFFSET))(this, a1, a2, a3);
	}
};
