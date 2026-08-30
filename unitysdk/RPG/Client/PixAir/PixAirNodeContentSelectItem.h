#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirContentRarity.h"
#include "unitysdk/RPG/GameCore/PixAirContentType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirTagDisplayData; }
namespace RPG::GameCore { class PixAirContentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xDB190E0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATEBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xDB19740)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATEEVENTITEM_OFFSET UNITYSDK_OFFSET(0xDB19630)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATESHOPITEM_OFFSET UNITYSDK_OFFSET(0xDB193F0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATESUPPLYITEM_OFFSET UNITYSDK_OFFSET(0xDB19510)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDB19850)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__GENERATECONTENTDESC_OFFSET UNITYSDK_OFFSET(0xDB19860)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeContentSelectItem_TypeDefinitionIndex = 78811;

	class PixAirNodeContentSelectItem : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirTagDisplayData* Tag; // 0x10
		::System::String* ContentDesc; // 0x18
		::RPG::Client::TextID ContentName; // 0x20
		::RPG::GameCore::PixAirContentType ContentType; // 0x30
		::RPG::GameCore::PixAirContentRarity Rarity; // 0x34
		::System::UInt32 ContentID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirNodeContentSelectItem* Create(::System::UInt32 a1, ::RPG::GameCore::PixAirContentType a2)
		{
			return ((::RPG::Client::PixAir::PixAirNodeContentSelectItem*(*)(::System::UInt32, ::RPG::GameCore::PixAirContentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PixAir::PixAirNodeContentSelectItem* _CreateShopItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeContentSelectItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATESHOPITEM_OFFSET))(a1);
		}

		static ::RPG::Client::PixAir::PixAirNodeContentSelectItem* _CreateSupplyItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeContentSelectItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATESUPPLYITEM_OFFSET))(a1);
		}

		static ::RPG::Client::PixAir::PixAirNodeContentSelectItem* _CreateEventItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeContentSelectItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATEEVENTITEM_OFFSET))(a1);
		}

		static ::RPG::Client::PixAir::PixAirNodeContentSelectItem* _CreateBattleItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeContentSelectItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__CREATEBATTLEITEM_OFFSET))(a1);
		}

		static ::System::String* _GenerateContentDesc(::RPG::GameCore::PixAirContentConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::PixAirContentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTITEM__GENERATECONTENTDESC_OFFSET))(a1);
		}
	};
}
