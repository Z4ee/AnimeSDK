#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_A79874B455F34F7D;
class Class_1_B1A7D8EBAB39D13D;
class Class_2_D84B4578A743B6D7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkSkillDice; }

#define CLASS_2_E0FDEAB25CA3F53B_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x166BCBA0)
#define CLASS_2_E0FDEAB25CA3F53B__CTOR_OFFSET UNITYSDK_OFFSET(0x166BCAF0)

inline static constexpr unsigned int Class_2_E0FDEAB25CA3F53B_TypeDefinitionIndex = 28415;

class Class_2_E0FDEAB25CA3F53B : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* Field_2_0; // 0x18
	::Class_2_D84B4578A743B6D7* Field_2_1; // 0x20
	::Class_1_A79874B455F34F7D* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_E0FDEAB25CA3F53B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0FDEAB25CA3F53B_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}
};
