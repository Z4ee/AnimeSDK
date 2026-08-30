#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_66C3ADF82330F716;
class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByCheckHaveSkill; }

#define CLASS_3_03F672F4092706AB_METHOD_3_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x1C7526E0)
#define CLASS_3_03F672F4092706AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7526C0)
#define CLASS_3_03F672F4092706AB___EVALUATEIMP_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C7527E0)

inline static constexpr unsigned int Class_3_03F672F4092706AB_TypeDefinitionIndex = 41514;

class Class_3_03F672F4092706AB : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckHaveSkill* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckHaveSkill* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckHaveSkill*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B549F04EA33A764B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB_METHOD_3_B549F04EA33A764B_OFFSET))(this);
	}

	::System::Boolean __EvaluateImp_b__1_0(::Class_1_66C3ADF82330F716* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66C3ADF82330F716*))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB___EVALUATEIMP_B__1_0_OFFSET))(this, a1);
	}
};
