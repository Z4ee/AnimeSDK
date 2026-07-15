#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE032A0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE03250)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_INIT_OFFSET UNITYSDK_OFFSET(0x1BE03200)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE032F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildGearLost_TypeDefinitionIndex = 54281;

	class LevelSelectEvolveBuildGearLost : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildGearLost* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildGearLost*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
