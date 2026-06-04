#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ShopGoodsConfigRow; }
namespace RPG::GameCore { class ShopGoodsPackConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYBUNDLEID_OFFSET UNITYSDK_OFFSET(0xC8BFB30)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYCOMBOGOODID_OFFSET UNITYSDK_OFFSET(0xC8BF950)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC8BFAA0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEGOODSID_OFFSET UNITYSDK_OFFSET(0xC8BFC80)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLENAME_OFFSET UNITYSDK_OFFSET(0xC8BFF40)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEPRICE_OFFSET UNITYSDK_OFFSET(0xC8BFDD0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD1NAME_OFFSET UNITYSDK_OFFSET(0xC8C0020)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD2NAME_OFFSET UNITYSDK_OFFSET(0xC8C0100)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS1ORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xC8BFE60)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS2ORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xC8BFED0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID1_OFFSET UNITYSDK_OFFSET(0xC8BFCA0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID2_OFFSET UNITYSDK_OFFSET(0xC8BFD00)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0xC8BFD40)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_HASDISCOUNT_OFFSET UNITYSDK_OFFSET(0xC8BFD20)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM1ID_OFFSET UNITYSDK_OFFSET(0xC8BFCC0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM2ID_OFFSET UNITYSDK_OFFSET(0xC8BFCE0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xC8BFE40)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8C01E0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC8BF8D0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG__READCONFIGS_OFFSET UNITYSDK_OFFSET(0xC8BF510)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopGoodsPackConfig_TypeDefinitionIndex = 63572;

	class ShopGoodsPackConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>** StaticGet__PackConfigByGoodID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsPackConfig_TypeDefinitionIndex)->GetStaticField(0x46980);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>** StaticGet__PackConfigByComboGoodID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsPackConfig_TypeDefinitionIndex)->GetStaticField(0x46988);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::ShopGoodsPackConfigRow*>** StaticGet__Configs()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::ShopGoodsPackConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsPackConfig_TypeDefinitionIndex)->GetStaticField(0x46990);
		}
		::RPG::GameCore::ShopGoodsConfigRow* _BundleRow; // 0x10
		::RPG::GameCore::ShopGoodsConfigRow* _Combo2Row; // 0x18
		::RPG::GameCore::ShopGoodsPackConfigRow* _Row; // 0x20
		::RPG::GameCore::ShopGoodsConfigRow* _Combo1Row; // 0x28

		::System::Void _ctor(::RPG::GameCore::ShopGoodsPackConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShopGoodsPackConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void _ReadConfigs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG__READCONFIGS_OFFSET))();
		}

		static ::RPG::Client::ShopGoodsPackConfig* GetConfigByComboGoodID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShopGoodsPackConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYCOMBOGOODID_OFFSET))(a1);
		}

		static ::RPG::Client::ShopGoodsPackConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShopGoodsPackConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::ShopGoodsPackConfig* GetConfigByBundleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShopGoodsPackConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYBUNDLEID_OFFSET))(a1);
		}

		::System::UInt32 get_BundleGoodsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEGOODSID_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoodsID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID1_OFFSET))(this);
		}

		::System::UInt32 get_Item1ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM1ID_OFFSET))(this);
		}

		::System::UInt32 get_Item2ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM2ID_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoodsID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID2_OFFSET))(this);
		}

		::System::Boolean get_HasDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_HASDISCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Discount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_DISCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_BundlePrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEPRICE_OFFSET))(this);
		}

		::System::UInt32 get_OriginalPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ORIGINALPRICE_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoods1OriginalPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS1ORIGINALPRICE_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoods2OriginalPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS2ORIGINALPRICE_OFFSET))(this);
		}

		::RPG::Client::TextID get_BundleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ComboGood1Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD1NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ComboGood2Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD2NAME_OFFSET))(this);
		}
	};
}
