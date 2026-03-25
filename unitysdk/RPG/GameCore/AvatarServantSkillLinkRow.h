#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FB28E0)
#define RPG_GAMECORE_AVATARSERVANTSKILLLINKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB2AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillLinkRow_TypeDefinitionIndex = 11697;

	class AvatarServantSkillLinkRow : public ::System::Object
	{
	public:
		::System::String* TarotFigurePath; // 0x10
		::System::String* TarotIconPath; // 0x18
		::System::UInt32 LinkToAvatarID; // 0x20
		::System::UInt32 SkillID; // 0x24
		::System::UInt32 Order; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLLINKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarServantSkillLinkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillLinkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
