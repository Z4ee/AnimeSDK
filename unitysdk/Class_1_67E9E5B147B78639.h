#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_67E9E5B147B78639_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16325DF0)
#define CLASS_1_67E9E5B147B78639_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16325DA0)
#define CLASS_1_67E9E5B147B78639__CTOR_OFFSET UNITYSDK_OFFSET(0x16325E40)

inline static constexpr unsigned int Class_1_67E9E5B147B78639_TypeDefinitionIndex = 56850;

class Class_1_67E9E5B147B78639 : public ::System::Object
{
public:
	::System::String* DHMDAEKJENF; // 0x10
	::RPG::GameCore::GameEntity* BDHFPPIGIAH; // 0x18
	::System::UInt32 GDBJDAOOCOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E9E5B147B78639__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E9E5B147B78639_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E9E5B147B78639_GETEVENTTYPE_OFFSET))(this);
	}
};
