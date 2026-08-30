#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatShopGoodType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_11;
namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace RPG::GameCore { class ActivityDiceCombatShopRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_CONTAINSGOODID_OFFSET UNITYSDK_OFFSET(0x1C419E60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4192F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GETSHOPGOODSBYGOODTYPE_OFFSET UNITYSDK_OFFSET(0x1C41A570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GETSHOPGOOD_OFFSET UNITYSDK_OFFSET(0x1C41A3D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_ALLSHOPGOODS_OFFSET UNITYSDK_OFFSET(0x1C41A6B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_AVATARGOODS_OFFSET UNITYSDK_OFFSET(0x1C41A6D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0x1C41A7D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_DICEGOODS_OFFSET UNITYSDK_OFFSET(0x1C41A6F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x1C41A710)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C4166E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SHOPNAME_OFFSET UNITYSDK_OFFSET(0x1C41A760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C41A660)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SET_ALLSHOPGOODS_OFFSET UNITYSDK_OFFSET(0x1C41A6C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SET_AVATARGOODS_OFFSET UNITYSDK_OFFSET(0x1C41A6E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SET_DICEGOODS_OFFSET UNITYSDK_OFFSET(0x1C41A700)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SORTGOODLIST_OFFSET UNITYSDK_OFFSET(0x1C41A1B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4192E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatShopData_TypeDefinitionIndex = 75605;

	class DiceCombatShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* _AvatarGoods_k__BackingField; // 0x10
		::RPG::GameCore::ActivityDiceCombatShopRow* _ShopRow; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* _DiceGoods_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* _AllShopGoods_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatShopData* Create(::Class_1_FDFA365FE186E8F2_11* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopData*(*)(::Class_1_FDFA365FE186E8F2_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Boolean ContainsGoodID(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_CONTAINSGOODID_OFFSET))(a1, a2);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGood(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GETSHOPGOOD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* GetShopGoodsByGoodType(::RPG::Client::DiceCombat::DiceCombatShopGoodType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatShopGoodType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GETSHOPGOODSBYGOODTYPE_OFFSET))(this, a1);
		}

		::System::Void SortGoodList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SORTGOODLIST_OFFSET))(this);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SHOPID_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* get_AllShopGoods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_ALLSHOPGOODS_OFFSET))(this);
		}

		::System::Void set_AllShopGoods(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SET_ALLSHOPGOODS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* get_AvatarGoods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_AVATARGOODS_OFFSET))(this);
		}

		::System::Void set_AvatarGoods(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SET_AVATARGOODS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* get_DiceGoods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_DICEGOODS_OFFSET))(this);
		}

		::System::Void set_DiceGoods(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_SET_DICEGOODS_OFFSET))(this, a1);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SHOPICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShopName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_SHOPNAME_OFFSET))(this);
		}

		::System::UInt32 get_CurrencyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSHOPDATA_GET_CURRENCYID_OFFSET))(this);
		}
	};
}
