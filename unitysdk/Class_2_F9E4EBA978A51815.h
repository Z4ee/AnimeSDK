#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_CD4EC20BEBA8A2DA;
class Class_1_D8BECDCE48063EC7;
class Class_2_D84B4578A743B6D7;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDice; }

#define CLASS_2_F9E4EBA978A51815_METHOD_2_3EC6749BD0DFCDFF_OFFSET UNITYSDK_OFFSET(0x1818A460)
#define CLASS_2_F9E4EBA978A51815__CTOR_OFFSET UNITYSDK_OFFSET(0x1818A3B0)

inline static constexpr unsigned int Class_2_F9E4EBA978A51815_TypeDefinitionIndex = 34742;

class Class_2_F9E4EBA978A51815 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_D84B4578A743B6D7* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* Field_2_1; // 0x20
	::Class_1_CD4EC20BEBA8A2DA* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_F9E4EBA978A51815__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EC6749BD0DFCDFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9E4EBA978A51815_METHOD_2_3EC6749BD0DFCDFF_OFFSET))(this);
	}
};
