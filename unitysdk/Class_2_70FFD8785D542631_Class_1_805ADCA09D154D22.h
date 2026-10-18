#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_2_70FFD8785D542631_CLASS_1_805ADCA09D154D22__CTOR_OFFSET UNITYSDK_OFFSET(0x15A9D600)

inline static constexpr unsigned int Class_2_70FFD8785D542631_Class_1_805ADCA09D154D22_TypeDefinitionIndex = 71761;

class Class_2_70FFD8785D542631_Class_1_805ADCA09D154D22 : public ::System::Object
{
public:
	::System::Action* HJBCMCMMKBH; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70FFD8785D542631_CLASS_1_805ADCA09D154D22__CTOR_OFFSET))(this);
	}
};
