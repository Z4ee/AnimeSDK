#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0AA54B8C745ADC79_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4BBAD0)
#define CLASS_1_0AA54B8C745ADC79_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA4BBA80)
#define CLASS_1_0AA54B8C745ADC79__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BBA70)

inline static constexpr unsigned int Class_1_0AA54B8C745ADC79_TypeDefinitionIndex = 52916;

class Class_1_0AA54B8C745ADC79 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AA54B8C745ADC79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA54B8C745ADC79_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA54B8C745ADC79_GETEVENTTYPE_OFFSET))(this);
	}
};
