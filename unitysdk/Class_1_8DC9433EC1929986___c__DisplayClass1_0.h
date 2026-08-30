#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1009A685370873D6;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS1_0__ADDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x16100F70)
#define CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16100830)

inline static constexpr unsigned int Class_1_8DC9433EC1929986___c__DisplayClass1_0_TypeDefinitionIndex = 72276;

class Class_1_8DC9433EC1929986___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* buff; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddBuff_b__0(::Class_1_1009A685370873D6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1009A685370873D6*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS1_0__ADDBUFF_B__0_OFFSET))(this, a1);
	}
};
