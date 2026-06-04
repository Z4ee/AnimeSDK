#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERPERSONALCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A3D790)
#define RPG_GAMECORE_PLAYERPERSONALCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3DA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerPersonalCardRow_TypeDefinitionIndex = 13767;

	class PlayerPersonalCardRow : public ::System::Object
	{
	public:
		::System::String* ChatPrefabPath; // 0x10
		::System::String* SupportPrefabPath; // 0x18
		::System::String* CardPrefabPath; // 0x20
		::System::String* ReplaceIconPath; // 0x28
		::System::String* FriendPrefabPath; // 0x30
		::System::UInt32 ShowParam; // 0x38
		::System::UInt32 CardID; // 0x3C
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPERSONALCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerPersonalCardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerPersonalCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPERSONALCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
