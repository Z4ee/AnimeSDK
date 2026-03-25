#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_66C3ADF82330F716;
class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByCheckHaveSkill; }

#define CLASS_3_03F672F4092706AB_METHOD_3_4FDFCF0E824F852D_OFFSET UNITYSDK_OFFSET(0x167FC4B0)
#define CLASS_3_03F672F4092706AB__CTOR_OFFSET UNITYSDK_OFFSET(0x167FC490)
#define CLASS_3_03F672F4092706AB___EVALUATEIMP_B__1_0_OFFSET UNITYSDK_OFFSET(0x167FC590)

inline static constexpr unsigned int Class_3_03F672F4092706AB_TypeDefinitionIndex = 33209;

class Class_3_03F672F4092706AB : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckHaveSkill* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckHaveSkill* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckHaveSkill*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4FDFCF0E824F852D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB_METHOD_3_4FDFCF0E824F852D_OFFSET))(this);
	}

	::System::Boolean __EvaluateImp_b__1_0(::Class_1_66C3ADF82330F716* skill)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66C3ADF82330F716*))((::PBYTE)hIl2Cpp + CLASS_3_03F672F4092706AB___EVALUATEIMP_B__1_0_OFFSET))(this, skill);
	}
};
