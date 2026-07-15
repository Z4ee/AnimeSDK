#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_ED78E2C86A4B45C0;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }

#define CLASS_1_786436F0275D4D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9CE60)

inline static constexpr unsigned int Class_1_786436F0275D4D3E_TypeDefinitionIndex = 34880;

class Class_1_786436F0275D4D3E : public ::System::Object
{
public:
	::RPG::GameCore::DiceCombatInsertAbilityConfig* Field_1_0; // 0x10
	::Class_2_AEE59ED8DADEC1A1* Field_1_1; // 0x18
	::Class_2_AEE59ED8DADEC1A1* Field_1_2; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_3; // 0x28
	::Class_1_ED78E2C86A4B45C0* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786436F0275D4D3E__CTOR_OFFSET))(this);
	}
};
