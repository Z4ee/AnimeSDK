#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_4;
class Class_1_D17272E82AE804C2_797;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirRecommendData; }
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAG_ADDNEWEQUIP_OFFSET UNITYSDK_OFFSET(0x1C82DAC0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_CREATE_OFFSET UNITYSDK_OFFSET(0x1C82D310)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_FINDSLOTBYEQUIPUID_OFFSET UNITYSDK_OFFSET(0x1C82ED90)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_FINDSLOTBYPOSITION_OFFSET UNITYSDK_OFFSET(0x1C82E900)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C82D2C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GETEQUIPINSTANCEBYUID_OFFSET UNITYSDK_OFFSET(0x1C82CB20)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GETEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C82CC00)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1C82C7B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_OCCUPIEDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C82C870)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1C82C630)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_TOTALSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C82C820)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET__CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C82C650)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET__COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1C82C760)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_HASRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x1C82CDF0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_REPLACESLOTWITHEMPTY_OFFSET UNITYSDK_OFFSET(0x1C82F5B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_REPLACESLOTWITHEQUIP_OFFSET UNITYSDK_OFFSET(0x1C82F110)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_SET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1C82C640)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_SYNC_OFFSET UNITYSDK_OFFSET(0x1C82DE90)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C82CB10)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG__RELEASESLOTS_OFFSET UNITYSDK_OFFSET(0x1C82E120)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG__TRYGETEQUIPINFOBYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C82E3B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBag_TypeDefinitionIndex = 78840;

	class PixAirBag : public ::System::Object
	{
	public:
		// static const ::System::Int32 _RowCount = 0x2; // 0x0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*>* _Slots_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*>* get_Slots()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_SLOTS_OFFSET))(this);
		}

		::System::Void set_Slots(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_SET_SLOTS_OFFSET))(this, a1);
		}

		::System::Int32 get__Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GET__CAPACITY_OFFSET))(this);
		}

		::System::Int32 get__ColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GET__COLUMNCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ColumnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_COLUMNCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_TOTALSLOTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OccupiedSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_OCCUPIEDSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* GetEquipInstanceByUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GETEQUIPINSTANCEBYUID_OFFSET))(this, a1);
		}

		::System::Boolean HasRecommendEquip(::RPG::Client::PixAir::PixAirRecommendData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_HASRECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* GetEquipInstance(::System::Predicate_1<::RPG::Client::PixAir::PixAirEquipInstance*>* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::PixAir::PixAirEquipInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GETEQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::Int32 GetCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_GETCAPACITY_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBag* Create()
		{
			return ((::RPG::Client::PixAir::PixAirBag*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_CREATE_OFFSET))();
		}

		::System::Void AddNewEquip(::System::Int32 a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_ADDNEWEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_333B902B2174BECA_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_SYNC_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_797* _TryGetEquipInfoBySlotIndex(::System::Int32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_797*>* a2)
		{
			return ((::Class_1_D17272E82AE804C2_797*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_797*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG__TRYGETEQUIPINFOBYSLOTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG__RELEASESLOTS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirSlot* FindSlotByPosition(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_FINDSLOTBYPOSITION_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSlot* FindSlotByEquipUid(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_FINDSLOTBYEQUIPUID_OFFSET))(this, a1);
		}

		::System::Void ReplaceSlotWithEquip(::System::Int32 a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_REPLACESLOTWITHEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void ReplaceSlotWithEmpty(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_REPLACESLOTWITHEMPTY_OFFSET))(this, a1);
		}
	};
}
