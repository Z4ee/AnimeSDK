#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_D38A5848A793D38F;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }

#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x153BDD20)
#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS22_0__SETUPFINISHPOINTREWARDINTERACT_B__0_OFFSET UNITYSDK_OFFSET(0x153C3FC0)

inline static constexpr unsigned int Class_2_D38A5848A793D38F___c__DisplayClass22_0_TypeDefinitionIndex = 76262;

class Class_2_D38A5848A793D38F___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* finishPropConfig; // 0x10
	::Class_2_D38A5848A793D38F* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupFinishPointRewardInteract_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS22_0__SETUPFINISHPOINTREWARDINTERACT_B__0_OFFSET))(this, a1);
	}
};
