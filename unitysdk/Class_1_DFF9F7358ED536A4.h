#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_104;

#define CLASS_1_DFF9F7358ED536A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B480)

inline static constexpr unsigned int Class_1_DFF9F7358ED536A4_TypeDefinitionIndex = 40373;

class Class_1_DFF9F7358ED536A4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_104* PGNMKHOKHIO; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF9F7358ED536A4__CTOR_OFFSET))(this);
	}
};
