#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EE720)
#define RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EE6D0)
#define RPG_GAMECORE_LEVELEVENTSNAPSHOTCHECKAHEAD__CTOR_OFFSET UNITYSDK_OFFSET(0xE6EE770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEventSnapshotCheckAhead_TypeDefinitionIndex = 56807;

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
