#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0615ADCECBB24D2;
namespace RPG::Client { class ChimeraEvaluationData; }

#define CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D6780)
#define CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0___RANDOMCHOOSEEVALUATIONINSAMEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xA6D67F0)

inline static constexpr unsigned int Class_1_1CDF0B156A2F4450___c__DisplayClass7_0_TypeDefinitionIndex = 59433;

class Class_1_1CDF0B156A2F4450___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::Client::ChimeraEvaluationData* evaluationData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RandomChooseEvaluationInSameGroup_b__0(::Class_1_B0615ADCECBB24D2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B0615ADCECBB24D2*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0___RANDOMCHOOSEEVALUATIONINSAMEGROUP_B__0_OFFSET))(this, a1);
	}
};
