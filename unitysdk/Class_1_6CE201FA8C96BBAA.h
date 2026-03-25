#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerFlipState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE201FA8C96BBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16786A70)

inline static constexpr unsigned int Class_1_6CE201FA8C96BBAA_TypeDefinitionIndex = 32810;

class Class_1_6CE201FA8C96BBAA : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PlayerFlipState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE201FA8C96BBAA__CTOR_OFFSET))(this);
	}
};
