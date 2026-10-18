#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_397;
class Class_1_90889A2023AB884E_10;
class Class_1_C55AEAF8486FB7B9;
class Class_1_F66E57A30C8D3AE8;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderRequirementViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0xD679F90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0xD679E90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0xD679AA0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xD679C40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xD679B90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_NAVIGATECOMMAND_OFFSET UNITYSDK_OFFSET(0xD679DD0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0xD679B40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD679B00)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIRENEWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xD679CF0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REWARDCURRENCY_OFFSET UNITYSDK_OFFSET(0xD679AC0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0xD679D10)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARCNT_OFFSET UNITYSDK_OFFSET(0xD679B20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARS_OFFSET UNITYSDK_OFFSET(0xD679AE0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0xD67A010)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0xD679F10)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0xD679AB0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xD679C80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xD679BD0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD679B10)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIRENEWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xD679D00)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REWARDCURRENCY_OFFSET UNITYSDK_OFFSET(0xD679AD0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARCNT_OFFSET UNITYSDK_OFFSET(0xD679B30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARS_OFFSET UNITYSDK_OFFSET(0xD679AF0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD67A150)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONNAVIGATE_OFFSET UNITYSDK_OFFSET(0xD67A0F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONSELECT_OFFSET UNITYSDK_OFFSET(0xD67A090)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderItemViewModel_TypeDefinitionIndex = 79674;

	class MechCraftOrderItemViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnSelectRequested; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* _Requirement_k__BackingField; // 0x20
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnNavigateRequested; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_90889A2023AB884E_10*>* _Stars_k__BackingField; // 0x30
		::Sofa::Core::SimpleCommand* _SelectCommand; // 0x38
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* _Actor_k__BackingField; // 0x40
		::Sofa::Core::SimpleCommand* _NavigateCommand; // 0x48
		::Class_1_C55AEAF8486FB7B9* _RewardCurrency_k__BackingField; // 0x50
		::Class_1_F66E57A30C8D3AE8* Model; // 0x58
		::System::Boolean _IsNew; // 0x60
		::System::Boolean _IsSelected; // 0x61
		::System::Boolean _RequireNewUnlockAnim_k__BackingField; // 0x62
		::System::UInt32 _StarCnt_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* get_Actor()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ACTOR_OFFSET))(this, a1);
		}

		::Class_1_C55AEAF8486FB7B9* get_RewardCurrency()
		{
			return ((::Class_1_C55AEAF8486FB7B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REWARDCURRENCY_OFFSET))(this);
		}

		::System::Void set_RewardCurrency(::Class_1_C55AEAF8486FB7B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C55AEAF8486FB7B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REWARDCURRENCY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_90889A2023AB884E_10*>* get_Stars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_90889A2023AB884E_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::Collections::Generic::IReadOnlyList_1<::Class_1_90889A2023AB884E_10*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_90889A2023AB884E_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARS_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* get_Requirement()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIREMENT_OFFSET))(this);
		}

		::System::Void set_Requirement(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIREMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARCNT_OFFSET))(this);
		}

		::System::Void set_StarCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ORDERID_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireNewUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIRENEWUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_RequireNewUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIRENEWUNLOCKANIM_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_397* get_SelectCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_SELECTCOMMAND_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* get_NavigateCommand()
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_NAVIGATECOMMAND_OFFSET))(this);
		}

		::System::Void add_OnSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONSELECTREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONSELECTREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_OnNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONNAVIGATEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONNAVIGATEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void _OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONSELECT_OFFSET))(this);
		}

		::System::Void _OnNavigate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONNAVIGATE_OFFSET))(this);
		}
	};
}
