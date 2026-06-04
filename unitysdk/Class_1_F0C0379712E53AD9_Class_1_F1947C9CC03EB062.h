#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F0C0379712E53AD9_CLASS_1_F1947C9CC03EB062__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F0EA0)

inline static constexpr unsigned int Class_1_F0C0379712E53AD9_Class_1_F1947C9CC03EB062_TypeDefinitionIndex = 53571;

class Class_1_F0C0379712E53AD9_Class_1_F1947C9CC03EB062 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::BattlePerformCaptureActor* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_CLASS_1_F1947C9CC03EB062__CTOR_OFFSET))(this);
	}
};
