#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_32_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_FC76654373432032_METHOD_1_6952C6F08A301D6F_OFFSET UNITYSDK_OFFSET(0x11760A20)
#define CLASS_1_FC76654373432032__CTOR_OFFSET UNITYSDK_OFFSET(0x11760B10)

inline static constexpr unsigned int Class_1_FC76654373432032_TypeDefinitionIndex = 55316;

class Class_1_FC76654373432032 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC76654373432032__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_32_Class_1_9A90CD018E72DF20_5* Method_1_6952C6F08A301D6F(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_32_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_FC76654373432032_METHOD_1_6952C6F08A301D6F_OFFSET))(this, a1);
	}
};
