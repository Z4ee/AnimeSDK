#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_9D5608F598A30CAC_29;
class Class_1_E795CCB54B8EB95C;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_GET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0xA2F0470)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM_SET_ITEMCOSTLIST_OFFSET UNITYSDK_OFFSET(0xA2F0480)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2F0450)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F0290)
#define RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET UNITYSDK_OFFSET(0xA2F02B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffEnhanceItem_TypeDefinitionIndex = 54710;

	class RogueBuffEnhanceItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ItemCostList_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_E795CCB54B8EB95C* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E795CCB54B8EB95C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_OFFSET))(this, proto);
		}

		::System::Void _ctor_1(::Class_1_9D5608F598A30CAC_29* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__CTOR_1_OFFSET))(this, proto);
		}

		::System::Void _InitCostList(::Class_1_4D5D53619B020DDD* protoCostData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFENHANCEITEM__INITCOSTLIST_OFFSET))(this, protoCostData);
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
