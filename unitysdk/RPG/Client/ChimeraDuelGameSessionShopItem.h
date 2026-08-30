#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_26;
namespace RPG::Client { class ChimeraDuelGameSessionItem; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CHECKCANAPPLYTOANY_OFFSET UNITYSDK_OFFSET(0xCBDF080)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xCBDEF20)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xCBDEF00)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_ITEM__OFFSET UNITYSDK_OFFSET(0xCBDEEF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCBDC530)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xCBDEF10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCBDF030)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCBDF020)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShopItem_TypeDefinitionIndex = 63392;

	class ChimeraDuelGameSessionShopItem : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionItem* _Item__k__BackingField; // 0x10
		::System::Boolean _IsLocked_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionShopItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_SET_ISLOCKED_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionShopItem* Create(::Class_1_21C7581DFE99F091_26* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopItem*(*)(::Class_1_21C7581DFE99F091_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CREATE_OFFSET))(a1);
		}

		::System::Boolean CheckCanApplyToAny(::RPG::Client::ChimeraDuelGameSessionTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPITEM_CHECKCANAPPLYTOANY_OFFSET))(this, a1);
		}
	};
}
