#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_25A644897493E247_CLASS_1_29EC1EA5C1BF55F8__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AA110)

inline static constexpr unsigned int Class_2_25A644897493E247_Class_1_29EC1EA5C1BF55F8_TypeDefinitionIndex = 58566;

class Class_2_25A644897493E247_Class_1_29EC1EA5C1BF55F8 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_CLASS_1_29EC1EA5C1BF55F8__CTOR_OFFSET))(this);
	}
};
