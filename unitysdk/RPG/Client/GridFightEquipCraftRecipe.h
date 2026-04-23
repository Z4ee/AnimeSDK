#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::GameCore { class GridFightCraftConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_OFFSET UNITYSDK_OFFSET(0xA47EBE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_OFFSET UNITYSDK_OFFSET(0xA47F270)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_OFFSET UNITYSDK_OFFSET(0xA47E930)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMIDS_OFFSET UNITYSDK_OFFSET(0xA47F5C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMSDICT_OFFSET UNITYSDK_OFFSET(0xA47F5A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_CRAFTID_OFFSET UNITYSDK_OFFSET(0xA47F560)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xA47F580)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_NEEDCOSTITEM_OFFSET UNITYSDK_OFFSET(0xA47E890)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMIDS_OFFSET UNITYSDK_OFFSET(0xA47F5D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMSDICT_OFFSET UNITYSDK_OFFSET(0xA47F5B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_CRAFTID_OFFSET UNITYSDK_OFFSET(0xA47F570)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xA47F590)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA47E300)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__GETRELATEDROLEUIDS_OFFSET UNITYSDK_OFFSET(0xA47F090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe_TypeDefinitionIndex = 59364;

	class GridFightEquipCraftRecipe : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CostItemsDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CostItemIDs_k__BackingField; // 0x18
		::System::UInt32 _CraftID_k__BackingField; // 0x20
		::System::UInt32 _TargetEquipItemID_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::GameCore::GridFightCraftConfigRow* configRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightCraftConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__CTOR_OFFSET))(this, configRow);
		}

		::System::Boolean NeedCostItem(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_NEEDCOSTITEM_OFFSET))(this, itemID);
		}

		::System::Boolean CanCraft(::RPG::Client::GridFightEquipInfo* equipInfo, ::System::Boolean addItem, ::System::UInt32 addItemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_OFFSET))(this, equipInfo, addItem, addItemID);
		}

		::System::Boolean CanCraftByAddItem(::RPG::Client::GridFightEquipInfo* equipInfo, ::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_OFFSET))(this, equipInfo, itemID);
		}

		::System::Boolean CanCraftToRole(::RPG::Client::GridFightEquipInfo* equipInfo, ::System::UInt32 roleUID, ::System::Boolean addItem, ::System::UInt32 addItemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_OFFSET))(this, equipInfo, roleUID, addItem, addItemID);
		}

		::System::Void _GetRelatedRoleUIDs(::System::UInt32 itemID, ::RPG::Client::GridFightEquipInfo* equipInfo, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& roleUIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipInfo*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__GETRELATEDROLEUIDS_OFFSET))(this, itemID, equipInfo, roleUIDs);
		}

		::System::UInt32 get_CraftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_CRAFTID_OFFSET))(this);
		}

		::System::Void set_CraftID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_CRAFTID_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetEquipItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_TARGETEQUIPITEMID_OFFSET))(this);
		}

		::System::Void set_TargetEquipItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_TARGETEQUIPITEMID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_CostItemsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMSDICT_OFFSET))(this);
		}

		::System::Void set_CostItemsDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMSDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CostItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMIDS_OFFSET))(this);
		}

		::System::Void set_CostItemIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMIDS_OFFSET))(this, value);
		}
	};
}
