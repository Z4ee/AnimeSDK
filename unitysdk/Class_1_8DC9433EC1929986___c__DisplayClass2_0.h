#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2026511352388728;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x141CD610)
#define CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__REMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x141CDA30)

inline static constexpr unsigned int Class_1_8DC9433EC1929986___c__DisplayClass2_0_TypeDefinitionIndex = 67593;

class Class_1_8DC9433EC1929986___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* buff; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveBuff_b__0(::Class_1_2026511352388728* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2026511352388728*))((::PBYTE)hIl2Cpp + CLASS_1_8DC9433EC1929986___C__DISPLAYCLASS2_0__REMOVEBUFF_B__0_OFFSET))(this, a1);
	}
};
