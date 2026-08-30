#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GIFTDANMUCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D144540)
#define RPG_GAMECORE_GIFTDANMUCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D144740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GiftDanmuContentRow_TypeDefinitionIndex = 15021;

	class GiftDanmuContentRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Content; // 0x10
		::System::UInt32 SenderID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 Rarity; // 0x28

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
