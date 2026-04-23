#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18620E40)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186211F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendStageConfigRow_TypeDefinitionIndex = 11281;

	class ActivityLocalLegendStageConfigRow : public ::System::Object
	{
	public:
		::System::String* ManikinPrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x20
		::System::String* ManikinConfigPath; // 0x28
		::RPG::GameCore::ActivityLocalLegendDifficulty DifficultyLevel; // 0x30
		::System::UInt32 EventID; // 0x34
		::System::UInt32 UnlockQuest; // 0x38
		::RPG::Client::TextID FearlessStageMechanism; // 0x40
		::System::UInt32 GroupID; // 0x50
		::System::UInt32 BattleAreaID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
