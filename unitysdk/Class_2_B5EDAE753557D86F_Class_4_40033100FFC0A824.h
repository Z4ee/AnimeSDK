#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B5EDAE753557D86F_FloatEvaluatorTemplate_1.h"

class Class_2_B5EDAE753557D86F_Class_4_40033100FFC0A824_Class_1_179F7F62501D8665_1;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_Loop; }

#define CLASS_2_B5EDAE753557D86F_CLASS_4_40033100FFC0A824_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x8953890)
#define CLASS_2_B5EDAE753557D86F_CLASS_4_40033100FFC0A824_METHOD_4_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x8953700)
#define CLASS_2_B5EDAE753557D86F_CLASS_4_40033100FFC0A824__CTOR_OFFSET UNITYSDK_OFFSET(0x89533D0)

inline static constexpr unsigned int Class_2_B5EDAE753557D86F_Class_4_40033100FFC0A824_TypeDefinitionIndex = 46269;

class Class_2_B5EDAE753557D86F_Class_4_40033100FFC0A824 : public ::Class_2_B5EDAE753557D86F_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_Loop*>
{
public:
	::System::Single Field_4_0; // 0x38
	::System::Single Field_4_4; // 0x3C
	::System::Single Field_4_2; // 0x40
	::System::Single Field_4_1; // 0x44
	::System::Single Field_4_3; // 0x48

	::System::Void _ctor(::Class_2_B5EDAE753557D86F_Class_4_40033100FFC0A824_Class_1_179F7F62501D8665_1* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B5EDAE753557D86F_Class_4_40033100FFC0A824_Class_1_179F7F62501D8665_1*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_4_40033100FFC0A824__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_4_40033100FFC0A824_METHOD_4_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_4_40033100FFC0A824_GET_CURRENTVALUE_OFFSET))(this);
	}
};
