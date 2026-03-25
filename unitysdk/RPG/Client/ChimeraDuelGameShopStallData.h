#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_17;
class Class_1_4CF8088A158DCE25_18;
namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GETLEFTSLOTINDEXOFBONUSCHIMERAPAIR_OFFSET UNITYSDK_OFFSET(0x93A5C80)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_BONUSCHIMERAPAIRCOUNT_OFFSET UNITYSDK_OFFSET(0x93A5C30)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_CHIMERASLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x93A59D0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_ITEMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x93A5B40)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVECHIMERA_OFFSET UNITYSDK_OFFSET(0x93A6730)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x93A69F0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERALOCKED_OFFSET UNITYSDK_OFFSET(0x93A6B50)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERAS_OFFSET UNITYSDK_OFFSET(0x93A5CF0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x93A6C50)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMS_OFFSET UNITYSDK_OFFSET(0x93A6210)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERAATSLOT_OFFSET UNITYSDK_OFFSET(0x93A5A20)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERA_OFFSET UNITYSDK_OFFSET(0x93A5AC0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETITEMATSLOT_OFFSET UNITYSDK_OFFSET(0x93A5B90)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93A55C0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93A53A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameShopStallData_TypeDefinitionIndex = 51401;

	class ChimeraDuelGameShopStallData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SlottedChimeras; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SlottedItems; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>* _Items; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>* _Chimeras; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _BonusChimeraPairLeftSlotMarkers; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameShopStallData* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_1_OFFSET))(this, other);
		}

		::System::Int32 get_ChimeraSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_CHIMERASLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* TryGetChimeraAtSlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERAATSLOT_OFFSET))(this, slotIndex);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* TryGetChimera(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERA_OFFSET))(this, uniqueID);
		}

		::System::Int32 get_ItemSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_ITEMSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionShopItem* TryGetItemAtSlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETITEMATSLOT_OFFSET))(this, slotIndex);
		}

		::System::Int32 get_BonusChimeraPairCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_BONUSCHIMERAPAIRCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLeftSlotIndexOfBonusChimeraPair(::System::Int32 pairIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GETLEFTSLOTINDEXOFBONUSCHIMERAPAIR_OFFSET))(this, pairIndex);
		}

		::System::Void SetChimeras(::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_17*>* chimeras)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_17*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERAS_OFFSET))(this, chimeras);
		}

		::System::Void SetItems(::System::Int32 itemMinSlotCount, ::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_18*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Class_1_4CF8088A158DCE25_18*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMS_OFFSET))(this, itemMinSlotCount, items);
		}

		::System::Void RemoveChimera(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVECHIMERA_OFFSET))(this, uniqueID);
		}

		::System::Void RemoveItem(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVEITEM_OFFSET))(this, uniqueID);
		}

		::System::Void SetChimeraLocked(::System::UInt32 uniqueID, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERALOCKED_OFFSET))(this, uniqueID, locked);
		}

		::System::Void SetItemLocked(::System::UInt32 uniqueID, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMLOCKED_OFFSET))(this, uniqueID, locked);
		}
	};
}
