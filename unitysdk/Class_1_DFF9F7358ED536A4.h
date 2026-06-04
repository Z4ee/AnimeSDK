#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_85;

#define CLASS_1_DFF9F7358ED536A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18D80500)

inline static constexpr unsigned int Class_1_DFF9F7358ED536A4_TypeDefinitionIndex = 38692;

class Class_1_DFF9F7358ED536A4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_85* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraDuelTeamType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF9F7358ED536A4__CTOR_OFFSET))(this);
	}
};
