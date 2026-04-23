#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_03D1A28614A820BF_METHOD_1_2267D1C1B22108DB_OFFSET UNITYSDK_OFFSET(0x11D82120)

inline static constexpr unsigned int Class_1_03D1A28614A820BF_TypeDefinitionIndex = 51802;

class Class_1_03D1A28614A820BF : public ::System::Object
{
public:
	static ::System::String* Method_1_2267D1C1B22108DB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_03D1A28614A820BF_METHOD_1_2267D1C1B22108DB_OFFSET))(a1);
	}
};
