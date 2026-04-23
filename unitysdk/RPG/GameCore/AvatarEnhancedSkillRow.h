#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186BFB10)
#define RPG_GAMECORE_AVATARENHANCEDSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186C0020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillRow_TypeDefinitionIndex = 12084;

	class AvatarEnhancedSkillRow : public ::System::Object
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::System::UInt32 CommentIndex; // 0x14
		::RPG::Client::TextID DescAfter; // 0x18
		::RPG::Client::TextID DescBefore; // 0x28
		::RPG::Client::TextID Comment01; // 0x38
		::RPG::Client::TextID SimpleDescBefore; // 0x48
		::System::UInt32 AvatarID; // 0x58
		::System::UInt32 SkillTreeID; // 0x5C
		::RPG::Client::TextID SimpleDescAfter; // 0x60
		::RPG::Client::TextID Comment02; // 0x70

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
