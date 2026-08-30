#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_EntityData; }

#define CLASS_2_E24168A1008E10CA_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x1B260280)
#define CLASS_2_E24168A1008E10CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B260270)

inline static constexpr unsigned int Class_2_E24168A1008E10CA_TypeDefinitionIndex = 35681;

class Class_2_E24168A1008E10CA : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_EntityData*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_E24168A1008E10CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24168A1008E10CA_METHOD_2_489E0B827662C211_OFFSET))(this);
	}
};
