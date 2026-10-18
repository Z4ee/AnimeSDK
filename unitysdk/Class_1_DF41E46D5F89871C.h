#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AwaitDeathProcessState.h"
#include "unitysdk/System/Object.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_DF41E46D5F89871C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F0AA0)

inline static constexpr unsigned int Class_1_DF41E46D5F89871C_TypeDefinitionIndex = 56233;

class Class_1_DF41E46D5F89871C : public ::System::Object
{
public:
	::Class_2_1DBE0E1023AFDBC5* OCLPHKFFANL; // 0x10
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x20
	::RPG::GameCore::AwaitDeathProcessState MEPFOEEGBEA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41E46D5F89871C__CTOR_OFFSET))(this);
	}
};
