#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GIFTDANMUCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5BB6F0)
#define RPG_GAMECORE_GIFTDANMUCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BB8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GiftDanmuContentRow_TypeDefinitionIndex = 14585;

	class GiftDanmuContentRow : public ::System::Object
	{
	public:
		::System::UInt32 SenderID; // 0x10
		::System::UInt32 Rarity; // 0x14
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID Content; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GIFTDANMUCONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GiftDanmuContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GiftDanmuContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GIFTDANMUCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
