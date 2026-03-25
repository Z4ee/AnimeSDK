#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyGoodsRow; }
namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_ALLEYGOODDATA_GET_GOODSCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x909C660)
#define RPG_CLIENT_ALLEYGOODDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x909C160)
#define RPG_CLIENT_ALLEYGOODDATA_GET_GOODSPIC_OFFSET UNITYSDK_OFFSET(0x909C680)
#define RPG_CLIENT_ALLEYGOODDATA_GET_GOODSPROFIT_OFFSET UNITYSDK_OFFSET(0x909C030)
#define RPG_CLIENT_ALLEYGOODDATA_GET_GOODSPROPPATH_OFFSET UNITYSDK_OFFSET(0x909C6A0)
#define RPG_CLIENT_ALLEYGOODDATA_GET_GOODSTYPE_OFFSET UNITYSDK_OFFSET(0x909C540)
#define RPG_CLIENT_ALLEYGOODDATA_GET_PACKGOODITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x909C180)
#define RPG_CLIENT_ALLEYGOODDATA_GET_REQUIREANCHORSCOUNT_OFFSET UNITYSDK_OFFSET(0x909C440)
#define RPG_CLIENT_ALLEYGOODDATA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x909C640)
#define RPG_CLIENT_ALLEYGOODDATA_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x909C650)
#define RPG_CLIENT_ALLEYGOODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x909BDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyGoodData_TypeDefinitionIndex = 50563;

	class AlleyGoodData : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyGoodsRow* Row; // 0x10
		::System::UInt32 ProfitBase; // 0x18
		::System::UInt32 _ShopID_k__BackingField; // 0x1C
		::System::UInt32 Count; // 0x20

		::System::Void _ctor(::System::UInt32 goodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA__CTOR_OFFSET))(this, goodID);
		}

		::System::UInt32 get_GoodsProfit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_GOODSPROFIT_OFFSET))(this);
		}

		::RPG::GameCore::AlleyPackGoodItemConfig* get_PackGoodItemConfig()
		{
			return ((::RPG::GameCore::AlleyPackGoodItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_PACKGOODITEMCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_RequireAnchorsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_REQUIREANCHORSCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::AlleyPackGoodsTypeEnum get_GoodsType()
		{
			return ((::RPG::GameCore::AlleyPackGoodsTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_GOODSTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_SET_SHOPID_OFFSET))(this, value);
		}

		::System::UInt32 get_GoodsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_GOODSID_OFFSET))(this);
		}

		::System::String* get_GoodsConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_GOODSCONFIGPATH_OFFSET))(this);
		}

		::System::String* get_GoodsPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_GOODSPIC_OFFSET))(this);
		}

		::System::String* get_GoodsPropPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGOODDATA_GET_GOODSPROPPATH_OFFSET))(this);
		}
	};
}
