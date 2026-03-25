#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07C799F1EFDE68F7;
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2A12F0)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A12A0)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA2A1280)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA2A12C0)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A12B0)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA2A1290)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA2A12D0)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A12E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanNameModifyData_TypeDefinitionIndex = 54410;

	class RelicFilterPlanNameModifyData : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::UInt32 _SlotIndex_k__BackingField; // 0x18
		::System::Int64 _UpdateTimestamp_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_SLOTINDEX_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::Int64 get_UpdateTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicFilterPlanNameModifyData* Create(::Class_1_07C799F1EFDE68F7* serverData)
		{
			return ((::RPG::Client::RelicFilterPlanNameModifyData*(*)(::Class_1_07C799F1EFDE68F7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_CREATE_OFFSET))(serverData);
		}
	};
}
