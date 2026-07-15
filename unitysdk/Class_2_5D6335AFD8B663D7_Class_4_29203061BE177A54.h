#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1.h"

class Class_2_5D6335AFD8B663D7_Class_4_29203061BE177A54_Class_1_C45A21141E3951D8_1;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_Wave; }

#define CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x14710560)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_METHOD_4_B3AE6F32204AC5DE_OFFSET UNITYSDK_OFFSET(0x1470FC90)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_METHOD_4_D4571B2662775632_OFFSET UNITYSDK_OFFSET(0x14710450)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_METHOD_4_FA08A55D9F0D20CC_OFFSET UNITYSDK_OFFSET(0x14710010)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54__CTOR_OFFSET UNITYSDK_OFFSET(0x1470FC40)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Class_4_29203061BE177A54_TypeDefinitionIndex = 54865;

class Class_2_5D6335AFD8B663D7_Class_4_29203061BE177A54 : public ::Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_Wave*>
{
public:
	::System::Single Field_4_0; // 0x38
	::System::Single Field_4_1; // 0x3C
	::System::Single Field_4_2; // 0x40
	::System::Boolean Field_4_3; // 0x44

	::System::Void _ctor(::Class_2_5D6335AFD8B663D7_Class_4_29203061BE177A54_Class_1_C45A21141E3951D8_1* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D6335AFD8B663D7_Class_4_29203061BE177A54_Class_1_C45A21141E3951D8_1*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_B3AE6F32204AC5DE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_METHOD_4_B3AE6F32204AC5DE_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_FA08A55D9F0D20CC(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_METHOD_4_FA08A55D9F0D20CC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_4_D4571B2662775632(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_METHOD_4_D4571B2662775632_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_29203061BE177A54_GET_CURRENTVALUE_OFFSET))(this);
	}
};
