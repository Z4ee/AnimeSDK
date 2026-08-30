#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE3C8A0)
#define RPG_GAMECORE_AVATARENHANCEDSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3CDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillRow_TypeDefinitionIndex = 12697;

	class AvatarEnhancedSkillRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DescBefore; // 0x10
		::RPG::Client::TextID SimpleDescAfter; // 0x20
		::System::UInt32 CommentIndex; // 0x30
		::System::UInt32 AvatarID; // 0x34
		::RPG::Client::TextID SimpleDescBefore; // 0x38
		::System::UInt32 SkillTreeID; // 0x48
		::System::UInt32 SkillID; // 0x4C
		::RPG::Client::TextID Comment01; // 0x50
		::RPG::Client::TextID Comment02; // 0x60
		::RPG::Client::TextID DescAfter; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEnhancedSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
