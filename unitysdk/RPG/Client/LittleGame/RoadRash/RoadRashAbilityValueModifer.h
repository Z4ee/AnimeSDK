#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ERoadRashGameAbilityValueModifyType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYVALUEMODIFER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C49A0E0)
#define RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYVALUEMODIFER_METHOD_1_D59742BC11AE0DBF_OFFSET UNITYSDK_OFFSET(0x1C49A150)
#define RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYVALUEMODIFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49A1E0)

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int RoadRashAbilityValueModifer_TypeDefinitionIndex = 41273;

	class RoadRashAbilityValueModifer : public ::System::Object
	{
	public:
		::System::Int32 Priority; // 0x10
		::RPG::Client::ERoadRashGameAbilityValueModifyType Type; // 0x14
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYVALUEMODIFER__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYVALUEMODIFER_COMPARETO_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* Method_1_D59742BC11AE0DBF()
		{
			return ((::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYVALUEMODIFER_METHOD_1_D59742BC11AE0DBF_OFFSET))(this);
		}
	};
}
