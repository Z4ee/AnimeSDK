#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMATCHPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD1C3F0)
#define RPG_GAMECORE_MARBLEMATCHPLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1C8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchPlayerRow_TypeDefinitionIndex = 11461;

	class MarbleMatchPlayerRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* HighNegativeEmojiList; // 0x18
		::Il2CppArray<::System::UInt32>* LowPositiveEmojiList; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::String* ImagePath; // 0x30
		::Il2CppArray<::System::UInt32>* HighPositiveEmojiList; // 0x38
		::Il2CppArray<::System::UInt32>* LowNegativeEmojiList; // 0x40
		::Il2CppArray<::System::UInt32>* PlayerActionEmojiList; // 0x48
		::RPG::Client::TextID Name; // 0x50
		::RPG::Client::TextID Desc; // 0x60
		::System::UInt32 SealGroupID; // 0x70
		::System::UInt32 ID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHPLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMatchPlayerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchPlayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHPLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
