#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderRequirementViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0xD6798E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_GET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD6799B0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0xD679920)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_SET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD6799F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD679A80)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderDetailInfoViewModel_TypeDefinitionIndex = 79657;

	class MechCraftOrderDetailInfoViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* _Requirement; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* _Actor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* get_Actor()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_SET_ACTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* get_Requirement()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_GET_REQUIREMENT_OFFSET))(this);
		}

		::System::Void set_Requirement(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERDETAILINFOVIEWMODEL_SET_REQUIREMENT_OFFSET))(this, a1);
		}
	};
}
