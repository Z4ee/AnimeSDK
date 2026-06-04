#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_54D742DFC0CBE74F;
class Class_1_AF3961F295BCE491;
class Class_1_D031E8F06825AB4F;
namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET UNITYSDK_OFFSET(0xC3B4F00)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B5000)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0xC3B5020)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0xC3B4EE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3B5010)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET UNITYSDK_OFFSET(0xC3B5030)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B4BD0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleEquipsViewModel_TypeDefinitionIndex = 73573;

	class PixAirBattleEquipsViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_AF3961F295BCE491* _EquipPropertyGetter_k__BackingField; // 0x20
		::Class_1_D031E8F06825AB4F* _EquipService; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* _EquipItemsViewModel_k__BackingField; // 0x30
		::Class_1_54D742DFC0CBE74F* _EquipInfo; // 0x38

		::System::Void _ctor(::Class_1_54D742DFC0CBE74F* a1, ::Class_1_D031E8F06825AB4F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_54D742DFC0CBE74F*, ::Class_1_D031E8F06825AB4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SlotNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_SLOTNUM_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipItemViewModel* GetEquipItem(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipItemViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GETEQUIPITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* get_EquipItemsViewModel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPITEMSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_EquipItemsViewModel(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPITEMSVIEWMODEL_OFFSET))(this, a1);
		}

		::Class_1_AF3961F295BCE491* get_EquipPropertyGetter()
		{
			return ((::Class_1_AF3961F295BCE491*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_GET_EQUIPPROPERTYGETTER_OFFSET))(this);
		}

		::System::Void set_EquipPropertyGetter(::Class_1_AF3961F295BCE491* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AF3961F295BCE491*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEEQUIPSVIEWMODEL_SET_EQUIPPROPERTYGETTER_OFFSET))(this, a1);
		}
	};
}
