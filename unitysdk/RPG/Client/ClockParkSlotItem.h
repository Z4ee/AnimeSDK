#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkSlotInfo; }

#define RPG_CLIENT_CLOCKPARKSLOTITEM_ADDDICE_OFFSET UNITYSDK_OFFSET(0xB6E5860)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_GET_INSLOTDICE_OFFSET UNITYSDK_OFFSET(0xB6E59D0)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_GET_ISDICEFIXED_OFFSET UNITYSDK_OFFSET(0xB6E59F0)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB6E0300)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_GET_OWNERCARDREF_OFFSET UNITYSDK_OFFSET(0xB6E5A50)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_GET_OWNERSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB6E5A10)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB6E5A30)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_REMOVEDICE_OFFSET UNITYSDK_OFFSET(0xB6E58D0)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_SETDICE_OFFSET UNITYSDK_OFFSET(0xB6E5980)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_SETOWNERSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB6E5800)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_SET_INSLOTDICE_OFFSET UNITYSDK_OFFSET(0xB6E59E0)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_SET_ISDICEFIXED_OFFSET UNITYSDK_OFFSET(0xB6E5A00)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_SET_OWNERSLOTINFO_OFFSET UNITYSDK_OFFSET(0xB6E5A20)
#define RPG_CLIENT_CLOCKPARKSLOTITEM_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB6E5A40)
#define RPG_CLIENT_CLOCKPARKSLOTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E57F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkSlotItem_TypeDefinitionIndex = 57495;

	class ClockParkSlotItem : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkDiceItem* _InSlotDice_k__BackingField; // 0x10
		::RPG::Client::ClockParkSlotInfo* _OwnerSlotInfo_k__BackingField; // 0x18
		::System::Int32 _SlotIndex_k__BackingField; // 0x20
		::System::Boolean _IsDiceFixed_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM__CTOR_OFFSET))(this);
		}

		::System::Void AddDice(::RPG::Client::ClockParkDiceItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_ADDDICE_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_REMOVEDICE_OFFSET))(this);
		}

		::System::Void SetDice(::RPG::Client::ClockParkDiceItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_SETDICE_OFFSET))(this, a1);
		}

		::System::Void SetOwnerSlotInfo(::RPG::Client::ClockParkSlotInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkSlotInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_SETOWNERSLOTINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ClockParkDiceItem* get_InSlotDice()
		{
			return ((::RPG::Client::ClockParkDiceItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_GET_INSLOTDICE_OFFSET))(this);
		}

		::System::Void set_InSlotDice(::RPG::Client::ClockParkDiceItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_SET_INSLOTDICE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDiceFixed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_GET_ISDICEFIXED_OFFSET))(this);
		}

		::System::Void set_IsDiceFixed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_SET_ISDICEFIXED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::Client::ClockParkSlotInfo* get_OwnerSlotInfo()
		{
			return ((::RPG::Client::ClockParkSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_GET_OWNERSLOTINFO_OFFSET))(this);
		}

		::System::Void set_OwnerSlotInfo(::RPG::Client::ClockParkSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_SET_OWNERSLOTINFO_OFFSET))(this, a1);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkCardItem* get_OwnerCardRef()
		{
			return ((::RPG::Client::ClockParkCardItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSLOTITEM_GET_OWNERCARDREF_OFFSET))(this);
		}
	};
}
