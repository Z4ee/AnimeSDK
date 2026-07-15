#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_F63D688E82E93773_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17E987B0)
#define CLASS_2_F63D688E82E93773_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E98CB0)

inline static constexpr unsigned int Class_2_F63D688E82E93773_1_TypeDefinitionIndex = 72367;

class Class_2_F63D688E82E93773_1 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63D688E82E93773_1_ONEXECUTE_OFFSET))(this);
	}
};
