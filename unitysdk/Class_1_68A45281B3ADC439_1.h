#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_32_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_68A45281B3ADC439_1_METHOD_1_83FEF14A364AFD67_OFFSET UNITYSDK_OFFSET(0x11AA24F0)
#define CLASS_1_68A45281B3ADC439_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA2660)

inline static constexpr unsigned int Class_1_68A45281B3ADC439_1_TypeDefinitionIndex = 55322;

class Class_1_68A45281B3ADC439_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A45281B3ADC439_1__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_32_Class_1_9A90CD018E72DF20_5* Method_1_83FEF14A364AFD67(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_32_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_68A45281B3ADC439_1_METHOD_1_83FEF14A364AFD67_OFFSET))(this, a1);
	}
};
