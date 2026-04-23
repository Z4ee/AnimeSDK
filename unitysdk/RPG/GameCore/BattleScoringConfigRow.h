#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleScoringType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLESCORINGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18704B90)
#define RPG_GAMECORE_BATTLESCORINGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18705460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringConfigRow_TypeDefinitionIndex = 12174;

	class BattleScoringConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParamList; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::BattleScoringDisplayType>* DisplayTypeList; // 0x20
		::RPG::Client::TextID BonusDesc; // 0x28
		::RPG::Client::TextID BonusSimpleDesc; // 0x38
		::RPG::Client::TextID ScoreRuleDesc; // 0x48
		::System::UInt32 ScoringID; // 0x58
		::System::UInt32 BonusScore; // 0x5C
		::System::UInt32 GameModeGroup; // 0x60
		::RPG::GameCore::BattleScoringType ScoringType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleScoringConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleScoringConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
