#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::PixAir { class PixAirEquipViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x19EC4730)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_GET_EQUIPVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19ED47E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_SET_EQUIPVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19ED47F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__CREATEEQUIPVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19ED41F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED4140)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x19ED4160)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipOverviewViewModel_TypeDefinitionIndex = 75236;

	class PixAirEquipOverviewViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _UIMessenger; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* _EquipmentGhosts; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>* _EquipViewModels_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipOverviewViewModel* Create(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipOverviewViewModel*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _CreateEquipViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL__CREATEEQUIPVIEWMODELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>* get_EquipViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_GET_EQUIPVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_EquipViewModels(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPOVERVIEWVIEWMODEL_SET_EQUIPVIEWMODELS_OFFSET))(this, a1);
		}
	};
}
