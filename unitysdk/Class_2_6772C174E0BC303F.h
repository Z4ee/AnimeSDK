#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignDefend; }

#define CLASS_2_6772C174E0BC303F_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x17D46080)
#define CLASS_2_6772C174E0BC303F__CTOR_OFFSET UNITYSDK_OFFSET(0x17D46070)

inline static constexpr unsigned int Class_2_6772C174E0BC303F_TypeDefinitionIndex = 34121;

class Class_2_6772C174E0BC303F : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignDefend*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_6772C174E0BC303F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6772C174E0BC303F_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}
};
