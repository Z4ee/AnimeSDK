#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_0A50C809A68617FA;
class Class_1_C842F7C215AA68E2;
class Class_1_D031E8F06825AB4F;
namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET UNITYSDK_OFFSET(0x1C8301F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C8302F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0x1C830310)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C830300)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0x1C830320)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C82FD00)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBagEquipsViewModel_TypeDefinitionIndex = 78767;

	class PixAirBagEquipsViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_0A50C809A68617FA* _EquipPropertyGetter_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* _EquipItemsViewModel_k__BackingField; // 0x28
		::Class_1_D031E8F06825AB4F* _EquipService; // 0x30

		::System::Void _ctor(::Class_1_C842F7C215AA68E2* a1, ::Class_1_D031E8F06825AB4F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C842F7C215AA68E2*, ::Class_1_D031E8F06825AB4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PixAir::PixAirEquipItemViewModel* GetEquipItem(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* get_EquipItemsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EquipItemsViewModel(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET))(this, a1);
		}

		::Class_1_0A50C809A68617FA* get_EquipPropertyGetter()
		{
			return ((::Class_1_0A50C809A68617FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET))(this);
		}

		::System::Void set_EquipPropertyGetter(::Class_1_0A50C809A68617FA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A50C809A68617FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET))(this, a1);
		}
	};
}
