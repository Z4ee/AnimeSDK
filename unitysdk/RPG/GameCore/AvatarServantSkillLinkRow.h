#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE50880)
#define RPG_GAMECORE_AVATARSERVANTSKILLLINKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE50A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillLinkRow_TypeDefinitionIndex = 12722;

	class AvatarServantSkillLinkRow : public ::System::Object
	{
	public:
		::System::String* TarotIconPath; // 0x10
		::System::String* TarotFigurePath; // 0x18
		::System::UInt32 Order; // 0x20
		::System::UInt32 LinkToAvatarID; // 0x24
		::System::UInt32 SkillID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLLINKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantSkillLinkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillLinkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
