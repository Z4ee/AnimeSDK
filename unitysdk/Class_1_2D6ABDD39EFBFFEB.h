#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2D6ABDD39EFBFFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4DED0)

inline static constexpr unsigned int Class_1_2D6ABDD39EFBFFEB_TypeDefinitionIndex = 39697;

class Class_1_2D6ABDD39EFBFFEB : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::RPG::Client::LittleGame::Marble::MarbleEventType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D6ABDD39EFBFFEB__CTOR_OFFSET))(this);
	}
};
