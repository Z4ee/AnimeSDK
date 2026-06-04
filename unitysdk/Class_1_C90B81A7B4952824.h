#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C90B81A7B4952824_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xD7EA6A0)
#define CLASS_1_C90B81A7B4952824_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD7EA650)
#define CLASS_1_C90B81A7B4952824__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EA6F0)

inline static constexpr unsigned int Class_1_C90B81A7B4952824_TypeDefinitionIndex = 52919;

class Class_1_C90B81A7B4952824 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C90B81A7B4952824__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C90B81A7B4952824_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C90B81A7B4952824_GETEVENTTYPE_OFFSET))(this);
	}
};
