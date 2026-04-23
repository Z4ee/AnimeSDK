#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMATCHPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA02A0)
#define RPG_GAMECORE_MARBLEMATCHPLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA0780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchPlayerRow_TypeDefinitionIndex = 11314;

	class MarbleMatchPlayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LowPositiveEmojiList; // 0x10
		::System::String* PrefabPath; // 0x18
		::Il2CppArray<::System::UInt32>* HighNegativeEmojiList; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* PlayerActionEmojiList; // 0x30
		::System::String* ImagePath; // 0x38
		::Il2CppArray<::System::UInt32>* LowNegativeEmojiList; // 0x40
		::Il2CppArray<::System::UInt32>* HighPositiveEmojiList; // 0x48
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 ID; // 0x60
		::System::UInt32 SealGroupID; // 0x64
		::RPG::Client::TextID Desc; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHPLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchPlayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchPlayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHPLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
