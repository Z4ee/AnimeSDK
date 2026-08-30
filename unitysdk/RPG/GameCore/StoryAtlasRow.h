#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAFE7B0)
#define RPG_GAMECORE_STORYATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFEA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryAtlasRow_TypeDefinitionIndex = 12597;

	class StoryAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 Unlock; // 0x10
		::System::Int32 SortID; // 0x14
		::System::UInt32 AvatarID; // 0x18
		::RPG::Client::TextID Story; // 0x20
		::System::UInt32 StoryID; // 0x30
		::System::UInt32 ReplaceID; // 0x34

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
