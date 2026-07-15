#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEREWARDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19531680)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameRewardParam_TypeDefinitionIndex = 63327;

	class MonopolyGameRewardParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ItemDisplayDatas; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ExtraItemDisplayDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEREWARDPARAM__CTOR_OFFSET))(this);
		}
	};
}
