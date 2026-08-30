#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_D38A5848A793D38F;
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }

#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199FC7E0)
#define CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS25_0___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x19A02D30)

inline static constexpr unsigned int Class_2_D38A5848A793D38F___c__DisplayClass25_0_TypeDefinitionIndex = 76262;

class Class_2_D38A5848A793D38F___c__DisplayClass25_0 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* revert2DVoxelConfig; // 0x10
	::Class_2_D38A5848A793D38F* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void __AddRevertAll2DVoxelInteractTrigger_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F___C__DISPLAYCLASS25_0___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__0_OFFSET))(this, a1);
	}
};
