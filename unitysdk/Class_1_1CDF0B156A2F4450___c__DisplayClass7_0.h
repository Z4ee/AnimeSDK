#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0615ADCECBB24D2;
namespace RPG::Client { class ChimeraEvaluationData; }

#define CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11370880)
#define CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0___RANDOMCHOOSEEVALUATIONINSAMEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x113708F0)

inline static constexpr unsigned int Class_1_1CDF0B156A2F4450___c__DisplayClass7_0_TypeDefinitionIndex = 51565;

class Class_1_1CDF0B156A2F4450___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::Client::ChimeraEvaluationData* evaluationData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RandomChooseEvaluationInSameGroup_b__0(::Class_1_B0615ADCECBB24D2* group)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B0615ADCECBB24D2*))((::PBYTE)hIl2Cpp + CLASS_1_1CDF0B156A2F4450___C__DISPLAYCLASS7_0___RANDOMCHOOSEEVALUATIONINSAMEGROUP_B__0_OFFSET))(this, group);
	}
};
