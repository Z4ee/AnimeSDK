#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::GameCore { class GridFightCraftConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_OFFSET UNITYSDK_OFFSET(0xD170B80)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_OFFSET UNITYSDK_OFFSET(0xD1711A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_OFFSET UNITYSDK_OFFSET(0xD1708D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMIDS_OFFSET UNITYSDK_OFFSET(0xD1714D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMSDICT_OFFSET UNITYSDK_OFFSET(0xD1714B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_CRAFTID_OFFSET UNITYSDK_OFFSET(0xD171470)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xD171490)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_NEEDCOSTITEM_OFFSET UNITYSDK_OFFSET(0xD170830)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMIDS_OFFSET UNITYSDK_OFFSET(0xD1714E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMSDICT_OFFSET UNITYSDK_OFFSET(0xD1714C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_CRAFTID_OFFSET UNITYSDK_OFFSET(0xD171480)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xD1714A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1701C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__GETRELATEDROLEUIDS_OFFSET UNITYSDK_OFFSET(0xD170FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe_TypeDefinitionIndex = 64573;

	class GridFightEquipCraftRecipe : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CostItemsDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CostItemIDs_k__BackingField; // 0x18
		::System::UInt32 _TargetEquipItemID_k__BackingField; // 0x20
		::System::UInt32 _CraftID_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::GameCore::GridFightCraftConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightCraftConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean NeedCostItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_NEEDCOSTITEM_OFFSET))(this, a1);
		}

		::System::Boolean CanCraft(::RPG::Client::GridFightEquipInfo* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanCraftByAddItem(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanCraftToRole(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _GetRelatedRoleUIDs(::System::UInt32 a1, ::RPG::Client::GridFightEquipInfo* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipInfo*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__GETRELATEDROLEUIDS_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_CraftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_CRAFTID_OFFSET))(this);
		}

		::System::Void set_CraftID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_CRAFTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetEquipItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_TARGETEQUIPITEMID_OFFSET))(this);
		}

		::System::Void set_TargetEquipItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_TARGETEQUIPITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_CostItemsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMSDICT_OFFSET))(this);
		}

		::System::Void set_CostItemsDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMSDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CostItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMIDS_OFFSET))(this);
		}

		::System::Void set_CostItemIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMIDS_OFFSET))(this, a1);
		}
	};
}
