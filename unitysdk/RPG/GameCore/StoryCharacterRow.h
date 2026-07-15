#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STORYCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0C74A0)
#define RPG_GAMECORE_STORYCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C7EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryCharacterRow_TypeDefinitionIndex = 14578;

	class StoryCharacterRow : public ::System::Object
	{
	public:
		::System::String* StoryCharacterID; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* JsonPath; // 0x20
		::RPG::GameCore::NPCSubType SubType; // 0x28
		::System::UInt32 CharacterID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryCharacterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
