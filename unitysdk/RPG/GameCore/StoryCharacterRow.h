#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STORYCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1777F770)
#define RPG_GAMECORE_STORYCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1777FD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryCharacterRow_TypeDefinitionIndex = 13913;

	class StoryCharacterRow : public ::System::Object
	{
	public:
		::System::String* ConfigEntityPath; // 0x10
		::System::String* StoryCharacterID; // 0x18
		::System::String* JsonPath; // 0x20
		::RPG::GameCore::NPCSubType SubType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StoryCharacterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
