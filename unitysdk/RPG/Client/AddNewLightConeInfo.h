#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADDNEWLIGHTCONEINFO_CREATEADDNEWLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0xC6ABD00)
#define RPG_CLIENT_ADDNEWLIGHTCONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC6AC110)

namespace RPG::Client
{
	inline static constexpr unsigned int AddNewLightConeInfo_TypeDefinitionIndex = 65739;

	class AddNewLightConeInfo : public ::System::Object
	{
	public:
		::RPG::Client::EquipmentItemData* NewLightConeData; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ConvertItemList; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* AdditionalItemList; // 0x20
		::System::Boolean IsNew; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWLIGHTCONEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AddNewLightConeInfo* CreateAddNewLightConeInfo(::System::UInt32 a1, ::Proto::ItemList* a2, ::Proto::ItemList* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::AddNewLightConeInfo*(*)(::System::UInt32, ::Proto::ItemList*, ::Proto::ItemList*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWLIGHTCONEINFO_CREATEADDNEWLIGHTCONEINFO_OFFSET))(a1, a2, a3, a4);
		}
	};
}
