#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB0F800)
#define RPG_GAMECORE_ACTIVITYSUMMONLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonLevelRow_TypeDefinitionIndex = 11933;

	class ActivitySummonLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ReplaceMasterAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* MasterAvatarList; // 0x28
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x30
		::Il2CppArray<::System::UInt32>* ReplaceTrialAvatarList; // 0x38
		::System::UInt32 EventID; // 0x40
		::RPG::GameCore::ActivitySummonDifficulty DifficultyLevel; // 0x44
		::System::UInt32 GroupID; // 0x48
		::System::UInt32 UIEnterBattleAreaID; // 0x4C

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
