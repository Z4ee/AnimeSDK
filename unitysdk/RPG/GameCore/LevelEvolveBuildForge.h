#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D8650)
#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D8600)
#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_INIT_OFFSET UNITYSDK_OFFSET(0xB6D85C0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D86A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildForge_TypeDefinitionIndex = 52377;

	class LevelEvolveBuildForge : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildForge* Init()
		{
			return ((::RPG::GameCore::LevelEvolveBuildForge*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
