#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitExtraColorDice; }

#define CLASS_2_5E6CDC7673679DEB_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x17CBD970)
#define CLASS_2_5E6CDC7673679DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBD960)

inline static constexpr unsigned int Class_2_5E6CDC7673679DEB_TypeDefinitionIndex = 34115;

class Class_2_5E6CDC7673679DEB : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_5E6CDC7673679DEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E6CDC7673679DEB_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}
};
