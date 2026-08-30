#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BFA10)
#define RPG_GAMECORE_ROGUEAEONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C15E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonRow_TypeDefinitionIndex = 14659;

	class RogueAeonRow : public ::System::Object
	{
	public:
		::System::UInt32 AeonID; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::System::UInt32 Sort; // 0x18
		::System::UInt32 RogueBuffType; // 0x1C
		::RPG::Client::TextID EffectDesc2; // 0x20
		::System::UInt32 ArrivedTalkDialogueGroupID; // 0x30
		::System::UInt32 BattleEventBuffGroup; // 0x34
		::System::UInt32 RogueVersion; // 0x38
		::System::UInt32 BattleEventEnhanceBuffGroup; // 0x3C
		::System::UInt32 DisplayID; // 0x40
		::RPG::Client::TextID EffectDesc1; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAeonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
