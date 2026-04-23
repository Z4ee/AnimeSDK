#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C0030)
#define RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186C03E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillTreeRow_TypeDefinitionIndex = 12086;

	class AvatarEnhancedSkillTreeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DescAfter; // 0x10
		::System::UInt32 CommentIndex; // 0x20
		::System::UInt32 AvatarID; // 0x24
		::System::UInt32 SkillTreeID; // 0x28
		::RPG::Client::TextID DescBefore; // 0x30
		::RPG::Client::TextID Comment02; // 0x40
		::RPG::Client::TextID Comment01; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
