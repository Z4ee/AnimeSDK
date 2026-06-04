#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_22;
class Class_1_D17272E82AE804C2_229;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelItemData; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CANAPPLYTO_OFFSET UNITYSDK_OFFSET(0xB68B9E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB68B950)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_2_OFFSET UNITYSDK_OFFSET(0xB68A5E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB68A2A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xB68AF30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB68B880)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB68B870)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB68B9C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB68B940)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionItem_TypeDefinitionIndex = 59257;

	class ChimeraDuelGameSessionItem : public ::System::Object
	{
	public:
		::System::UInt32 _ItemID_k__BackingField; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelItemData* get_ItemData()
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMDATA_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create(::Class_1_D17272E82AE804C2_229* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::Class_1_D17272E82AE804C2_229*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create_1(::Class_1_21C7581DFE99F091_22* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::Class_1_21C7581DFE99F091_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create_2(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_2_OFFSET))(a1);
		}

		::System::Boolean CanApplyTo(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CANAPPLYTO_OFFSET))(this, a1);
		}
	};
}
