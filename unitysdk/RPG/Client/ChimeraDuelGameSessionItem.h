#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_18;
class Class_1_FA4F4A67B1C04320_208;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelItemData; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CANAPPLYTO_OFFSET UNITYSDK_OFFSET(0x93A0170)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x93A00E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_2_OFFSET UNITYSDK_OFFSET(0x939EE90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x939EB60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x939F850)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x93A00C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x93A00B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93A0150)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x93A00D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionItem_TypeDefinitionIndex = 51389;

	class ChimeraDuelGameSessionItem : public ::System::Object
	{
	public:
		::System::UInt32 _ItemID_k__BackingField; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 uniqueID, ::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_OFFSET))(this, uniqueID, itemID);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM__CTOR_1_OFFSET))(this, other);
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

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create(::Class_1_FA4F4A67B1C04320_208* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::Class_1_FA4F4A67B1C04320_208*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create_1(::Class_1_4CF8088A158DCE25_18* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::Class_1_4CF8088A158DCE25_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_1_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionItem* Create_2(::System::UInt32 itemID)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CREATE_2_OFFSET))(itemID);
		}

		::System::Boolean CanApplyTo(::RPG::Client::ChimeraDuelGameSessionChimera* chimera)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONITEM_CANAPPLYTO_OFFSET))(this, chimera);
		}
	};
}
