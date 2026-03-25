#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_FC76654373432032_1_METHOD_1_6952C6F08A301D6F_OFFSET UNITYSDK_OFFSET(0x8DCDC70)
#define CLASS_1_FC76654373432032_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8DCDD60)

inline static constexpr unsigned int Class_1_FC76654373432032_1_TypeDefinitionIndex = 48575;

class Class_1_FC76654373432032_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC76654373432032_1__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5* Method_1_6952C6F08A301D6F(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_FC76654373432032_1_METHOD_1_6952C6F08A301D6F_OFFSET))(this, a1);
	}
};
