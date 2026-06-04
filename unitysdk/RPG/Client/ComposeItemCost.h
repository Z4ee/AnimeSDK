#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemMaterial; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPOSEITEMCOST_CLEAR_OFFSET UNITYSDK_OFFSET(0xB702D50)
#define RPG_CLIENT_COMPOSEITEMCOST__CTOR_OFFSET UNITYSDK_OFFSET(0xB702DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemCost_TypeDefinitionIndex = 61471;

	class ComposeItemCost : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemMaterial*>* MaterialList; // 0x10
		::System::UInt32 CoinCost; // 0x18
		::System::Boolean IsMaterialLack; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMCOST__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMCOST_CLEAR_OFFSET))(this);
		}
	};
}
