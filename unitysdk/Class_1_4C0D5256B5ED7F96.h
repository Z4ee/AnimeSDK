#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_4C0D5256B5ED7F96_METHOD_1_E670B5DF4F9EFC48_OFFSET UNITYSDK_OFFSET(0x1367C260)

inline static constexpr unsigned int Class_1_4C0D5256B5ED7F96_TypeDefinitionIndex = 53151;

class Class_1_4C0D5256B5ED7F96 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_E670B5DF4F9EFC48(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C0D5256B5ED7F96_METHOD_1_E670B5DF4F9EFC48_OFFSET))(a1);
	}
};
