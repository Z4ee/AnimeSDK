#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_18;
namespace RPG::Client { class ChimeraDuelGameSessionItem; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CHECKCANAPPLYTOANY_OFFSET UNITYSDK_OFFSET(0x93A22B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x93A2150)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x93A2130)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_ITEM__OFFSET UNITYSDK_OFFSET(0x93A2120)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x93A07A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x93A2140)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93A2260)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x93A2250)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShopItem_TypeDefinitionIndex = 51400;

	class ChimeraDuelGameSessionShopItem : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionItem* _Item__k__BackingField; // 0x10
		::System::Boolean _IsLocked_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionItem* item, ::System::Boolean isLocked)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_OFFSET))(this, item, isLocked);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionShopItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_1_OFFSET))(this, other);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionItem* get_Item_()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_ITEM__OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_SET_ISLOCKED_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelGameSessionShopItem* Create(::Class_1_4CF8088A158DCE25_18* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopItem*(*)(::Class_1_4CF8088A158DCE25_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CREATE_OFFSET))(serverData);
		}

		::System::Boolean CheckCanApplyToAny(::RPG::Client::ChimeraDuelGameSessionTeam* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CHECKCANAPPLYTOANY_OFFSET))(this, team);
		}
	};
}
