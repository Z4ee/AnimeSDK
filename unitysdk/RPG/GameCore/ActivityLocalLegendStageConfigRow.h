#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD95760)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD95B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendStageConfigRow_TypeDefinitionIndex = 11817;

	class ActivityLocalLegendStageConfigRow : public ::System::Object
	{
	public:
		::System::String* ManikinConfigPath; // 0x10
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x18
		::System::String* ManikinPrefabPath; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x28
		::System::UInt32 EventID; // 0x30
		::RPG::GameCore::ActivityLocalLegendDifficulty DifficultyLevel; // 0x34
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 BattleAreaID; // 0x3C
		::System::UInt32 UnlockQuest; // 0x40
		::RPG::Client::TextID FearlessStageMechanism; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
