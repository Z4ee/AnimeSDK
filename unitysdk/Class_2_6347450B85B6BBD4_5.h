#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1731DA90)
#define CLASS_2_6347450B85B6BBD4_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1731DC00)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_5_TypeDefinitionIndex = 72340;

class Class_2_6347450B85B6BBD4_5 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_8271AFF79E02658D* Field_2_0; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_8271AFF79E02658D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5_ONEXECUTE_OFFSET))(this);
	}
};
