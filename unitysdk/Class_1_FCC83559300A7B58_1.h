#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FCC83559300A7B58_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA5E60)

inline static constexpr unsigned int Class_1_FCC83559300A7B58_1_TypeDefinitionIndex = 39528;

class Class_1_FCC83559300A7B58_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC83559300A7B58_1__CTOR_OFFSET))(this);
	}
};
