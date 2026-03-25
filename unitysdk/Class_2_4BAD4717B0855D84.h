#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_D2520FBD61B50E07;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_4BAD4717B0855D84_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A983B0)
#define CLASS_2_4BAD4717B0855D84__CTOR_OFFSET UNITYSDK_OFFSET(0x10A98560)
#define CLASS_2_4BAD4717B0855D84___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A98570)

inline static constexpr unsigned int Class_2_4BAD4717B0855D84_TypeDefinitionIndex = 62021;

class Class_2_4BAD4717B0855D84 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_D2520FBD61B50E07* Field_2_2; // 0x20
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x28
	::System::UInt32 Field_2_1; // 0x30

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2, ::Class_1_D2520FBD61B50E07* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + CLASS_2_4BAD4717B0855D84__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BAD4717B0855D84_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BAD4717B0855D84___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
