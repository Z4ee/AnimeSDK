#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace System { class String; }

#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CF1C0)
#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CF170)
#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB6CF110)
#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCustomLockStateChange_TypeDefinitionIndex = 52393;

	class LevelCustomLockStateChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* LockName; // 0x18
		::System::Boolean IsLocked; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCustomLockStateChange* Init(::System::String* name, ::System::Boolean isLocked)
		{
			return ((::RPG::GameCore::LevelCustomLockStateChange*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_INIT_OFFSET))(this, name, isLocked);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
