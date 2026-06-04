#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_81337B277EEAE429_FloatEvaluatorTemplate_1.h"

class Class_2_81337B277EEAE429_Class_4_49C95B3B78A08CBD_Class_1_179F7F62501D8665;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_PingPong; }

#define CLASS_2_81337B277EEAE429_CLASS_4_49C95B3B78A08CBD_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x142D1650)
#define CLASS_2_81337B277EEAE429_CLASS_4_49C95B3B78A08CBD_METHOD_4_72441113E013E70D_OFFSET UNITYSDK_OFFSET(0x142D1450)
#define CLASS_2_81337B277EEAE429_CLASS_4_49C95B3B78A08CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x142D10A0)

inline static constexpr unsigned int Class_2_81337B277EEAE429_Class_4_49C95B3B78A08CBD_TypeDefinitionIndex = 53642;

class Class_2_81337B277EEAE429_Class_4_49C95B3B78A08CBD : public ::Class_2_81337B277EEAE429_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_PingPong*>
{
public:
	::System::Single Field_4_0; // 0x38
	::System::Single Field_4_1; // 0x3C
	::System::Single Field_4_2; // 0x40
	::System::Single Field_4_3; // 0x44
	::System::Single Field_4_4; // 0x48

	::System::Void _ctor(::Class_2_81337B277EEAE429_Class_4_49C95B3B78A08CBD_Class_1_179F7F62501D8665* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_81337B277EEAE429_Class_4_49C95B3B78A08CBD_Class_1_179F7F62501D8665*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_49C95B3B78A08CBD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_72441113E013E70D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_49C95B3B78A08CBD_METHOD_4_72441113E013E70D_OFFSET))(this, a1);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_49C95B3B78A08CBD_GET_CURRENTVALUE_OFFSET))(this);
	}
};
