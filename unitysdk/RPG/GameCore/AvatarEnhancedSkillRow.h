#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9C880)
#define RPG_GAMECORE_AVATARENHANCEDSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9CD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillRow_TypeDefinitionIndex = 11675;

	class AvatarEnhancedSkillRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DescAfter; // 0x10
		::RPG::Client::TextID SimpleDescAfter; // 0x20
		::RPG::Client::TextID Comment01; // 0x30
		::RPG::Client::TextID Comment02; // 0x40
		::RPG::Client::TextID SimpleDescBefore; // 0x50
		::RPG::Client::TextID DescBefore; // 0x60
		::System::UInt32 CommentIndex; // 0x70
		::System::UInt32 SkillID; // 0x74
		::System::UInt32 AvatarID; // 0x78
		::System::UInt32 SkillTreeID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarEnhancedSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
