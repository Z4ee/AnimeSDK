#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitExtraColorDice; }

#define CLASS_2_5E6CDC7673679DEB_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x1AAF9580)
#define CLASS_2_5E6CDC7673679DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF9570)

inline static constexpr unsigned int Class_2_5E6CDC7673679DEB_TypeDefinitionIndex = 35640;

class Class_2_5E6CDC7673679DEB : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_5E6CDC7673679DEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E6CDC7673679DEB_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}
};
