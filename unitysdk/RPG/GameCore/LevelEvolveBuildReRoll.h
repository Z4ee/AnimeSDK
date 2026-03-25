#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98A770)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98A720)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL__CTOR_OFFSET UNITYSDK_OFFSET(0xA98A7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildReRoll_TypeDefinitionIndex = 45722;

	class LevelEvolveBuildReRoll : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDREROLL__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
