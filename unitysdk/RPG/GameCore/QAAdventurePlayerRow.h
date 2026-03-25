#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_QAADVENTUREPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17574E60)
#define RPG_GAMECORE_QAADVENTUREPLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17575100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QAAdventurePlayerRow_TypeDefinitionIndex = 17480;

	class QAAdventurePlayerRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 AvatarID; // 0x14
		::System::String* PlayerName; // 0x18
		::System::String* PlayerPrefabPath; // 0x20
		::System::String* PlayerJsonPath; // 0x28
		::System::String* DefaultAvatarHeadIconPath; // 0x30
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QAADVENTUREPLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::QAAdventurePlayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QAAdventurePlayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QAADVENTUREPLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
