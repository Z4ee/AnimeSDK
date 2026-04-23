#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_32;
class Class_1_8DE9E50311E36284;
class Class_1_C74059A83466814F;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_GET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB027160)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_SET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB027170)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB027140)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB026F80)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB026FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffEnhanceItem_TypeDefinitionIndex = 61898;

	class RogueBuffEnhanceItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ItemCostList_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_8DE9E50311E36284* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8DE9E50311E36284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET))(this, proto);
		}

		::System::Void _ctor_1(::Class_1_7BF8FDF00F218876_32* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BF8FDF00F218876_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET))(this, proto);
		}

		::System::Void _InitCostList(::Class_1_C74059A83466814F* protoCostData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET))(this, protoCostData);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_ItemCostList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM_GET_ITEMCOSTLIST_OFFSET))(this);
		}

		::System::Void set_ItemCostList(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM_SET_ITEMCOSTLIST_OFFSET))(this, value);
		}
	};
}
