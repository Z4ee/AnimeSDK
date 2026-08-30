#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCE56120)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS8_0___CHECKSHOPGOODSHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xCE56130)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass8_0_TypeDefinitionIndex = 63767;

	class ElfHintToastManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* seen; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckShopGoodsHints_b__0(::RPG::Client::ElfShopItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS8_0___CHECKSHOPGOODSHINTS_B__0_OFFSET))(this, a1);
		}
	};
}
