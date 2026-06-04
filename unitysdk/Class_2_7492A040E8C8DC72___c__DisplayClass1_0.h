#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_7492A040E8C8DC72___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14513800)
#define CLASS_2_7492A040E8C8DC72___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x14513900)

inline static constexpr unsigned int Class_2_7492A040E8C8DC72___c__DisplayClass1_0_TypeDefinitionIndex = 54499;

class Class_2_7492A040E8C8DC72___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* target; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492A040E8C8DC72___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
