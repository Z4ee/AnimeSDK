#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_21C7581DFE99F091_17;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_15_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11A6C150)
#define CLASS_2_6347450B85B6BBD4_15__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6C1F0)
#define CLASS_2_6347450B85B6BBD4_15___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11A6C200)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_15_TypeDefinitionIndex = 70031;

class Class_2_6347450B85B6BBD4_15 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_21C7581DFE99F091_17* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_21C7581DFE99F091_17* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_21C7581DFE99F091_17*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_15_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_15___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
