#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F4670)
#define RPG_GAMECORE_ROGUEDLCAEONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175F5360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonRow_TypeDefinitionIndex = 13465;

	class RogueDLCAeonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* EffectParam4; // 0x10
		::Il2CppArray<::System::UInt32>* EffectParam1; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x20
		::Il2CppArray<::System::UInt32>* EffectParam2; // 0x28
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x30
		::System::String* EntrancePrefabPath; // 0x38
		::Il2CppArray<::System::UInt32>* EffectParam3; // 0x40
		::System::UInt32 RogueBuffType; // 0x48
		::System::UInt32 BattleEventEnhanceBuffGroup; // 0x4C
		::System::UInt32 RogueAeonDisplayID; // 0x50
		::System::UInt32 BattleEventBuffGroup; // 0x54
		::RPG::GameCore::ModifierEffectType EffectType2; // 0x58
		::RPG::GameCore::ModifierEffectType EffectType3; // 0x5C
		::RPG::Client::TextID EffectDesc2; // 0x60
		::RPG::Client::TextID EffectDesc1; // 0x70
		::RPG::Client::TextID PlayShortDesc; // 0x80
		::System::UInt32 AeonDiceID; // 0x90
		::RPG::GameCore::ModifierEffectType EffectType1; // 0x94
		::System::UInt32 Sort; // 0x98
		::System::UInt32 UnlockID; // 0x9C
		::System::UInt32 AeonID; // 0xA0
		::RPG::Client::TextID EffectDesc3; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCAeonRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
