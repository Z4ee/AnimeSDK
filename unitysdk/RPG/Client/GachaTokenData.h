#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class GachaTokenShopConfig; }

#define RPG_CLIENT_GACHATOKENDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xA41B040)
#define RPG_CLIENT_GACHATOKENDATA_SET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xA41B050)
#define RPG_CLIENT_GACHATOKENDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA410470)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTokenData_TypeDefinitionIndex = 59179;

	class GachaTokenData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
		::RPG::GameCore::GachaTokenShopConfig* GachaTokenShop; // 0x18
		::System::UInt32 Price; // 0x20

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATOKENDATA__CTOR_OFFSET))(this, itemID);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATOKENDATA_GET_ITEMDATA_OFFSET))(this);
		}

		::System::Void set_ItemData(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATOKENDATA_SET_ITEMDATA_OFFSET))(this, value);
		}
	};
}
