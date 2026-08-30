#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_24A439989159AC57_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18A14AE0)
#define CLASS_1_24A439989159AC57_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18A14A90)
#define CLASS_1_24A439989159AC57__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14B30)

inline static constexpr unsigned int Class_1_24A439989159AC57_TypeDefinitionIndex = 56855;

class Class_1_24A439989159AC57 : public ::System::Object
{
public:
	::System::String* KLHGAHCLCKA; // 0x10
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24A439989159AC57__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24A439989159AC57_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24A439989159AC57_GETEVENTTYPE_OFFSET))(this);
	}
};
