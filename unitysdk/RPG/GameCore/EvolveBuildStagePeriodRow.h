#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolvePeriodType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_73B429E1E9F270F4;
class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C064F20)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0658C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStagePeriodRow_TypeDefinitionIndex = 11030;

	class EvolveBuildStagePeriodRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CountdownList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SpecialMonsterScoreList; // 0x18
		::Il2CppArray<::Class_1_73B429E1E9F270F4*>* WeaknessList; // 0x20
		::Il2CppArray<::System::Single>* EmotionList; // 0x28
		::System::UInt32 StageID; // 0x30
		::System::UInt32 EventID; // 0x34
		::System::UInt32 WaveCount; // 0x38
		::RPG::GameCore::EvolvePeriodType PeriodRank; // 0x3C
		::System::UInt32 BattleArea; // 0x40
		::System::UInt32 PeriodScore; // 0x44
		::System::UInt32 StageScore; // 0x48
		::System::UInt32 Weight; // 0x4C
		::System::UInt32 StagePeriodID; // 0x50
		::RPG::GameCore::FixPoint DeadLinePosition; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildStagePeriodRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildStagePeriodRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
