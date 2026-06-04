#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyShopDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MONOPOLYSHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC18CA30)
#define RPG_CLIENT_MONOPOLYSHOPINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC18C7A0)
#define RPG_CLIENT_MONOPOLYSHOPINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xC18C9F0)
#define RPG_CLIENT_MONOPOLYSHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC18CAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyShopInfo_TypeDefinitionIndex = 61984;

	class MonopolyShopInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyShopDataItem*>* ShopDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSHOPINFO_DISPOSE_OFFSET))(this);
		}
	};
}
