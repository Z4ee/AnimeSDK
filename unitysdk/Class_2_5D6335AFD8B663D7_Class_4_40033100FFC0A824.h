#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1.h"

class Class_2_5D6335AFD8B663D7_Class_4_40033100FFC0A824_Class_1_179F7F62501D8665_1;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator_Loop; }

#define CLASS_2_5D6335AFD8B663D7_CLASS_4_40033100FFC0A824_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x159A5800)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_40033100FFC0A824_METHOD_4_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x159A5670)
#define CLASS_2_5D6335AFD8B663D7_CLASS_4_40033100FFC0A824__CTOR_OFFSET UNITYSDK_OFFSET(0x159A4FF0)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Class_4_40033100FFC0A824_TypeDefinitionIndex = 57584;

class Class_2_5D6335AFD8B663D7_Class_4_40033100FFC0A824 : public ::Class_2_5D6335AFD8B663D7_FloatEvaluatorTemplate_1<::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator_Loop*>
{
public:
	::System::Single AIKAPJELHNK; // 0x38
	::System::Single NPINECOCALC; // 0x3C
	::System::Single KFGBCLJCCCI; // 0x40
	::System::Single HBDJCFFDGDD; // 0x44
	::System::Single MHJBLFKKCIC; // 0x48

	::System::Void _ctor(::Class_2_5D6335AFD8B663D7_Class_4_40033100FFC0A824_Class_1_179F7F62501D8665_1* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D6335AFD8B663D7_Class_4_40033100FFC0A824_Class_1_179F7F62501D8665_1*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_40033100FFC0A824__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_40033100FFC0A824_METHOD_4_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_4_40033100FFC0A824_GET_CURRENTVALUE_OFFSET))(this);
	}
};
