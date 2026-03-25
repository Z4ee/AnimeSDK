#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175E5B70)
#define RPG_GAMECORE_ROGUEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175E64F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffRow_TypeDefinitionIndex = 13459;

	class RogueBuffRow : public ::System::Object
	{
	public:
		::System::String* AeonCrossIcon; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x20
		::System::UInt32 RogueBuffTag; // 0x28
		::System::UInt32 MazeBuffID; // 0x2C
		::RPG::GameCore::RogueBuffAeonType BattleEventBuffType; // 0x30
		::System::UInt32 RogueBuffType; // 0x34
		::System::UInt32 MazeBuffLevel; // 0x38
		::System::Boolean IsShow; // 0x3C
		::System::UInt32 AeonID; // 0x40
		::System::UInt32 ActivityModuleID; // 0x44
		::RPG::Client::TextID HandbookUnlockDesc; // 0x48
		::System::UInt32 RogueVersion; // 0x58
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
