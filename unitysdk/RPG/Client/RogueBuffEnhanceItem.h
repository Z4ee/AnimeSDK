#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_825B6978607E6BB0_3;
class Class_1_825B6978607E6BB0_4;
class Class_1_C3162D2F7EA647B9;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_GET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1BC78DD0)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_SET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1BC78DE0)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC78DB0)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC78B30)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1BC78B50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffEnhanceItem_TypeDefinitionIndex = 67193;

	class RogueBuffEnhanceItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ItemCostList_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_825B6978607E6BB0_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_825B6978607E6BB0_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_825B6978607E6BB0_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_825B6978607E6BB0_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _InitCostList(::Class_1_C3162D2F7EA647B9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET))(this, a1);
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
