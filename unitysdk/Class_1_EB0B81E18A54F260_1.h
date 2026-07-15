#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_33_Class_1_9A90CD018E72DF20_8;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_EB0B81E18A54F260_1_METHOD_1_EBE98CC2127CF286_OFFSET UNITYSDK_OFFSET(0x1646B130)
#define CLASS_1_EB0B81E18A54F260_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1646B220)

inline static constexpr unsigned int Class_1_EB0B81E18A54F260_1_TypeDefinitionIndex = 57297;

class Class_1_EB0B81E18A54F260_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB0B81E18A54F260_1__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_33_Class_1_9A90CD018E72DF20_8* Method_1_EBE98CC2127CF286(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_33_Class_1_9A90CD018E72DF20_8*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_EB0B81E18A54F260_1_METHOD_1_EBE98CC2127CF286_OFFSET))(this, a1);
	}
};
