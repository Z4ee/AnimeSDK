#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYENERGYCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA9886F0)
#define RPG_GAMECORE_LEVELENTITYENERGYCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9886A0)
#define RPG_GAMECORE_LEVELENTITYENERGYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA988740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityEnergyChange_TypeDefinitionIndex = 45715;

	class LevelEntityEnergyChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::Int32 CurrentCount; // 0x18
		::System::Int32 MaxCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENERGYCHANGE__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENERGYCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENERGYCHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
