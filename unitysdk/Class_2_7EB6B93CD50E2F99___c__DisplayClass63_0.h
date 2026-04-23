#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
class Class_2_7EB6B93CD50E2F99;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96F9360)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS63_0___GETSUMMONEDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x96FA120)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass63_0_TypeDefinitionIndex = 65736;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass63_0 : public ::System::Object
{
public:
	::Class_2_7EB6B93CD50E2F99* __4__this; // 0x10
	::RPG::GameCore::GameEntity* summoner; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetSummonedItems_b__0(::Class_1_DDDB57AA67C3A9EA* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS63_0___GETSUMMONEDITEMS_B__0_OFFSET))(this, x);
	}
};
