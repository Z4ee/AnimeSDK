#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerAidState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B3122B2B681EA91E__CTOR_OFFSET UNITYSDK_OFFSET(0x89F1B20)

inline static constexpr unsigned int Class_1_B3122B2B681EA91E_TypeDefinitionIndex = 44681;

class Class_1_B3122B2B681EA91E : public ::System::Object
{
public:
	::Class_1_5F51D4049EA87B7B* Field_1_7; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_5; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_1_6; // 0x30
	::RPG::GameCore::GameEntity* Field_1_0; // 0x38
	::RPG::GameCore::TriggerAidState Field_1_4; // 0x40
	::System::Int32 Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3122B2B681EA91E__CTOR_OFFSET))(this);
	}
};
