#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D570BF0)
#define RPG_GAMECORE_STORYATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D570E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryAtlasRow_TypeDefinitionIndex = 12597;

	class StoryAtlasRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Story; // 0x10
		::System::UInt32 AvatarID; // 0x20
		::System::Int32 SortID; // 0x24
		::System::UInt32 StoryID; // 0x28
		::System::UInt32 ReplaceID; // 0x2C
		::System::UInt32 Unlock; // 0x30

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
