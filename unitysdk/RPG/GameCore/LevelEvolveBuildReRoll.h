#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD245F0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD245A0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD24640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildReRoll_TypeDefinitionIndex = 57006;

	class LevelEvolveBuildReRoll : public ::Class_1_BF7A075734D15E98
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
