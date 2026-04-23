#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_103;

#define RPG_GAMECORE_ENTITYREVIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB659CC0)
#define RPG_GAMECORE_ENTITYREVIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB659C80)
#define RPG_GAMECORE_ENTITYREVIVE_GET_ISFROMDEATH_OFFSET UNITYSDK_OFFSET(0xB659D10)
#define RPG_GAMECORE_ENTITYREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB659C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRevive_TypeDefinitionIndex = 52230;

	class EntityRevive : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_103* Param; // 0x10
		::System::UInt32 _EntityRuntimeID; // 0x18
		::RPG::GameCore::AliveState FromState; // 0x1C

		::System::Void _ctor(::System::UInt32 nEntityRuntimeID, ::RPG::GameCore::AliveState fromState, ::Class_1_43BD383C98B4C0C5_103* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_103*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYREVIVE__CTOR_OFFSET))(this, nEntityRuntimeID, fromState, param);
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
