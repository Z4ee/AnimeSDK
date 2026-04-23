#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddCurrentTurnMaxRollCount; }

#define CLASS_2_072017A4BE59A579_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x17BF12C0)
#define CLASS_2_072017A4BE59A579__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF12B0)

inline static constexpr unsigned int Class_2_072017A4BE59A579_TypeDefinitionIndex = 34107;

class Class_2_072017A4BE59A579 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_072017A4BE59A579__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_072017A4BE59A579_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}
};
