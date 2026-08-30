#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_89289C1958AC5289_1_METHOD_1_6486FCCED85BEB4B_OFFSET UNITYSDK_OFFSET(0x17E16080)
#define CLASS_1_89289C1958AC5289_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E16220)

inline static constexpr unsigned int Class_1_89289C1958AC5289_1_TypeDefinitionIndex = 60093;

class Class_1_89289C1958AC5289_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89289C1958AC5289_1__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10* Method_1_6486FCCED85BEB4B(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_89289C1958AC5289_1_METHOD_1_6486FCCED85BEB4B_OFFSET))(this, a1);
	}
};
