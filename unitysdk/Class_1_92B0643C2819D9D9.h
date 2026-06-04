#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerHitReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_92B0643C2819D9D9__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC24D0)

inline static constexpr unsigned int Class_1_92B0643C2819D9D9_TypeDefinitionIndex = 39384;

class Class_1_92B0643C2819D9D9 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PlayerHitReason Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B0643C2819D9D9__CTOR_OFFSET))(this);
	}
};
