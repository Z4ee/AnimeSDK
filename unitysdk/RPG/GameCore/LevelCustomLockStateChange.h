#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace System { class String; }

#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD1B100)
#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD1B0B0)
#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1DD1B050)
#define RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1B150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCustomLockStateChange_TypeDefinitionIndex = 57025;

	class LevelCustomLockStateChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* LockName; // 0x18
		::System::Boolean IsLocked; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCustomLockStateChange* Init(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::LevelCustomLockStateChange*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCUSTOMLOCKSTATECHANGE_INIT_OFFSET))(this, a1, a2);
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
