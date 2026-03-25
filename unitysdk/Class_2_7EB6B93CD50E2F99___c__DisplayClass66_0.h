#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11830EF0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS66_0___FINDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x11831D00)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass66_0_TypeDefinitionIndex = 58443;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass66_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindItem_b__0(::Class_1_02D30900317D93FD* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS66_0___FINDITEM_B__0_OFFSET))(this, x);
	}
};
