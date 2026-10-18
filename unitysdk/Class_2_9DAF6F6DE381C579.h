#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitOwedRollCount; }

#define CLASS_2_9DAF6F6DE381C579_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1C5E8C60)
#define CLASS_2_9DAF6F6DE381C579__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DEE30)

inline static constexpr unsigned int Class_2_9DAF6F6DE381C579_TypeDefinitionIndex = 36325;

class Class_2_9DAF6F6DE381C579 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitOwedRollCount*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_9DAF6F6DE381C579__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAF6F6DE381C579_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
