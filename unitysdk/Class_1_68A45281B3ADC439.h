#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_68A45281B3ADC439_METHOD_1_83FEF14A364AFD67_OFFSET UNITYSDK_OFFSET(0xD16AF10)
#define CLASS_1_68A45281B3ADC439__CTOR_OFFSET UNITYSDK_OFFSET(0xD16B080)

inline static constexpr unsigned int Class_1_68A45281B3ADC439_TypeDefinitionIndex = 48571;

class Class_1_68A45281B3ADC439 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A45281B3ADC439__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5* Method_1_83FEF14A364AFD67(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_68A45281B3ADC439_METHOD_1_83FEF14A364AFD67_OFFSET))(this, a1);
	}
};
