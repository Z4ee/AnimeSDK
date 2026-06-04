#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CBA5AB92E154556__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4DDF0)

inline static constexpr unsigned int Class_1_6CBA5AB92E154556_TypeDefinitionIndex = 39529;

class Class_1_6CBA5AB92E154556 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_2; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CBA5AB92E154556__CTOR_OFFSET))(this);
	}
};
