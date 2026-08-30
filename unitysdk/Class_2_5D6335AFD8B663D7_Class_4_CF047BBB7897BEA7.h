#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1.h"

class Class_2_5D6335AFD8B663D7_Class_4_CF047BBB7897BEA7_Class_1_C45A21141E3951D8;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_Normal; }

#define CLASS_2_5D6335AFD8B663D7_CLASS_4_CF047BBB7897BEA7_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x16265D90)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_CF047BBB7897BEA7_METHOD_4_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x16265C90)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_CF047BBB7897BEA7__CTOR_OFFSET UNITYSDK_OFFSET(0x16265C30)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Class_4_CF047BBB7897BEA7_TypeDefinitionIndex = 57580;

class Class_2_5D6335AFD8B663D7_Class_4_CF047BBB7897BEA7 : public ::Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_Normal*>
{
public:
	::System::Single JDMDDIHADLJ; // 0x38
	::System::Single HBDJCFFDGDD; // 0x3C
	::System::Single DNPHGOELBMH; // 0x40
	::System::Single AIKAPJELHNK; // 0x44
	::System::Single NPINECOCALC; // 0x48

	::System::Void _ctor(::Class_2_5D6335AFD8B663D7_Class_4_CF047BBB7897BEA7_Class_1_C45A21141E3951D8* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D6335AFD8B663D7_Class_4_CF047BBB7897BEA7_Class_1_C45A21141E3951D8*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_CF047BBB7897BEA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_CF047BBB7897BEA7_METHOD_4_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_CF047BBB7897BEA7_GET_CURRENTVALUE_OFFSET))(this);
	}
};
