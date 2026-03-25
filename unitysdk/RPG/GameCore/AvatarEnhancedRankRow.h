#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9C4C0)
#define RPG_GAMECORE_AVATARENHANCEDRANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9C870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedRankRow_TypeDefinitionIndex = 11679;

	class AvatarEnhancedRankRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Comment02; // 0x10
		::RPG::Client::TextID RankDescAfter; // 0x20
		::System::UInt32 CommentIndex; // 0x30
		::System::UInt32 RankID; // 0x34
		::RPG::Client::TextID RankDescBefore; // 0x38
		::System::UInt32 AvatarID; // 0x48
		::RPG::Client::TextID Comment01; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDRANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarEnhancedRankRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDRANKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
