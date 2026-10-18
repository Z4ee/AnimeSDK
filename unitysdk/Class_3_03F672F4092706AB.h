#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_495150894F6464D6;
class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByCheckHaveSkill; }

#define CLASS_3_03F672F4092706AB_METHOD_3_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x1CAB0980)
#define CLASS_3_03F672F4092706AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB0960)
#define CLASS_3_03F672F4092706AB___EVALUATEIMP_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CAB0A80)

inline static constexpr unsigned int Class_3_03F672F4092706AB_TypeDefinitionIndex = 43153;

class Class_3_03F672F4092706AB : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckHaveSkill* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckHaveSkill* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckHaveSkill*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B549F04EA33A764B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB_METHOD_3_B549F04EA33A764B_OFFSET))(this);
	}

	::System::Boolean __EvaluateImp_b__1_0(::Class_1_495150894F6464D6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_495150894F6464D6*))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB___EVALUATEIMP_B__1_0_OFFSET))(this, a1);
	}
};
