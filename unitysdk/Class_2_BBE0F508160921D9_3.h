#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_BBE0F508160921D9_3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA61E4B0)
#define CLASS_2_BBE0F508160921D9_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA61E550)
#define CLASS_2_BBE0F508160921D9_3___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA61E560)

inline static constexpr unsigned int Class_2_BBE0F508160921D9_3_TypeDefinitionIndex = 70833;

class Class_2_BBE0F508160921D9_3 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BBE0F508160921D9_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBE0F508160921D9_3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBE0F508160921D9_3___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
