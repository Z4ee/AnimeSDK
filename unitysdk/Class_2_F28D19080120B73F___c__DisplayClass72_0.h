#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
class Class_2_F28D19080120B73F;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC6A10)
#define CLASS_2_F28D19080120B73F___C__DISPLAYCLASS72_0___GETSUMMONEDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xFEC7620)

inline static constexpr unsigned int Class_2_F28D19080120B73F___c__DisplayClass72_0_TypeDefinitionIndex = 71321;

class Class_2_F28D19080120B73F___c__DisplayClass72_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* summoner; // 0x10
	::Class_2_F28D19080120B73F* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetSummonedItems_b__0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__DISPLAYCLASS72_0___GETSUMMONEDITEMS_B__0_OFFSET))(this, a1);
	}
};
