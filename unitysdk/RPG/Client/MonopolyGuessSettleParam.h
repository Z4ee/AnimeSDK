#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGUESSSETTLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA5460)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGuessSettleParam_TypeDefinitionIndex = 61029;

	class MonopolyGuessSettleParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ItemDisplayDatas; // 0x10
		::System::UInt32 WinnerID; // 0x18
		::System::UInt32 GuessID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGUESSSETTLEPARAM__CTOR_OFFSET))(this);
		}
	};
}
