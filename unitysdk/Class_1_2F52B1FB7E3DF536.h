#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2F52B1FB7E3DF536_METHOD_1_513BD042941F2375_OFFSET UNITYSDK_OFFSET(0x8BD8AE0)
#define CLASS_1_2F52B1FB7E3DF536_METHOD_1_64869FED08177484_OFFSET UNITYSDK_OFFSET(0x8BD8BA0)

inline static constexpr unsigned int Class_1_2F52B1FB7E3DF536_TypeDefinitionIndex = 56250;

class Class_1_2F52B1FB7E3DF536 : public ::System::Object
{
public:
	static ::RPG::Client::BaseShaderPropertyTransition* Method_1_513BD042941F2375(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2F52B1FB7E3DF536_METHOD_1_513BD042941F2375_OFFSET))(a1);
	}

	static ::RPG::Client::CharacterShaderPropertyTransition* Method_1_64869FED08177484(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2F52B1FB7E3DF536_METHOD_1_64869FED08177484_OFFSET))(a1);
	}
};
