#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FCC83559300A7B58__CTOR_OFFSET UNITYSDK_OFFSET(0x17E06010)

inline static constexpr unsigned int Class_1_FCC83559300A7B58_TypeDefinitionIndex = 39500;

class Class_1_FCC83559300A7B58 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC83559300A7B58__CTOR_OFFSET))(this);
	}
};
