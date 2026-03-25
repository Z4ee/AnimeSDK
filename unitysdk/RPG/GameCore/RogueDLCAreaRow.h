#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ChessRogueAreaGroupID.h"
#include "unitysdk/RPG/GameCore/ChessRogueDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_E71924F20B00CC55_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F6DC0)
#define RPG_GAMECORE_ROGUEDLCAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175F78A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAreaRow_TypeDefinitionIndex = 13491;

	class RogueDLCAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x10
		::Il2CppArray<::System::UInt32>* DifficultyID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x20
		::Il2CppArray<::Class_1_E71924F20B00CC55_1*>* AreaScoreMap; // 0x28
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x30
		::System::UInt32 FirstReward; // 0x38
		::System::UInt32 MonsterEliteDropDisplayID; // 0x3C
		::System::UInt32 RecommendLevel; // 0x40
		::RPG::GameCore::ChessRogueDifficultyType Difficulty; // 0x44
		::System::UInt32 AreaID; // 0x48
		::RPG::GameCore::ChessRogueAreaGroupID AreaGroupID; // 0x4C
		::RPG::GameCore::RogueSubMode SubType; // 0x50
		::System::UInt32 UnlockID; // 0x54
		::RPG::Client::TextID AreaDescID; // 0x58
		::System::Boolean IsHard; // 0x68
		::RPG::Client::TextID AreaNameID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCAreaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
