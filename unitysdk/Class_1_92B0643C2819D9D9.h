#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerHitReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_92B0643C2819D9D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47F530)

inline static constexpr unsigned int Class_1_92B0643C2819D9D9_TypeDefinitionIndex = 41072;

class Class_1_92B0643C2819D9D9 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PlayerHitReason KDHPKOFLNFM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B0643C2819D9D9__CTOR_OFFSET))(this);
	}
};
