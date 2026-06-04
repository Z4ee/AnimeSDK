#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE46820)
#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE467D0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCE46870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildSkip_TypeDefinitionIndex = 53070;

	class LevelEvolveBuildSkip : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
