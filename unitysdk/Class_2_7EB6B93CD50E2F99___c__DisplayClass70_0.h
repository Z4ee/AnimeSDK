#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5015C0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0___FINDITEM_B__0_OFFSET UNITYSDK_OFFSET(0xE502160)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass70_0_TypeDefinitionIndex = 68108;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass70_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindItem_b__0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0___FINDITEM_B__0_OFFSET))(this, a1);
	}
};
