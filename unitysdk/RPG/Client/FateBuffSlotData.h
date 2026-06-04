#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A3F716CC3D7325F;
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATEBUFFSLOTDATA_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0xB983F50)
#define RPG_CLIENT_FATEBUFFSLOTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB983E20)
#define RPG_CLIENT_FATEBUFFSLOTDATA_EQUIPBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB983F00)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_EQUIPPEDBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB9840B0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_EXTRASLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB9840F0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB982790)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_LOCKHINTDISPLAYID_OFFSET UNITYSDK_OFFSET(0xB984370)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_LOCKHINTDISPLAYTEXTSTR_OFFSET UNITYSDK_OFFSET(0xB984390)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_LOCKHINTDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0xB984510)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB984230)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB984090)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB9840D0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xB984110)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_UNLOCKPHASE_OFFSET UNITYSDK_OFFSET(0xB9841B0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_GET_UNLOCKREMAINROUNDS_OFFSET UNITYSDK_OFFSET(0xB984590)
#define RPG_CLIENT_FATEBUFFSLOTDATA_ISUSEDIFFICULTYUNLOCKPHASE_OFFSET UNITYSDK_OFFSET(0xB983FA0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_SETSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB983EA0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_SET_EQUIPPEDBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB9840C0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_SET_EXTRASLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB984100)
#define RPG_CLIENT_FATEBUFFSLOTDATA_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB9840A0)
#define RPG_CLIENT_FATEBUFFSLOTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xB9840E0)
#define RPG_CLIENT_FATEBUFFSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB983E10)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffSlotData_TypeDefinitionIndex = 59794;

	class FateBuffSlotData : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffData* _EquippedBuffData_k__BackingField; // 0x10
		::RPG::Client::FateBuffTraitInfo* _BelongBuffInfo; // 0x18
		::Class_1_7A3F716CC3D7325F* _Row; // 0x20
		::System::UInt32 _ExtraSlotIndex_k__BackingField; // 0x28
		::System::UInt32 _SlotID_k__BackingField; // 0x2C
		::System::UInt32 _SlotIndex_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateBuffSlotData* Create(::System::UInt32 a1, ::RPG::Client::FateBuffTraitInfo* a2)
		{
			return ((::RPG::Client::FateBuffSlotData*(*)(::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetSlotIndex(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_SETSLOTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void EquipBuffData(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_EQUIPBUFFDATA_OFFSET))(this, a1);
		}

		::System::Void ClearSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_CLEARSLOT_OFFSET))(this);
		}

		static ::System::Boolean IsUseDifficultyUnlockPhase(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_ISUSEDIFFICULTYUNLOCKPHASE_OFFSET))(a1);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_SET_SLOTID_OFFSET))(this, a1);
		}

		::RPG::Client::FateBuffData* get_EquippedBuffData()
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_EQUIPPEDBUFFDATA_OFFSET))(this);
		}

		::System::Void set_EquippedBuffData(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_SET_EQUIPPEDBUFFDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraSlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_EXTRASLOTINDEX_OFFSET))(this);
		}

		::System::Void set_ExtraSlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_SET_EXTRASLOTINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::Class_1_7A3F716CC3D7325F* get_Row()
		{
			return ((::Class_1_7A3F716CC3D7325F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::FateBuffSlotType get_SlotType()
		{
			return ((::RPG::GameCore::FateBuffSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_SLOTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_UNLOCKPHASE_OFFSET))(this);
		}

		::System::UInt32 get_LockHintDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_LOCKHINTDISPLAYID_OFFSET))(this);
		}

		::System::String* get_LockHintDisplayTextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_LOCKHINTDISPLAYTEXTSTR_OFFSET))(this);
		}

		::RPG::Client::TextID get_LockHintDisplayText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_LOCKHINTDISPLAYTEXT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockRemainRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSLOTDATA_GET_UNLOCKREMAINROUNDS_OFFSET))(this);
		}
	};
}
