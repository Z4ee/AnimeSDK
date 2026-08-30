#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkWeatherInEffect; }

#define CLASS_2_7974FB57182FAE99_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1C1A4C80)
#define CLASS_2_7974FB57182FAE99__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A4C70)

inline static constexpr unsigned int Class_2_7974FB57182FAE99_TypeDefinitionIndex = 35607;

class Class_2_7974FB57182FAE99 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_7974FB57182FAE99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7974FB57182FAE99_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}
};
