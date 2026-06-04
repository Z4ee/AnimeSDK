#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkSlotItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKSLOTINFO_ADDDICE_OFFSET UNITYSDK_OFFSET(0xB6D8F90)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GETALLDICETOTALVALUE_OFFSET UNITYSDK_OFFSET(0xB6D8B90)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GETEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB6D87C0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xB6E5960)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_GET_SLOTITEMLIST_OFFSET UNITYSDK_OFFSET(0xB6E5940)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_HASANYDICE_OFFSET UNITYSDK_OFFSET(0xB6D88B0)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_REMOVEDICE_OFFSET UNITYSDK_OFFSET(0xB6D9250)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_SET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xB6E5970)
#define RPG_CLIENT_CLOCKPARKSLOTINFO_SET_SLOTITEMLIST_OFFSET UNITYSDK_OFFSET(0xB6E5950)
#define RPG_CLIENT_CLOCKPARKSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D7210)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkSlotInfo_TypeDefinitionIndex = 57496;

	class ClockParkSlotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>* _SlotItemList_k__BackingField; // 0x10
		::RPG::Client::ClockParkCardItem* _OwnerCardRef_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ClockParkCardItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO__CTOR_OFFSET))(this, a1, a2);
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

		::System::Boolean AddDice(::System::Int32 a1, ::RPG::Client::ClockParkDiceItem* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkDiceItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_ADDDICE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RemoveDice(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_REMOVEDICE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>* get_SlotItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_GET_SLOTITEMLIST_OFFSET))(this);
		}

		::System::Void set_SlotItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkSlotItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_SET_SLOTITEMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkCardItem* get_OwnerCardRef()
		{
			return ((::RPG::Client::ClockParkCardItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_GET_OWNERCARDREF_OFFSET))(this);
		}

		::System::Void set_OwnerCardRef(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTINFO_SET_OWNERCARDREF_OFFSET))(this, a1);
		}
	};
}
