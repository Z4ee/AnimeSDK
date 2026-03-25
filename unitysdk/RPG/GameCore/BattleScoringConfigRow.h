#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleScoringType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLESCORINGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE1170)
#define RPG_GAMECORE_BATTLESCORINGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE1A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringConfigRow_TypeDefinitionIndex = 11762;

	class BattleScoringConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleScoringDisplayType>* DisplayTypeList; // 0x10
		::Il2CppArray<::System::Single>* ParamList; // 0x18
		::System::String* AbilityName; // 0x20
		::System::UInt32 BonusScore; // 0x28
		::System::UInt32 GameModeGroup; // 0x2C
		::RPG::GameCore::BattleScoringType ScoringType; // 0x30
		::System::UInt32 ScoringID; // 0x34
		::RPG::Client::TextID BonusDesc; // 0x38
		::RPG::Client::TextID BonusSimpleDesc; // 0x48
		::RPG::Client::TextID ScoreRuleDesc; // 0x58

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
