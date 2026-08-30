#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CAA42EF32347EE5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x186B8710)

inline static constexpr unsigned int Class_1_9CAA42EF32347EE5_1_TypeDefinitionIndex = 56552;

class Class_1_9CAA42EF32347EE5_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* JLCBFBENLEC; // 0x10
	::System::Boolean HELJNHNDCJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CAA42EF32347EE5_1__CTOR_OFFSET))(this);
	}
};
