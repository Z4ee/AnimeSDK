#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA8E1A30)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA8E19F0)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA8E19A0)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E1A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityAnimStateChange_TypeDefinitionIndex = 45578;

	class EntityAnimStateChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EntityAnimStateChange* Init(::System::UInt32 nEntityRuntimeID)
		{
			return ((::RPG::GameCore::EntityAnimStateChange*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET))(this, nEntityRuntimeID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
