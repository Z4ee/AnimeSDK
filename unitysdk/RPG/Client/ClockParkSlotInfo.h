#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkSlotItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKSLOTINFO_ADDDICE_OFFSET UNITYSDK_OFFSET(0xA09AE40)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GETALLDICETOTALVALUE_OFFSET UNITYSDK_OFFSET(0xA09AA30)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GETEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA09A6A0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xA0A7BE0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GET_SLOTITEMLIST_OFFSET UNITYSDK_OFFSET(0xA0A7BC0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_HASANYDICE_OFFSET UNITYSDK_OFFSET(0xA09A7A0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_REMOVEDICE_OFFSET UNITYSDK_OFFSET(0xA09B0D0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_SET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xA0A7BF0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_SET_SLOTITEMLIST_OFFSET UNITYSDK_OFFSET(0xA0A7BD0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA098BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkSlotInfo_TypeDefinitionIndex = 56712;

	class ClockParkSlotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>* _SlotItemList_k__BackingField; // 0x10
		::RPG::Client::ClockParkCardItem* _OwnerCardRef_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 itemCount, ::RPG::Client::ClockParkCardItem* ownerCardRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO__CTOR_OFFSET))(this, itemCount, ownerCardRef);
		}

		::System::Int32 GetEmptySlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_GETEMPTYSLOTINDEX_OFFSET))(this);
		}

		::System::Boolean HasAnyDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_HASANYDICE_OFFSET))(this);
		}

		::System::UInt32 GetAllDiceTotalValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_GETALLDICETOTALVALUE_OFFSET))(this);
		}

		::System::Boolean AddDice(::System::Int32 slotIndex, ::RPG::Client::ClockParkDiceItem* diceItem, ::System::Boolean isDiceFixed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkDiceItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_ADDDICE_OFFSET))(this, slotIndex, diceItem, isDiceFixed);
		}

		::System::Boolean RemoveDice(::System::Int32 slotIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_REMOVEDICE_OFFSET))(this, slotIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>* get_SlotItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_GET_SLOTITEMLIST_OFFSET))(this);
		}

		::System::Void set_SlotItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_SET_SLOTITEMLIST_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkCardItem* get_OwnerCardRef()
		{
			return ((::RPG::Client::ClockParkCardItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_GET_OWNERCARDREF_OFFSET))(this);
		}

		::System::Void set_OwnerCardRef(::RPG::Client::ClockParkCardItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_SET_OWNERCARDREF_OFFSET))(this, value);
		}
	};
}
