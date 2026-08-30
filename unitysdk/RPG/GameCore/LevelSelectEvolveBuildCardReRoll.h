#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE699FE0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE699F90)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_INIT_OFFSET UNITYSDK_OFFSET(0xE699F40)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL__CTOR_OFFSET UNITYSDK_OFFSET(0xE69A030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildCardReRoll_TypeDefinitionIndex = 57004;

	class LevelSelectEvolveBuildCardReRoll : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildCardReRoll* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildCardReRoll*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
