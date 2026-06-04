#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_81337B277EEAE429_FloatEvaluatorTemplate_1.h"

class Class_2_81337B277EEAE429_Class_4_CF047BBB7897BEA7_Class_1_C45A21141E3951D8;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_Normal; }

#define CLASS_2_81337B277EEAE429_CLASS_4_CF047BBB7897BEA7_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x142D1B20)
#define CLASS_2_81337B277EEAE429_CLASS_4_CF047BBB7897BEA7_METHOD_4_8C3F79E1E85EBE71_OFFSET UNITYSDK_OFFSET(0x142D19F0)
#define CLASS_2_81337B277EEAE429_CLASS_4_CF047BBB7897BEA7__CTOR_OFFSET UNITYSDK_OFFSET(0x142D1990)

inline static constexpr unsigned int Class_2_81337B277EEAE429_Class_4_CF047BBB7897BEA7_TypeDefinitionIndex = 53640;

class Class_2_81337B277EEAE429_Class_4_CF047BBB7897BEA7 : public ::Class_2_81337B277EEAE429_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_Normal*>
{
public:
	::System::Single Field_4_0; // 0x38
	::System::Single Field_4_1; // 0x3C
	::System::Single Field_4_2; // 0x40
	::System::Single Field_4_3; // 0x44
	::System::Single Field_4_4; // 0x48

	::System::Void _ctor(::Class_2_81337B277EEAE429_Class_4_CF047BBB7897BEA7_Class_1_C45A21141E3951D8* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_81337B277EEAE429_Class_4_CF047BBB7897BEA7_Class_1_C45A21141E3951D8*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_CF047BBB7897BEA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_8C3F79E1E85EBE71(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_CF047BBB7897BEA7_METHOD_4_8C3F79E1E85EBE71_OFFSET))(this, a1);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_CF047BBB7897BEA7_GET_CURRENTVALUE_OFFSET))(this);
	}
};
