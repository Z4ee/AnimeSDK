#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AwaitDeathProcessState.h"
#include "unitysdk/System/Object.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_DF41E46D5F89871C__CTOR_OFFSET UNITYSDK_OFFSET(0xA385260)

inline static constexpr unsigned int Class_1_DF41E46D5F89871C_TypeDefinitionIndex = 52497;

class Class_1_DF41E46D5F89871C : public ::System::Object
{
public:
	::Class_2_1DBE0E1023AFDBC5* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::AwaitDeathProcessState Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41E46D5F89871C__CTOR_OFFSET))(this);
	}
};
