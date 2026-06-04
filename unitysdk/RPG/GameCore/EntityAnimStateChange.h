#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCD96100)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCD960C0)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCD96070)
#define RPG_GAMECORE_ENTITYANIMSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD96150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityAnimStateChange_TypeDefinitionIndex = 52925;

	class EntityAnimStateChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EntityAnimStateChange* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EntityAnimStateChange*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYANIMSTATECHANGE_INIT_OFFSET))(this, a1);
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
