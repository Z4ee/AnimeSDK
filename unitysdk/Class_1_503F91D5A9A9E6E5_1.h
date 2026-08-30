#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_503F91D5A9A9E6E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB406960)

inline static constexpr unsigned int Class_1_503F91D5A9A9E6E5_1_TypeDefinitionIndex = 57087;

class Class_1_503F91D5A9A9E6E5_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::Struct_2_88A74A9E9AE5BA51 OFIDBAEPKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_503F91D5A9A9E6E5_1__CTOR_OFFSET))(this);
	}
};
