#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_A79874B455F34F7D;
class Class_1_EA5232D6CAD71030;
class Class_2_9F4F45CD2563CF6D;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDice; }

#define CLASS_2_66C5C21644AF228B_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x17CC0E80)
#define CLASS_2_66C5C21644AF228B__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC0DD0)

inline static constexpr unsigned int Class_2_66C5C21644AF228B_TypeDefinitionIndex = 34078;

class Class_2_66C5C21644AF228B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_9F4F45CD2563CF6D* Field_2_1; // 0x18
	::Class_1_A79874B455F34F7D* Field_2_2; // 0x20
	::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDice*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_66C5C21644AF228B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66C5C21644AF228B_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}
};
