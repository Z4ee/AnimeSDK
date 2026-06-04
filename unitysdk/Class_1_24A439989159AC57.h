#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_24A439989159AC57_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x13CAA440)
#define CLASS_1_24A439989159AC57_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x13CAA3F0)
#define CLASS_1_24A439989159AC57__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAA490)

inline static constexpr unsigned int Class_1_24A439989159AC57_TypeDefinitionIndex = 52922;

class Class_1_24A439989159AC57 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

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
