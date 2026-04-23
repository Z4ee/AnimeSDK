#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STORYPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA7330)
#define RPG_GAMECORE_STORYPROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryPropRow_TypeDefinitionIndex = 14390;

	class StoryPropRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* StoryCharacterUniqueName; // 0x18
		::System::String* ConfigEntityPath; // 0x20
		::System::String* StoryCharacterModelPath; // 0x28
		::System::String* StoryCharacterID; // 0x30
		::System::UInt32 PropID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYPROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StoryPropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryPropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYPROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
