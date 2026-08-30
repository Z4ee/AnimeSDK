#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0579CB6DBCAEB9;
namespace RPG::Client { class RelicFilterPlanIconData; }

#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE25450)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0xDE25410)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDE253F0)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDE25430)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_ICON_OFFSET UNITYSDK_OFFSET(0xDE25420)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDE25400)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDE25440)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE253E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconModifyData_TypeDefinitionIndex = 66890;

	class RelicFilterPlanIconModifyData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* _Icon_k__BackingField; // 0x10
		::System::Int64 _UpdateTimestamp_k__BackingField; // 0x18
		::System::UInt32 _SlotIndex_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::RelicFilterPlanIconData* get_Icon()
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::RPG::Client::RelicFilterPlanIconData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicFilterPlanIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_ICON_OFFSET))(this, a1);
		}

		::System::Int64 get_UpdateTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimestamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicFilterPlanIconModifyData* Create(::Class_1_0C0579CB6DBCAEB9* a1)
		{
			return ((::RPG::Client::RelicFilterPlanIconModifyData*(*)(::Class_1_0C0579CB6DBCAEB9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_CREATE_OFFSET))(a1);
		}
	};
}
