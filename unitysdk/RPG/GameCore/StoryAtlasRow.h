#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0C6D80)
#define RPG_GAMECORE_STORYATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C7000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryAtlasRow_TypeDefinitionIndex = 12208;

	class StoryAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 StoryID; // 0x10
		::System::UInt32 Unlock; // 0x14
		::System::UInt32 AvatarID; // 0x18
		::System::UInt32 ReplaceID; // 0x1C
		::System::Int32 SortID; // 0x20
		::RPG::Client::TextID Story; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryAtlasRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
