#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19406D80)
#define RPG_GAMECORE_ACTIVITYSUMMONLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19407100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonLevelRow_TypeDefinitionIndex = 11833;

	class ActivitySummonLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x18
		::Il2CppArray<::System::UInt32>* MasterAvatarList; // 0x20
		::Il2CppArray<::System::UInt32>* ReplaceMasterAvatarList; // 0x28
		::Il2CppArray<::System::UInt32>* ReplaceTrialAvatarList; // 0x30
		::System::String* ImagePath; // 0x38
		::System::UInt32 EventID; // 0x40
		::System::UInt32 UIEnterBattleAreaID; // 0x44
		::System::UInt32 GroupID; // 0x48
		::RPG::GameCore::ActivitySummonDifficulty DifficultyLevel; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivitySummonLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
