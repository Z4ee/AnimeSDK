#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FCC83559300A7B58__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C8A0)

inline static constexpr unsigned int Class_1_FCC83559300A7B58_TypeDefinitionIndex = 43740;

class Class_1_FCC83559300A7B58 : public ::System::Object
{
public:
	::System::Int32 NMOKIHDMMNG; // 0x10
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType JCDIEKGKCPP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC83559300A7B58__CTOR_OFFSET))(this);
	}
};
