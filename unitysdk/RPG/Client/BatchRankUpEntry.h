#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATCHRANKUPENTRY_GET_EQUIPMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC8D4240)
#define RPG_CLIENT_BATCHRANKUPENTRY_GET_ITEMCOSTS_OFFSET UNITYSDK_OFFSET(0xC8D4260)
#define RPG_CLIENT_BATCHRANKUPENTRY_SET_EQUIPMENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC8D4250)
#define RPG_CLIENT_BATCHRANKUPENTRY_SET_ITEMCOSTS_OFFSET UNITYSDK_OFFSET(0xC8D4270)
#define RPG_CLIENT_BATCHRANKUPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D4280)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchRankUpEntry_TypeDefinitionIndex = 69357;

	class BatchRankUpEntry : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _ItemCosts_k__BackingField; // 0x10
		::System::UInt32 _EquipmentUniqueID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHRANKUPENTRY__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EquipmentUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHRANKUPENTRY_GET_EQUIPMENTUNIQUEID_OFFSET))(this);
		}

		::System::Void set_EquipmentUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHRANKUPENTRY_SET_EQUIPMENTUNIQUEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_ItemCosts()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHRANKUPENTRY_GET_ITEMCOSTS_OFFSET))(this);
		}

		::System::Void set_ItemCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHRANKUPENTRY_SET_ITEMCOSTS_OFFSET))(this, a1);
		}
	};
}
