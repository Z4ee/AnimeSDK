#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
class Class_2_72D48296AF9B6286_Class_1_2734A650E624DBE1;
class Class_2_9F4F45CD2563CF6D;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkRecommendDiceEX; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_72D48296AF9B6286_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x17D4DE00)
#define CLASS_2_72D48296AF9B6286__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4DC70)

inline static constexpr unsigned int Class_2_72D48296AF9B6286_TypeDefinitionIndex = 34079;

class Class_2_72D48296AF9B6286 : public ::Class_1_B55037134F9E6688
{
public:
	::System::Collections::Generic::List_1<::Class_2_72D48296AF9B6286_Class_1_2734A650E624DBE1*>* Field_2_1; // 0x18
	::Class_2_9F4F45CD2563CF6D* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkRecommendDiceEX*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_72D48296AF9B6286__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D48296AF9B6286_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}
};
