#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/GameState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EB1A60234AF92FB2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F62190)

inline static constexpr unsigned int Class_1_EB1A60234AF92FB2_TypeDefinitionIndex = 38848;

class Class_1_EB1A60234AF92FB2 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PingPong::GameState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB1A60234AF92FB2__CTOR_OFFSET))(this);
	}
};
