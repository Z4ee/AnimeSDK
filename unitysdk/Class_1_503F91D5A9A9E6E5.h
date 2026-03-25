#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_503F91D5A9A9E6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1096FE70)

inline static constexpr unsigned int Class_1_503F91D5A9A9E6E5_TypeDefinitionIndex = 45796;

class Class_1_503F91D5A9A9E6E5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Struct_2_88A74A9E9AE5BA51 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_503F91D5A9A9E6E5__CTOR_OFFSET))(this);
	}
};
