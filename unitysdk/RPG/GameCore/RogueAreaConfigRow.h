#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D910E60)
#define RPG_GAMECORE_ROGUEAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9119B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAreaConfigRow_TypeDefinitionIndex = 14540;

	class RogueAreaConfigRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ScoreMap; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MapDisplayItemList; // 0x28
		::Il2CppArray<::System::UInt32>* AreaEnvironment; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap2; // 0x38
		::System::String* AreaTipsIcon; // 0x40
		::System::String* AreaIcon; // 0x48
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ChestDisplayItemList; // 0x50
		::System::String* AreaFigure; // 0x58
		::System::UInt32 Difficulty; // 0x60
		::System::UInt32 AreaProgress; // 0x64
		::System::Boolean isActivityArea; // 0x68
		::RPG::Client::TextID AreaNameID; // 0x70
		::System::UInt32 MonsterEliteDropDisplayID; // 0x80
		::System::UInt32 RecommendLevel; // 0x84
		::System::UInt32 RecommendSkillTreePoints; // 0x88
		::System::UInt32 UnlockID; // 0x8C
		::System::UInt32 RogueAreaID; // 0x90
		::System::UInt32 FirstReward; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAreaConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
