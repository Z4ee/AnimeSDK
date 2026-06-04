#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_773;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class IGridFightGridItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0xBB198F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPID_OFFSET UNITYSDK_OFFSET(0xBB19550)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xBB19720)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNTWITHOUTHACK_OFFSET UNITYSDK_OFFSET(0xBB19D10)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBB19C90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBB1A670)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HACKEQUIP_OFFSET UNITYSDK_OFFSET(0xBB1A3C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HASEQUIPCANUSEDTOCRAFT_OFFSET UNITYSDK_OFFSET(0xBB1A180)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xBB1A0A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_NONEBASICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBB19E60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_SHOWNEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB1A510)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_HASEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0xBB19AC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_INITEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB18260)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB19220)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB19040)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBB1A680)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_UPDATEEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB186A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CHECKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0xBB18E20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB181E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___CHECKEQUIPUPDATE_B__27_0_OFFSET UNITYSDK_OFFSET(0xBB1A690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent_TypeDefinitionIndex = 60725;

	class GridFightEquipComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::IGridFightGridItem* _Owner; // 0x18
		::Class_0_16E4307DCC419505_773* _DataContext; // 0x20
		::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::IGridFightGridItem* a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightGridItem*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InitEquips(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_INITEQUIPS_OFFSET))(this, a1);
		}

		::System::Void UpdateEquips(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_UPDATEEQUIPS_OFFSET))(this, a1);
		}

		::System::Void RemoveEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEEQUIP_OFFSET))(this, a1);
		}

		::System::Void RemoveAllEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEALLEQUIPS_OFFSET))(this);
		}

		::System::Boolean ContainsEquipID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipUniqueID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPUNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipCategory(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPCATEGORY_OFFSET))(this, a1);
		}

		::System::Boolean HasEffectTraitID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_HASEFFECTTRAITID_OFFSET))(this, a1);
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

		::System::Void set_Equips(::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Boolean _CheckEquipUpdate(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CHECKEQUIPUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean __CheckEquipUpdate_b__27_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___CHECKEQUIPUPDATE_B__27_0_OFFSET))(this, a1);
		}
	};
}
