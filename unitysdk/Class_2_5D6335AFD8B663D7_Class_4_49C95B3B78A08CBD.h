#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1.h"

class Class_2_5D6335AFD8B663D7_Class_4_49C95B3B78A08CBD_Class_1_179F7F62501D8665;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_PingPong; }

#define CLASS_2_5D6335AFD8B663D7_CLASS_4_49C95B3B78A08CBD_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x162658C0)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_49C95B3B78A08CBD_METHOD_4_72441113E013E70D_OFFSET UNITYSDK_OFFSET(0x162656C0)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_49C95B3B78A08CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x16265310)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Class_4_49C95B3B78A08CBD_TypeDefinitionIndex = 57582;

class Class_2_5D6335AFD8B663D7_Class_4_49C95B3B78A08CBD : public ::Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_PingPong*>
{
public:
	::System::Single AIKAPJELHNK; // 0x38
	::System::Single NPINECOCALC; // 0x3C
	::System::Single KFGBCLJCCCI; // 0x40
	::System::Single MHJBLFKKCIC; // 0x44
	::System::Single HBDJCFFDGDD; // 0x48

	::System::Void _ctor(::Class_2_5D6335AFD8B663D7_Class_4_49C95B3B78A08CBD_Class_1_179F7F62501D8665* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D6335AFD8B663D7_Class_4_49C95B3B78A08CBD_Class_1_179F7F62501D8665*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_49C95B3B78A08CBD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_72441113E013E70D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_49C95B3B78A08CBD_METHOD_4_72441113E013E70D_OFFSET))(this, a1);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_49C95B3B78A08CBD_GET_CURRENTVALUE_OFFSET))(this);
	}
};
