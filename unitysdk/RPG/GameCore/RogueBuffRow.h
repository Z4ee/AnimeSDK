#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D913620)
#define RPG_GAMECORE_ROGUEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D913FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffRow_TypeDefinitionIndex = 14566;

	class RogueBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::System::String* AeonCrossIcon; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::System::Boolean IsShow; // 0x28
		::System::UInt32 RogueBuffType; // 0x2C
		::RPG::Client::TextID HandbookUnlockDesc; // 0x30
		::System::UInt32 MazeBuffID; // 0x40
		::System::UInt32 ActivityModuleID; // 0x44
		::System::UInt32 AeonID; // 0x48
		::System::UInt32 MazeBuffLevel; // 0x4C
		::RPG::GameCore::RogueBuffAeonType BattleEventBuffType; // 0x50
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x54
		::System::UInt32 RogueVersion; // 0x58
		::System::UInt32 RogueBuffTag; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
