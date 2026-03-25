#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_55842303271EB9BB;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBEEC7C0)
#define CLASS_2_6347450B85B6BBD4_5__CTOR_OFFSET UNITYSDK_OFFSET(0xBEEC980)
#define CLASS_2_6347450B85B6BBD4_5___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBEEC990)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_5_TypeDefinitionIndex = 62016;

class Class_2_6347450B85B6BBD4_5 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_55842303271EB9BB* Field_2_1; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_55842303271EB9BB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_55842303271EB9BB*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_5___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
