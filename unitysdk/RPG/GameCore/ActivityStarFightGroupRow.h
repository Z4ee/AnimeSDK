#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StarFightSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB0D8E0)
#define RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0DDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStarFightGroupRow_TypeDefinitionIndex = 11917;

	class ActivityStarFightGroupRow : public ::System::Object
	{
	public:
		::System::String* GroupPicPath; // 0x10
		::Il2CppArray<::System::UInt32>* EvaluateWave; // 0x18
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* ElementList; // 0x28
		::System::UInt32 MazeBuffID; // 0x30
		::RPG::GameCore::StarFightSeason Season; // 0x34
		::System::UInt32 GroupID; // 0x38
		::RPG::Client::TextID GroupTitle; // 0x40
		::System::UInt32 PerfectQuest; // 0x50
		::System::UInt32 PerfectWave; // 0x54
		::RPG::Client::TextID FightStageDesc; // 0x58
		::System::UInt32 ActivityModuleID; // 0x68
		::System::UInt32 TutorialGuideID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityStarFightGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityStarFightGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
