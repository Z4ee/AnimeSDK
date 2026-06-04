#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_84A8F4443A9231B8;
namespace RPG::Client { class RelicFilterPlanIconData; }

#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6D8C60)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0xC6D8C20)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC6D8C00)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC6D8C40)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_ICON_OFFSET UNITYSDK_OFFSET(0xC6D8C30)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC6D8C10)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC6D8C50)
#define RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D8BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconModifyData_TypeDefinitionIndex = 62532;

	class RelicFilterPlanIconModifyData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* _Icon_k__BackingField; // 0x10
		::System::UInt32 _SlotIndex_k__BackingField; // 0x18
		::System::Int64 _UpdateTimestamp_k__BackingField; // 0x20

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

		static ::RPG::Client::RelicFilterPlanIconModifyData* Create(::Class_1_84A8F4443A9231B8* a1)
		{
			return ((::RPG::Client::RelicFilterPlanIconModifyData*(*)(::Class_1_84A8F4443A9231B8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONMODIFYDATA_CREATE_OFFSET))(a1);
		}
	};
}
