#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8DE9E50311E36284;
class Class_1_C74059A83466814F;
class Class_1_D811CE24096BDBCA_3;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_GET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC772550)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_SET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC772560)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC772530)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7722B0)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC7722D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffEnhanceItem_TypeDefinitionIndex = 62831;

	class RogueBuffEnhanceItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ItemCostList_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_8DE9E50311E36284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8DE9E50311E36284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_D811CE24096BDBCA_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D811CE24096BDBCA_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _InitCostList(::Class_1_C74059A83466814F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_ItemCostList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM_GET_ITEMCOSTLIST_OFFSET))(this);
		}

		::System::Void set_ItemCostList(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM_SET_ITEMCOSTLIST_OFFSET))(this, a1);
		}
	};
}
