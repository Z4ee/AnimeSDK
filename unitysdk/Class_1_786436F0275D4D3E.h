#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_ED78E2C86A4B45C0;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }

#define CLASS_1_786436F0275D4D3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1975FDA0)

inline static constexpr unsigned int Class_1_786436F0275D4D3E_TypeDefinitionIndex = 35741;

class Class_1_786436F0275D4D3E : public ::System::Object
{
public:
	::Class_1_ED78E2C86A4B45C0* ENHCCOOHNKG; // 0x10
	::Class_2_AEE59ED8DADEC1A1* EOBLJJBOBIN; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x20
	::Class_2_AEE59ED8DADEC1A1* LHGPKEGOMKH; // 0x28
	::RPG::GameCore::DiceCombatInsertAbilityConfig* EABKOHGCHFP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_786436F0275D4D3E__CTOR_OFFSET))(this);
	}
};
