#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSPECIALSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBD620)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBDC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSpecialSkillTreeRow_TypeDefinitionIndex = 11617;

	class AvatarSpecialSkillTreeRow : public ::System::Object
	{
	public:
		::System::String* AvatarImgPath; // 0x10
		::System::UInt32 ShowSkill; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::RPG::GameCore::AvatarSkillTreeAnchorType AnchorType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarSpecialSkillTreeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSpecialSkillTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
