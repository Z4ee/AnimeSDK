#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_CE143568FFD23386_METHOD_1_ACB82EA38E8B8910_OFFSET UNITYSDK_OFFSET(0xF3FFED0)
#define CLASS_1_CE143568FFD23386__CTOR_OFFSET UNITYSDK_OFFSET(0xF400380)

inline static constexpr unsigned int Class_1_CE143568FFD23386_TypeDefinitionIndex = 60086;

class Class_1_CE143568FFD23386 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE143568FFD23386__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10* Method_1_ACB82EA38E8B8910(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_CE143568FFD23386_METHOD_1_ACB82EA38E8B8910_OFFSET))(this, a1);
	}
};
