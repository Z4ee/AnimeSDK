#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1867B180)
#define RPG_GAMECORE_ADVENTUREPLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1867B940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerRow_TypeDefinitionIndex = 11880;

	class AdventurePlayerRow : public ::System::Object
	{
	public:
		::System::String* PlayerJsonPath; // 0x10
		::System::String* PlayerPrefabPath; // 0x18
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x20
		::System::String* DefaultAvatarHeadIconPath; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID PlayerName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AdventurePlayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePlayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
