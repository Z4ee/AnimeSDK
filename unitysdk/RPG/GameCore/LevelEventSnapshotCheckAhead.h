#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE693360)
#define RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE693310)
#define RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD__CTOR_OFFSET UNITYSDK_OFFSET(0xE6933B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEventSnapshotCheckAhead_TypeDefinitionIndex = 56986;

	class LevelEventSnapshotCheckAhead : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
