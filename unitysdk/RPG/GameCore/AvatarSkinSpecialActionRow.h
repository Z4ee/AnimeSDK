#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKINSPECIALACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBCB30)
#define RPG_GAMECORE_AVATARSKINSPECIALACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBCCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinSpecialActionRow_TypeDefinitionIndex = 11601;

	class AvatarSkinSpecialActionRow : public ::System::Object
	{
	public:
		::System::String* SkinSpecialActionPrefabPath; // 0x10
		::System::String* SpecialActionPrefabPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 SkinID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINSPECIALACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarSkinSpecialActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkinSpecialActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINSPECIALACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
