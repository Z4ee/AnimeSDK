#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3BattleState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E86F2F8FA45B1748__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9018B0)

inline static constexpr unsigned int Class_1_E86F2F8FA45B1748_TypeDefinitionIndex = 40059;

class Class_1_E86F2F8FA45B1748 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Match3::Match3BattleState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E86F2F8FA45B1748__CTOR_OFFSET))(this);
	}
};
