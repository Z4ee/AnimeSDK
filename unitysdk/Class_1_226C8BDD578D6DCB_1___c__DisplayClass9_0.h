#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_226C8BDD578D6DCB_1;
class Class_2_9DD8A46984F1AFFD;

#define CLASS_1_226C8BDD578D6DCB_1___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6FED0)
#define CLASS_1_226C8BDD578D6DCB_1___C__DISPLAYCLASS9_0___CREATETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x12A71500)

inline static constexpr unsigned int Class_1_226C8BDD578D6DCB_1___c__DisplayClass9_0_TypeDefinitionIndex = 70849;

class Class_1_226C8BDD578D6DCB_1___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_2_9DD8A46984F1AFFD* portalEntity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__0(::Class_1_226C8BDD578D6DCB_1* self, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_226C8BDD578D6DCB_1*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_226C8BDD578D6DCB_1___C__DISPLAYCLASS9_0___CREATETRIGGER_B__0_OFFSET))(this, self, ent);
	}
};
