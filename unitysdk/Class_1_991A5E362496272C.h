#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePhaseNew; }

#define CLASS_1_991A5E362496272C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198C9DA0)
#define CLASS_1_991A5E362496272C_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x198C9D00)
#define CLASS_1_991A5E362496272C_METHOD_1_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x198C97A0)
#define CLASS_1_991A5E362496272C_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x198C9A20)
#define CLASS_1_991A5E362496272C_TICK_OFFSET UNITYSDK_OFFSET(0x198C9690)
#define CLASS_1_991A5E362496272C__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9680)

inline static constexpr unsigned int Class_1_991A5E362496272C_TypeDefinitionIndex = 61405;

class Class_1_991A5E362496272C : public ::System::Object
{
public:
	::RPG::Client::BattlePhaseNew* HMJAAOLDOAE; // 0x10

	::System::Void _ctor(::RPG::Client::BattlePhaseNew* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseNew*))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_METHOD_1_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}
};
