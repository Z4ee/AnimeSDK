#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B2700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopReplaceRoleEvent_TypeDefinitionIndex = 65283;

	class GridFightShopReplaceRoleEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightShopRole* OldRole; // 0x10
		::RPG::Client::GridFightShopRole* NewRole; // 0x18
		::System::UInt32 ShopIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLEEVENT__CTOR_OFFSET))(this);
		}
	};
}
