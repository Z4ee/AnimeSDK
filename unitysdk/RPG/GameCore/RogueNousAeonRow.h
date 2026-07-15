#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSAEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1695B0)
#define RPG_GAMECORE_ROGUENOUSAEONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D169DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonRow_TypeDefinitionIndex = 14334;

	class RogueNousAeonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectParam1; // 0x10
		::RPG::Client::TextID EffectDesc1; // 0x18
		::System::UInt32 BattleEventBuffGroup; // 0x28
		::System::UInt32 AeonID; // 0x2C
		::RPG::GameCore::ModifierEffectType EffectType1; // 0x30
		::System::UInt32 Sort; // 0x34
		::System::UInt32 RogueBuffType; // 0x38
		::System::UInt32 BattleEventEnhanceBuffGroup; // 0x3C
		::System::UInt32 UnlockID; // 0x40
		::System::UInt32 DisplayID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousAeonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousAeonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
