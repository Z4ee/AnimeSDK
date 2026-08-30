#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_31616C8D89AF6421___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA60C0)
#define CLASS_2_31616C8D89AF6421___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x19CA6C50)

inline static constexpr unsigned int Class_2_31616C8D89AF6421___c__DisplayClass3_0_TypeDefinitionIndex = 52637;

class Class_2_31616C8D89AF6421___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* source; // 0x10
	::RPG::GameCore::GameEntity* target; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421___C__DISPLAYCLASS3_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
