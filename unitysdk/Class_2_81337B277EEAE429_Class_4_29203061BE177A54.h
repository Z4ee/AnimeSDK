#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_81337B277EEAE429_FloatEvaluatorTemplate_1.h"

class Class_2_81337B277EEAE429_Class_4_29203061BE177A54_Class_1_C45A21141E3951D8_1;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_Wave; }

#define CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x142D24A0)
#define CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_METHOD_4_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x142D1BA0)
#define CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_METHOD_4_D4571B2662775632_OFFSET UNITYSDK_OFFSET(0x142D2390)
#define CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_METHOD_4_FA08A55D9F0D20CC_OFFSET UNITYSDK_OFFSET(0x142D1F50)
#define CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54__CTOR_OFFSET UNITYSDK_OFFSET(0x142D1B40)

inline static constexpr unsigned int Class_2_81337B277EEAE429_Class_4_29203061BE177A54_TypeDefinitionIndex = 53646;

class Class_2_81337B277EEAE429_Class_4_29203061BE177A54 : public ::Class_2_81337B277EEAE429_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_Wave*>
{
public:
	::System::Single Field_4_0; // 0x38
	::System::Boolean Field_4_1; // 0x3C
	::System::Single Field_4_2; // 0x40
	::System::Single Field_4_3; // 0x44

	::System::Void _ctor(::Class_2_81337B277EEAE429_Class_4_29203061BE177A54_Class_1_C45A21141E3951D8_1* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_81337B277EEAE429_Class_4_29203061BE177A54_Class_1_C45A21141E3951D8_1*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_65BB8F0F1E258993(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_METHOD_4_65BB8F0F1E258993_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_FA08A55D9F0D20CC(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_METHOD_4_FA08A55D9F0D20CC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_4_D4571B2662775632(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_METHOD_4_D4571B2662775632_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_4_29203061BE177A54_GET_CURRENTVALUE_OFFSET))(this);
	}
};
