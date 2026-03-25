#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
class Class_2_7EB6B93CD50E2F99;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11830BE0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS61_0___GETSUMMONEDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x11831C40)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass61_0_TypeDefinitionIndex = 58442;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass61_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* summoner; // 0x10
	::Class_2_7EB6B93CD50E2F99* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetSummonedItems_b__0(::Class_1_02D30900317D93FD* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS61_0___GETSUMMONEDITEMS_B__0_OFFSET))(this, x);
	}
};
