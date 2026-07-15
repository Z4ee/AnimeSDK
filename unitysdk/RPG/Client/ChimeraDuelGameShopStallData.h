#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_25;
class Class_1_21C7581DFE99F091_26;
namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GETLEFTSLOTINDEXOFBONUSCHIMERAPAIR_OFFSET UNITYSDK_OFFSET(0x19AE3A30)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_BONUSCHIMERAPAIRCOUNT_OFFSET UNITYSDK_OFFSET(0x19AE39E0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_CHIMERASLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x19AE3940)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_ITEMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x19AE3990)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVECHIMERA_OFFSET UNITYSDK_OFFSET(0x19AE3AB0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x19AE3EA0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERALOCKED_OFFSET UNITYSDK_OFFSET(0x19ADBAB0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERAS_OFFSET UNITYSDK_OFFSET(0x19ADE5B0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x19ADBB80)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMS_OFFSET UNITYSDK_OFFSET(0x19ADED70)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERAATSLOT_OFFSET UNITYSDK_OFFSET(0x19ADC180)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERA_OFFSET UNITYSDK_OFFSET(0x19ADCAC0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETITEMATSLOT_OFFSET UNITYSDK_OFFSET(0x19ADD330)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AE34D0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADE350)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameShopStallData_TypeDefinitionIndex = 60540;

	class ChimeraDuelGameShopStallData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>* _Items; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _BonusChimeraPairLeftSlotMarkers; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>* _Chimeras; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _SlottedItems; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _SlottedChimeras; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameShopStallData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_ChimeraSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_CHIMERASLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* TryGetChimeraAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERAATSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* TryGetChimera(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERA_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_ITEMSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionShopItem* TryGetItemAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETITEMATSLOT_OFFSET))(this, a1);
		}

		::System::Int32 get_BonusChimeraPairCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_BONUSCHIMERAPAIRCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLeftSlotIndexOfBonusChimeraPair(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GETLEFTSLOTINDEXOFBONUSCHIMERAPAIR_OFFSET))(this, a1);
		}

		::System::Void SetChimeras(::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_25*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_25*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERAS_OFFSET))(this, a1);
		}

		::System::Void SetItems(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_26*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_26*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveChimera(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVECHIMERA_OFFSET))(this, a1);
		}

		::System::Void RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void SetChimeraLocked(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERALOCKED_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemLocked(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMLOCKED_OFFSET))(this, a1, a2);
		}
	};
}
