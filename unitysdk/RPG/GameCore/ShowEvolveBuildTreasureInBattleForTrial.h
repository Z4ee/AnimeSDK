#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_METHOD_3_4AA6D99F37786B32_OFFSET UNITYSDK_OFFSET(0x176FA030)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_METHOD_3_50C9C2E033FDE585_OFFSET UNITYSDK_OFFSET(0x176FA0B0)
#define RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x176FA080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildTreasureInBattleForTrial_TypeDefinitionIndex = 20702;

	class ShowEvolveBuildTreasureInBattleForTrial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetGearID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* LevelMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AA6D99F37786B32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_METHOD_3_4AA6D99F37786B32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50C9C2E033FDE585(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDTREASUREINBATTLEFORTRIAL_METHOD_3_50C9C2E033FDE585_OFFSET))(a1, a2);
		}
	};
}
