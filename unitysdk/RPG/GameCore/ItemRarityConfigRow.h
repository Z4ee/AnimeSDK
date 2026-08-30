#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMRARITYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D230AA0)
#define RPG_GAMECORE_ITEMRARITYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D231210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRarityConfigRow_TypeDefinitionIndex = 13750;

	class ItemRarityConfigRow : public ::System::Object
	{
	public:
		::System::String* ItemShowBgPath; // 0x10
		::System::String* ItemRarityStarImgPath; // 0x18
		::System::String* FrameItemRarityBgPath; // 0x20
		::System::String* FrameItemRarityColor; // 0x28
		::System::String* LineItemRarityColor; // 0x30
		::System::String* FrameIconRarityPath; // 0x38
		::System::String* FrameItemRarityPath; // 0x40
		::System::String* AvatarShowBgPath; // 0x48
		::RPG::GameCore::ItemRarity Rarity; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemRarityConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRarityConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
