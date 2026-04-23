#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D8820)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D87D0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D8870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildReRoll_TypeDefinitionIndex = 52374;

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
