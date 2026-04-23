#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_DirectDamage; }

#define CLASS_2_FFEC16FF315D02F0_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17C1DF90)
#define CLASS_2_FFEC16FF315D02F0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1DF70)

inline static constexpr unsigned int Class_2_FFEC16FF315D02F0_TypeDefinitionIndex = 34101;

class Class_2_FFEC16FF315D02F0 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_FFEC16FF315D02F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFEC16FF315D02F0_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}
};
