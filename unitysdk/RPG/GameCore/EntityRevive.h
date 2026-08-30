#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_125;

#define RPG_GAMECORE_ENTITYREVIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x11554F00)
#define RPG_GAMECORE_ENTITYREVIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11554EC0)
#define RPG_GAMECORE_ENTITYREVIVE_GET_ISFROMDEATH_OFFSET UNITYSDK_OFFSET(0x11554F50)
#define RPG_GAMECORE_ENTITYREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11554EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRevive_TypeDefinitionIndex = 56860;

	class EntityRevive : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_125* Param; // 0x10
		::RPG::GameCore::AliveState FromState; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::AliveState a2, ::Class_1_43BD383C98B4C0C5_125* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_125*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYREVIVE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYREVIVE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYREVIVE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsFromDeath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYREVIVE_GET_ISFROMDEATH_OFFSET))(this);
		}
	};
}
