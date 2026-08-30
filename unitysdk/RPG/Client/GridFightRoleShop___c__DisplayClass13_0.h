#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD305940)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS13_0__GETSHOPROLECOUNTBYID_B__0_OFFSET UNITYSDK_OFFSET(0xD309A40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c__DisplayClass13_0_TypeDefinitionIndex = 65291;

	class GridFightRoleShop___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShopRoleCountByID_b__0(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS13_0__GETSHOPROLECOUNTBYID_B__0_OFFSET))(this, a1);
		}
	};
}
