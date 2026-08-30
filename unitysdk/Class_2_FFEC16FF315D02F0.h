#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_DirectDamage; }

#define CLASS_2_FFEC16FF315D02F0_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1C24C270)
#define CLASS_2_FFEC16FF315D02F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24C260)

inline static constexpr unsigned int Class_2_FFEC16FF315D02F0_TypeDefinitionIndex = 35626;

class Class_2_FFEC16FF315D02F0 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_FFEC16FF315D02F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFEC16FF315D02F0_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}
};
