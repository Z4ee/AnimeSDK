#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4A4DF0)
#define RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A5590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonStoryConfigRow_TypeDefinitionIndex = 14262;

	class RogueAeonStoryConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::System::UInt32 AeonStoryID; // 0x18
		::System::UInt32 RogueAeonID; // 0x1C
		::RPG::Client::TextID AeonStory_Name; // 0x20
		::RPG::Client::TextID AeonStory; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAeonStoryConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonStoryConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
