#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfTradeOrderData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA240700)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS9_0___CHECKSHOPTRADEORDERHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xA240710)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass9_0_TypeDefinitionIndex = 58700;

	class ElfHintToastManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* seen; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckShopTradeOrderHints_b__0(::RPG::Client::ElfTradeOrderData* order)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfTradeOrderData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS9_0___CHECKSHOPTRADEORDERHINTS_B__0_OFFSET))(this, order);
		}
	};
}
