#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_A79874B455F34F7D;
class Class_1_B1A7D8EBAB39D13D;
class Class_2_D84B4578A743B6D7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDice; }

#define CLASS_2_66C5C21644AF228B_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x166142E0)
#define CLASS_2_66C5C21644AF228B__CTOR_OFFSET UNITYSDK_OFFSET(0x16614230)

inline static constexpr unsigned int Class_2_66C5C21644AF228B_TypeDefinitionIndex = 28414;

class Class_2_66C5C21644AF228B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_A79874B455F34F7D* Field_2_2; // 0x18
	::Class_2_D84B4578A743B6D7* Field_2_1; // 0x20
	::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_66C5C21644AF228B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66C5C21644AF228B_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}
};
