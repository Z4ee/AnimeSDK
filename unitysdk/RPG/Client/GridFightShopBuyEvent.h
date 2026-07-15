#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BUYINDEX_OFFSET UNITYSDK_OFFSET(0x1AD77080)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0x1AD77070)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1AD77060)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD77050)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD77040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopBuyEvent_TypeDefinitionIndex = 62310;

	class GridFightShopBuyEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightProjection* _Projection_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::Int32 _BuyIndex_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::GridFightProjection* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightProjection*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_ROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_Projection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_PROJECTION_OFFSET))(this);
		}

		::System::Int32 get_BuyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BUYINDEX_OFFSET))(this);
		}
	};
}
