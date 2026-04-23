#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECHARGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAF78180)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeItem_TypeDefinitionIndex = 61189;

	class RechargeItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* OrderIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ItemList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ProductIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEITEM__CTOR_OFFSET))(this);
		}
	};
}
