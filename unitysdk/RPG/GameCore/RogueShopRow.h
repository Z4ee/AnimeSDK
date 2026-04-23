#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueShopType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUESHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D68370)
#define RPG_GAMECORE_ROGUESHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D684E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueShopRow_TypeDefinitionIndex = 13891;

	class RogueShopRow : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::RPG::GameCore::RogueShopType ShopType; // 0x14
		::System::UInt32 RogueShopID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueShopRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueShopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
