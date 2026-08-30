#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_417;

#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2A7A0)
#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2A750)
#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRemoveChildModifierOfAbility_TypeDefinitionIndex = 57018;

	class LevelRemoveChildModifierOfAbility : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_417* AbilityInstance; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_417* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
