#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0251F68C7A9C91EA_CLASS_1_F1947C9CC03EB062__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC4D20)

inline static constexpr unsigned int Class_1_0251F68C7A9C91EA_Class_1_F1947C9CC03EB062_TypeDefinitionIndex = 57508;

class Class_1_0251F68C7A9C91EA_Class_1_F1947C9CC03EB062 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::BattlePerformCaptureActor* CIKPBGDIABO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_CLASS_1_F1947C9CC03EB062__CTOR_OFFSET))(this);
	}
};
