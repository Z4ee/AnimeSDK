#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22B4C7CF09D1BAC1_5;
class Class_1_D17272E82AE804C2_681;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirRecommendData; }
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAG_ADDNEWEQUIP_OFFSET UNITYSDK_OFFSET(0xC3AFC10)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_CREATE_OFFSET UNITYSDK_OFFSET(0xC3AF480)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_FINDSLOTBYEQUIPUID_OFFSET UNITYSDK_OFFSET(0xC3B0D60)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_FINDSLOTBYPOSITION_OFFSET UNITYSDK_OFFSET(0xC3B0930)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GETCAPACITY_OFFSET UNITYSDK_OFFSET(0xC3AF430)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GETEQUIPINSTANCEBYUID_OFFSET UNITYSDK_OFFSET(0xC3AEC90)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GETEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xC3AED70)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xC3AE980)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_OCCUPIEDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xC3AE9E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xC3AE800)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET_TOTALSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xC3AE9D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET__CAPACITY_OFFSET UNITYSDK_OFFSET(0xC3AE820)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_GET__COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0xC3AE930)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_HASRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xC3AEF60)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_REPLACESLOTWITHEMPTY_OFFSET UNITYSDK_OFFSET(0xC3B1530)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_REPLACESLOTWITHEQUIP_OFFSET UNITYSDK_OFFSET(0xC3B10E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_SET_SLOTS_OFFSET UNITYSDK_OFFSET(0xC3AE810)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG_SYNC_OFFSET UNITYSDK_OFFSET(0xC3AFFE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG__CTOR_OFFSET UNITYSDK_OFFSET(0xC3AEC80)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG__RELEASESLOTS_OFFSET UNITYSDK_OFFSET(0xC3B0270)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG__TRYGETEQUIPINFOBYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC3B0500)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBag_TypeDefinitionIndex = 73644;

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

		::System::Void Sync(::Class_1_22B4C7CF09D1BAC1_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG_SYNC_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_681* _TryGetEquipInfoBySlotIndex(::System::Int32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_681*>* a2)
		{
			return ((::Class_1_D17272E82AE804C2_681*(*)(::PVOID, ::System::Int32, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_681*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG__TRYGETEQUIPINFOBYSLOTINDEX_OFFSET))(this, a1, a2);
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
