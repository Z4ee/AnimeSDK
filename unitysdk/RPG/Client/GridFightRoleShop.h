#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_768;
class Class_1_1363318BFADF4D80;
class Class_1_19E8636AE6D65360_1;
class Class_1_E577B5580A99D425_6;
class Class_2_FD0167EB507B9435_1;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightShopAutoRefreshModifier; }
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopReplaceRoleEvent; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_1_OFFSET UNITYSDK_OFFSET(0xBBE5A50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_OFFSET UNITYSDK_OFFSET(0xBBE5820)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CHECKROLELEVELUP_OFFSET UNITYSDK_OFFSET(0xBBE4DC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ENTERPREPAREREPORT_OFFSET UNITYSDK_OFFSET(0xBBE8710)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETCURRARITYWEIGHT_OFFSET UNITYSDK_OFFSET(0xBBE5D70)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETRARITYWEIGHT_OFFSET UNITYSDK_OFFSET(0xBBE6120)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLEBUYPRICE_OFFSET UNITYSDK_OFFSET(0xBBE6210)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLELEVELUP_OFFSET UNITYSDK_OFFSET(0xBBE5BC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLESELLPRICE_OFFSET UNITYSDK_OFFSET(0xBBE6460)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLEBYINDEX_OFFSET UNITYSDK_OFFSET(0xBBE6A00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0xBBE4ED0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYID_OFFSET UNITYSDK_OFFSET(0xBBE4FE0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHEDTIMES_OFFSET UNITYSDK_OFFSET(0xBBE7BA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xBBE73E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0xBBE7810)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHLEFTSEC_OFFSET UNITYSDK_OFFSET(0xBBE7D70)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHSTARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xBBE76A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMERATIO_OFFSET UNITYSDK_OFFSET(0xBBE7C50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xBBE7A30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTRATIO_OFFSET UNITYSDK_OFFSET(0xBBE6FC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTSECS_OFFSET UNITYSDK_OFFSET(0xBBE7190)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFT_OFFSET UNITYSDK_OFFSET(0xBBE72C0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHSTARTTIME_OFFSET UNITYSDK_OFFSET(0xBBE6E60)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xBBE6E00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xBBE7EB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_FREEREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xBBE6DE0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0xBBE7980)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INCLEARREFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xBBE6EC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISFREEREFRESH_OFFSET UNITYSDK_OFFSET(0xBBE6C80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xBBE6C60)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISREFRESHGOLDCHANGED_OFFSET UNITYSDK_OFFSET(0xBBE6C90)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xBBE6A70)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_NEEDSHOWREFRESH_OFFSET UNITYSDK_OFFSET(0xBBE8110)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_RARITYWEIGHTS_OFFSET UNITYSDK_OFFSET(0xBBE6C40)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_SHOPREPLACEROLE_OFFSET UNITYSDK_OFFSET(0xBBE7E90)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_UNSOLDSHOPROLES_OFFSET UNITYSDK_OFFSET(0xBBE6AE0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPROLES_OFFSET UNITYSDK_OFFSET(0xBBE40B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPSPECIAL_OFFSET UNITYSDK_OFFSET(0xBBE7ED0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_INIT_OFFSET UNITYSDK_OFFSET(0xBBE3B50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ISRARITYWEIGHTENHANCED_OFFSET UNITYSDK_OFFSET(0xBBE5F20)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ISROLERECOMMAND_OFFSET UNITYSDK_OFFSET(0xBBE5D20)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_LOCKSHOP_OFFSET UNITYSDK_OFFSET(0xBBE6970)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xBBE3F20)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xBBE3CF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xBBE3DF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONOPTIONROLECHANGED_OFFSET UNITYSDK_OFFSET(0xBBE82D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSHOPGOODS_OFFSET UNITYSDK_OFFSET(0xBBE6610)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SELLROLE_OFFSET UNITYSDK_OFFSET(0xBBE6800)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBBE4310)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_EXCEPTEDROLEIDS_OFFSET UNITYSDK_OFFSET(0xBBE7EC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_FREEREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xBBE6DF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xBBE6C70)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_RARITYWEIGHTS_OFFSET UNITYSDK_OFFSET(0xBBE6C50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_SHOPREPLACEROLE_OFFSET UNITYSDK_OFFSET(0xBBE7EA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SYNC_OFFSET UNITYSDK_OFFSET(0xBBE4670)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRYBUYROLE_OFFSET UNITYSDK_OFFSET(0xBBE50E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATESHOPROLES_OFFSET UNITYSDK_OFFSET(0xBBE4840)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATE_OFFSET UNITYSDK_OFFSET(0xBBE4B00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBE88A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE8820)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_TypeDefinitionIndex = 60985;

	class GridFightRoleShop : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::System::Int32* StaticGet_ShopRefreshGold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop_TypeDefinitionIndex)->GetStaticField(0x81A0);
		}
		static ::System::Int32* StaticGet_ShopSlotNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop_TypeDefinitionIndex)->GetStaticField(0x81A4);
		}
		::Il2CppArray<::RPG::Client::GridFightShopGood*>* _ShopGoods; // 0x18
		::RPG::Client::GridFightShopAutoRefreshModifier* _AutoRefreshModifier; // 0x20
		::RPG::Client::GridFightShopReplaceRoleEvent* _ShopReplaceRole_k__BackingField; // 0x28
		::Class_2_FD0167EB507B9435_1* _ClearRefreshModifier; // 0x30
		::Il2CppArray<::System::UInt32>* _RarityWeights_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ExceptedRoleIDs_k__BackingField; // 0x40
		::System::UInt32 _FreeRefreshTimes_k__BackingField; // 0x48
		::System::Boolean _IsLocked_k__BackingField; // 0x4C
		::System::Boolean _EnterNodeRefresh; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_INIT_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_E577B5580A99D425_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SYNC_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_19E8636AE6D65360_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean CheckRoleLevelUp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CHECKROLELEVELUP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetShopRoleCountByIDAndStar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYIDANDSTAR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetShopRoleCountByID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYID_OFFSET))(this, a1);
		}

		::System::Boolean TryBuyRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRYBUYROLE_OFFSET))(this, a1);
		}

		::System::UInt32 GetRoleLevelUp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLELEVELUP_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsRoleRecommand(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ISROLERECOMMAND_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurRarityWeight(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETCURRARITYWEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean IsRarityWeightEnhanced(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ISRARITYWEIGHTENHANCED_OFFSET))(this, a1);
		}

		::System::UInt32 GetRarityWeight(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETRARITYWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetRoleBuyPrice(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLEBUYPRICE_OFFSET))(this, a1);
		}

		::System::UInt32 GetRoleSellPrice(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLESELLPRICE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshShopGoods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSHOPGOODS_OFFSET))(this);
		}

		::System::Void BuyRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_OFFSET))(this, a1);
		}

		::System::Void BuyRole_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_1_OFFSET))(this, a1);
		}

		::System::Void SellRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SELLROLE_OFFSET))(this, a1);
		}

		::System::Void LockShop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_LOCKSHOP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopGood* GetShopRoleByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLEBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopGood* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopGood*>* get_UnsoldShopRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_UNSOLDSHOPROLES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RarityWeights()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_RARITYWEIGHTS_OFFSET))(this);
		}

		::System::Void set_RarityWeights(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_RARITYWEIGHTS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFreeRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISFREEREFRESH_OFFSET))(this);
		}

		::System::Boolean get_IsRefreshGoldChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISREFRESHGOLDCHANGED_OFFSET))(this);
		}

		::System::UInt32 get_FreeRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_FREEREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_FreeRefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_FREEREFRESHTIMES_OFFSET))(this, a1);
		}

		::System::Int64 get_ClearRefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHTIME_OFFSET))(this);
		}

		::System::Int64 get_ClearRefreshStartTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHSTARTTIME_OFFSET))(this);
		}

		::System::Boolean get_InClearRefreshCountDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INCLEARREFRESHCOUNTDOWN_OFFSET))(this);
		}

		::System::Single get_ClearRefreshLeftRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTRATIO_OFFSET))(this);
		}

		::System::Int32 get_ClearRefreshLeftSecs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTSECS_OFFSET))(this);
		}

		::System::Single get_ClearRefreshLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFT_OFFSET))(this);
		}

		::System::UInt64 get_AutoRefreshEndTimeMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHENDTIMEMS_OFFSET))(this);
		}

		::System::UInt64 get_AutoRefreshStartTimeMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHSTARTTIMEMS_OFFSET))(this);
		}

		::System::UInt32 get_AutoRefreshInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHINTERVAL_OFFSET))(this);
		}

		::System::Boolean get_InAutoRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INAUTOREFRESH_OFFSET))(this);
		}

		::System::UInt32 get_AutoRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMES_OFFSET))(this);
		}

		::System::UInt32 get_AutoRefreshedTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHEDTIMES_OFFSET))(this);
		}

		::System::Single get_AutoRefreshTimeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMERATIO_OFFSET))(this);
		}

		::System::Int32 get_AutoRefreshLeftSec()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHLEFTSEC_OFFSET))(this);
		}

		::RPG::Client::GridFightShopReplaceRoleEvent* get_ShopReplaceRole()
		{
			return ((::RPG::Client::GridFightShopReplaceRoleEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_SHOPREPLACEROLE_OFFSET))(this);
		}

		::System::Void set_ShopReplaceRole(::RPG::Client::GridFightShopReplaceRoleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightShopReplaceRoleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_SHOPREPLACEROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ExceptedRoleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_EXCEPTEDROLEIDS_OFFSET))(this);
		}

		::System::Void set_ExceptedRoleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_EXCEPTEDROLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopRole*>* get__ShopRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopSpecialGood*>* get__ShopSpecial()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopSpecialGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPSPECIAL_OFFSET))(this);
		}

		::System::Boolean get_NeedShowRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_NEEDSHOWREFRESH_OFFSET))(this);
		}

		::System::Void UpdateShopRoles(::System::Collections::Generic::IList_1<::Class_1_1363318BFADF4D80*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1363318BFADF4D80*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATESHOPROLES_OFFSET))(this, a1);
		}

		::System::Void OnOptionRoleChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONOPTIONROLECHANGED_OFFSET))(this);
		}

		::System::Void EnterPrepareReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ENTERPREPAREREPORT_OFFSET))(this);
		}
	};
}
