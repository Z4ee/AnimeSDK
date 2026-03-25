#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BUYINDEX_OFFSET UNITYSDK_OFFSET(0x98AD6B0)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x98AD6A0)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x98AD690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopBuyEvent_TypeDefinitionIndex = 52972;

	class GridFightShopBuyEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x10
		::System::Int32 _BuyIndex_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightRole* role, ::System::Int32 buyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT__CTOR_OFFSET))(this, role, buyIndex);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_ROLE_OFFSET))(this);
		}

		::System::Int32 get_BuyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BUYINDEX_OFFSET))(this);
		}
	};
}
