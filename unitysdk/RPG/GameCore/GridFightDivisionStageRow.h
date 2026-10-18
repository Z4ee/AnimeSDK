#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D72A1A0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D72ACC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionStageRow_TypeDefinitionIndex = 13609;

	class GridFightDivisionStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* UniqueEnvironmentDescList; // 0x10
		::Il2CppArray<::System::String*>* EnvironmentDescList; // 0x18
		::Il2CppArray<::System::UInt32>* AffixChooseNumList; // 0x20
		::System::String* JsonPath; // 0x28
		::Il2CppArray<::System::UInt32>* EnvironmentBuffList; // 0x30
		::RPG::GameCore::FixPoint LevelBaseAttackMultiRatio; // 0x38
		::System::UInt32 EnemyHardLevel; // 0x40
		::System::UInt32 EnemyDifficultyLevel; // 0x44
		::System::UInt32 WeeklyScoreModify; // 0x48
		::System::UInt32 BinaryNodeDiffAddRule; // 0x4C
		::RPG::Client::TextID EnvironmentDesc; // 0x50
		::RPG::GameCore::FixPoint LevelBaseHPMultiRatio; // 0x60
		::System::UInt32 OCScoreRule; // 0x68
		::System::UInt32 ExpModify; // 0x6C
		::System::UInt32 ScoreRule; // 0x70
		::System::UInt32 DivisionID; // 0x74
		::System::UInt32 SeasonID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDivisionStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDivisionStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
