#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_0A99AF1699F7F17E_5;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_21_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14E68110)
#define CLASS_2_6347450B85B6BBD4_21__CTOR_OFFSET UNITYSDK_OFFSET(0x14E68250)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_21_TypeDefinitionIndex = 72369;

class Class_2_6347450B85B6BBD4_21 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_0A99AF1699F7F17E_5* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_0A99AF1699F7F17E_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_0A99AF1699F7F17E_5*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_21_ONEXECUTE_OFFSET))(this);
	}
};
