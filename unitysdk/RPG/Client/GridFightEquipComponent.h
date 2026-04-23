#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class IGridFightGridItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0xA47C4C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPID_OFFSET UNITYSDK_OFFSET(0xA47C260)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA47C390)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNTWITHOUTHACK_OFFSET UNITYSDK_OFFSET(0xA47C7A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA47C720)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA47CF20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HACKEQUIP_OFFSET UNITYSDK_OFFSET(0xA47CCB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HASEQUIPCANUSEDTOCRAFT_OFFSET UNITYSDK_OFFSET(0xA47CB30)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xA47CA50)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_NONEBASICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA47C8D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_SHOWNEQUIPS_OFFSET UNITYSDK_OFFSET(0xA47CDE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_HASEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0xA47C5F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_INITEQUIPS_OFFSET UNITYSDK_OFFSET(0xA47B0B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xA47BF30)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0xA47BDE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xA47CF30)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_UPDATEEQUIPS_OFFSET UNITYSDK_OFFSET(0xA47B4F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CHECKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0xA47BBD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA47B030)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___CHECKEQUIPUPDATE_B__27_0_OFFSET UNITYSDK_OFFSET(0xA47CF40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent_TypeDefinitionIndex = 59790;

	class GridFightEquipComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x18
		::RPG::Client::IGridFightGridItem* _Owner; // 0x20
		::Class_0_16E4307DCC419505_722* _DataContext; // 0x28

		::System::Void _ctor(::RPG::Client::IGridFightGridItem* owner, ::Class_0_16E4307DCC419505_722* dataContext)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightGridItem*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CTOR_OFFSET))(this, owner, dataContext);
		}

		::System::Void InitEquips(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* equips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_INITEQUIPS_OFFSET))(this, equips);
		}

		::System::Void UpdateEquips(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipUids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_UPDATEEQUIPS_OFFSET))(this, equipUids);
		}

		::System::Void RemoveEquip(::System::UInt32 equipUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEEQUIP_OFFSET))(this, equipUniqueID);
		}

		::System::Void RemoveAllEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEALLEQUIPS_OFFSET))(this);
		}

		::System::Boolean ContainsEquipID(::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPID_OFFSET))(this, equipID);
		}

		::System::Boolean ContainsEquipUniqueID(::System::UInt32 uniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPUNIQUEID_OFFSET))(this, uniqueID);
		}

		::System::Boolean ContainsEquipCategory(::RPG::GameCore::GridFightEquipCategory category)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPCATEGORY_OFFSET))(this, category);
		}

		::System::Boolean HasEffectTraitID(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_HASEFFECTTRAITID_OFFSET))(this, traitID);
		}

		::System::Int32 get_EquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_EquipCountWithoutHack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNTWITHOUTHACK_OFFSET))(this);
		}

		::System::Int32 get_NoneBasicEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_NONEBASICEQUIPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_ISFULL_OFFSET))(this);
		}

		::System::Boolean get_HasEquipCanUsedToCraft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HASEQUIPCANUSEDTOCRAFT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* get_HackEquip()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HACKEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_ShownEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_SHOWNEQUIPS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_SET_EQUIPS_OFFSET))(this, value);
		}

		::System::Boolean _CheckEquipUpdate(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipUids)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CHECKEQUIPUPDATE_OFFSET))(this, equipUids);
		}

		::System::Boolean __CheckEquipUpdate_b__27_0(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___CHECKEQUIPUPDATE_B__27_0_OFFSET))(this, uid);
		}
	};
}
