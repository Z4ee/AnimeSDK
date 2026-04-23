#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_C4B679728AD83B32;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_16_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11A52930)
#define CLASS_2_6347450B85B6BBD4_16__CTOR_OFFSET UNITYSDK_OFFSET(0x11A52A30)
#define CLASS_2_6347450B85B6BBD4_16___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11A52A40)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_16_TypeDefinitionIndex = 70034;

class Class_2_6347450B85B6BBD4_16 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_C4B679728AD83B32* Field_2_1; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_C4B679728AD83B32* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_C4B679728AD83B32*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_16_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_16___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
