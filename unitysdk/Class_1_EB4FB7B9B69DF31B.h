#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_EB4FB7B9B69DF31B_METHOD_1_E6052877BDAD6406_OFFSET UNITYSDK_OFFSET(0x1A760550)

inline static constexpr unsigned int Class_1_EB4FB7B9B69DF31B_TypeDefinitionIndex = 57718;

class Class_1_EB4FB7B9B69DF31B : public ::System::Object
{
public:
	static ::System::Void Method_1_E6052877BDAD6406(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EB4FB7B9B69DF31B_METHOD_1_E6052877BDAD6406_OFFSET))(a1, a2);
	}
};
