#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }

#define CLASS_1_BDA2C084533125A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C367930)

inline static constexpr unsigned int Class_1_BDA2C084533125A6_TypeDefinitionIndex = 41236;

class Class_1_BDA2C084533125A6 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* GGHCKBHGHFC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDA2C084533125A6__CTOR_OFFSET))(this);
	}
};
