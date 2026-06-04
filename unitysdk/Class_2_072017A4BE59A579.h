#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddCurrentTurnMaxRollCount; }

#define CLASS_2_072017A4BE59A579_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x18B694C0)
#define CLASS_2_072017A4BE59A579__CTOR_OFFSET UNITYSDK_OFFSET(0x18B694B0)

inline static constexpr unsigned int Class_2_072017A4BE59A579_TypeDefinitionIndex = 34389;

class Class_2_072017A4BE59A579 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_072017A4BE59A579__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_072017A4BE59A579_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}
};
