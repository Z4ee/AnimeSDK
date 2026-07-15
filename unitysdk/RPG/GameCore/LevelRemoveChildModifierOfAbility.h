#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;

#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE029C0)
#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE02970)
#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE02960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRemoveChildModifierOfAbility_TypeDefinitionIndex = 54297;

	class LevelRemoveChildModifierOfAbility : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_382* AbilityInstance; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY__CTOR_OFFSET))(this, a1);
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
