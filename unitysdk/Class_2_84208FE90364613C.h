#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_84208FE90364613C_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x112AE3B0)
#define CLASS_2_84208FE90364613C__CTOR_OFFSET UNITYSDK_OFFSET(0x112AE4B0)
#define CLASS_2_84208FE90364613C___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x112AE4C0)

inline static constexpr unsigned int Class_2_84208FE90364613C_TypeDefinitionIndex = 70841;

class Class_2_84208FE90364613C : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::System::UInt64 Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_84208FE90364613C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84208FE90364613C_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84208FE90364613C___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
