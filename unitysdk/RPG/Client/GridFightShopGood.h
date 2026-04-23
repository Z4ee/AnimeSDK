#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/System/Object.h"

class Class_1_B2AD6E32098E0994;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET UNITYSDK_OFFSET(0xA58F950)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0xA590030)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xA58FEE0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xA58FF50)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xA590080)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET UNITYSDK_OFFSET(0xA58FF00)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xA58FEF0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD__CTOR_OFFSET UNITYSDK_OFFSET(0xA58FED0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopGood_TypeDefinitionIndex = 60062;

	class GridFightShopGood : public ::System::Object
	{
	public:
		::Class_1_B2AD6E32098E0994* _Goods; // 0x10
		::System::UInt32 _GoodIndex_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_B2AD6E32098E0994* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2AD6E32098E0994*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD__CTOR_OFFSET))(this, goods);
		}

		static ::RPG::Client::GridFightShopGood* CreateShopGoodByData(::Class_1_B2AD6E32098E0994* goods, ::System::UInt32 goodIndex)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::Class_1_B2AD6E32098E0994*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET))(goods, goodIndex);
		}

		::System::UInt32 get_GoodIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET))(this);
		}

		::System::Void set_GoodIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_Sold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET))(this);
		}
	};
}
