#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2D6ABDD39EFBFFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86930)

inline static constexpr unsigned int Class_1_2D6ABDD39EFBFFEB_TypeDefinitionIndex = 41444;

class Class_1_2D6ABDD39EFBFFEB : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Marble::MarbleEventType LAOACNPDOLD; // 0x10
	::System::Boolean CLIIGEPCNDE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D6ABDD39EFBFFEB__CTOR_OFFSET))(this);
	}
};
