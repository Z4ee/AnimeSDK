#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingGameState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_66A27EA1EE8C38F2__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5EB30)

inline static constexpr unsigned int Class_1_66A27EA1EE8C38F2_TypeDefinitionIndex = 39505;

class Class_1_66A27EA1EE8C38F2 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::RPG::Client::LittleGame::ChenLing::ChenLingGameState Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66A27EA1EE8C38F2__CTOR_OFFSET))(this);
	}
};
