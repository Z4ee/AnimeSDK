#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA990E60)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA990E10)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_INIT_OFFSET UNITYSDK_OFFSET(0xA990DC0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL__CTOR_OFFSET UNITYSDK_OFFSET(0xA990EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildCardReRoll_TypeDefinitionIndex = 45720;

	class LevelSelectEvolveBuildCardReRoll : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildCardReRoll* Init(::System::UInt32 nIndex)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildCardReRoll*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDCARDREROLL_INIT_OFFSET))(this, nIndex);
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
