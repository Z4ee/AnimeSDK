#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_4;
class Class_1_D17272E82AE804C2_797;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_CREATE_OFFSET UNITYSDK_OFFSET(0x1C837CD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_FINDEMPTYSLOTFORSIZE_OFFSET UNITYSDK_OFFSET(0x1C838A10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_FINDSLOTBYEQUIPUID_OFFSET UNITYSDK_OFFSET(0x1C8388D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_FINDSLOTBYPOSITION_OFFSET UNITYSDK_OFFSET(0x1C838700)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GETEQUIPINSTANCEBYUID_OFFSET UNITYSDK_OFFSET(0x1C837AA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GETEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C837B80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GET_AVAILABLESLOTNUM_OFFSET UNITYSDK_OFFSET(0x1C837A80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C837990)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1C837970)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_REPLACESLOTWITHEMPTY_OFFSET UNITYSDK_OFFSET(0x1C839450)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_REPLACESLOTWITHEQUIP_OFFSET UNITYSDK_OFFSET(0x1C838B40)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_SET_AVAILABLESLOTNUM_OFFSET UNITYSDK_OFFSET(0x1C837A90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_SET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1C837980)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_SYNC_OFFSET UNITYSDK_OFFSET(0x1C837EF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_UPDATEAVAILABLESLOTNUM_OFFSET UNITYSDK_OFFSET(0x1C8398C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C837EE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__FILLMISSINGSLOTS_OFFSET UNITYSDK_OFFSET(0x1C838FB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__RELEASESLOTS_OFFSET UNITYSDK_OFFSET(0x1C838120)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__TRYGETEQUIPINFOBYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C838270)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipBar_TypeDefinitionIndex = 78844;

	class PixAirEquipBar : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* _Slots_k__BackingField; // 0x10
		::System::Int32 _AvailableSlotNum_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* get_Slots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GET_SLOTS_OFFSET))(this);
		}

		::System::Void set_Slots(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_SET_SLOTS_OFFSET))(this, a1);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GET_CAPACITY_OFFSET))(this);
		}

		::System::Int32 get_AvailableSlotNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GET_AVAILABLESLOTNUM_OFFSET))(this);
		}

		::System::Void set_AvailableSlotNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_SET_AVAILABLESLOTNUM_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* GetEquipInstanceByUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GETEQUIPINSTANCEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* GetEquipInstance(::System::Predicate_1<::RPG::Client::PixAir::PixAirEquipInstance*>* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::PixAir::PixAirEquipInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_GETEQUIPINSTANCE_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirEquipBar* Create(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipBar*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_333B902B2174BECA_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_SYNC_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_797* _TryGetEquipInfoBySlotIndex(::System::Int32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_797*>* a2)
		{
			return ((::Class_1_D17272E82AE804C2_797*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_797*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__TRYGETEQUIPINFOBYSLOTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__RELEASESLOTS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirSlot* FindSlotByPosition(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_FINDSLOTBYPOSITION_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSlot* FindSlotByEquipUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_FINDSLOTBYEQUIPUID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSlot* FindEmptySlotForSize(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_FINDEMPTYSLOTFORSIZE_OFFSET))(this, a1);
		}

		::System::Void ReplaceSlotWithEquip(::System::Int32 a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_REPLACESLOTWITHEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void ReplaceSlotWithEmpty(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_REPLACESLOTWITHEMPTY_OFFSET))(this, a1);
		}

		::System::Void UpdateAvailableSlotNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR_UPDATEAVAILABLESLOTNUM_OFFSET))(this, a1);
		}

		::System::Void _FillMissingSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR__FILLMISSINGSLOTS_OFFSET))(this);
		}
	};
}
