#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3FF63E3B49DB868D;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9148450)
#define CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__REMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x9148840)

inline static constexpr unsigned int Class_1_8DC9433EC1929986___c__DisplayClass2_0_TypeDefinitionIndex = 66653;

class Class_1_8DC9433EC1929986___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* buff; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveBuff_b__0(::Class_1_3FF63E3B49DB868D* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3FF63E3B49DB868D*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__REMOVEBUFF_B__0_OFFSET))(this, x);
	}
};
