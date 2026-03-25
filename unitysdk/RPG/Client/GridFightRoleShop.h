#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_626;
class Class_1_789872D6523A4E58;
class Class_1_7A26D3FC0FA90BCA;
class Class_1_7A26D3FC0FA90BCA_1;
class Class_1_D2924896099E0408;
class Class_2_FD0167EB507B9435_1;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightShopAutoRefreshModifier; }
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_1_OFFSET UNITYSDK_OFFSET(0x9896660)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_OFFSET UNITYSDK_OFFSET(0x98964A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CHECKROLELEVELUP_OFFSET UNITYSDK_OFFSET(0x9895AF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ENTERPREPAREREPORT_OFFSET UNITYSDK_OFFSET(0x98987B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETCURRARITYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9896970)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETRARITYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9896CD0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLEBUYPRICE_OFFSET UNITYSDK_OFFSET(0x9896DC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLELEVELUP_OFFSET UNITYSDK_OFFSET(0x98967D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLESELLPRICE_OFFSET UNITYSDK_OFFSET(0x9896FA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLEBYINDEX_OFFSET UNITYSDK_OFFSET(0x9897510)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYIDANDSTAR_OFFSET UNITYSDK_OFFSET(0x9895C00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYID_OFFSET UNITYSDK_OFFSET(0x9895CF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHEDTIMES_OFFSET UNITYSDK_OFFSET(0x9898100)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHENDTIMEMS_OFFSET UNITYSDK_OFFSET(0x9897ED0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9897F90)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHLEFTSEC_OFFSET UNITYSDK_OFFSET(0x9898440)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHSTARTTIMEMS_OFFSET UNITYSDK_OFFSET(0x9897F30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMERATIO_OFFSET UNITYSDK_OFFSET(0x9898250)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_AUTOREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x98980A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTRATIO_OFFSET UNITYSDK_OFFSET(0x9897AB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFTSECS_OFFSET UNITYSDK_OFFSET(0x9897C80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHLEFT_OFFSET UNITYSDK_OFFSET(0x9897DB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHSTARTTIME_OFFSET UNITYSDK_OFFSET(0x9897950)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_CLEARREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x98978F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_FREEREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x98978D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x9897FF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_INCLEARREFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x98979B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISFREEREFRESH_OFFSET UNITYSDK_OFFSET(0x9897770)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9897750)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISREFRESHGOLDCHANGED_OFFSET UNITYSDK_OFFSET(0x9897780)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9897580)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_NEEDSHOWREFRESH_OFFSET UNITYSDK_OFFSET(0x9898760)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_RARITYWEIGHTS_OFFSET UNITYSDK_OFFSET(0x9897730)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET_UNSOLDSHOPROLES_OFFSET UNITYSDK_OFFSET(0x98975F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPROLES_OFFSET UNITYSDK_OFFSET(0x9895010)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_GET__SHOPSPECIAL_OFFSET UNITYSDK_OFFSET(0x9898560)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_INIT_OFFSET UNITYSDK_OFFSET(0x9894AA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ISRARITYWEIGHTENHANCED_OFFSET UNITYSDK_OFFSET(0x9896B00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ISROLERECOMMAND_OFFSET UNITYSDK_OFFSET(0x9896920)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_LOCKSHOP_OFFSET UNITYSDK_OFFSET(0x9897480)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x9894E80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x9894C40)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x9894D60)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSHOPGOODS_OFFSET UNITYSDK_OFFSET(0x9897120)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SELLROLE_OFFSET UNITYSDK_OFFSET(0x9897310)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9895210)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_FREEREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x98978E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9897760)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SET_RARITYWEIGHTS_OFFSET UNITYSDK_OFFSET(0x9897740)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SYNC_OFFSET UNITYSDK_OFFSET(0x98953B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRYBUYROLE_OFFSET UNITYSDK_OFFSET(0x9895DD0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATESHOPROLES_OFFSET UNITYSDK_OFFSET(0x9895560)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATE_OFFSET UNITYSDK_OFFSET(0x9895870)
#define RPG_CLIENT_GRIDFIGHTROLESHOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x9898940)
#define RPG_CLIENT_GRIDFIGHTROLESHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x98988C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_TypeDefinitionIndex = 52963;

	class GridFightRoleShop : public ::Sofa::Core::ObservableObject
	{
	public:
		static ::System::Int32* StaticGet_ShopRefreshGold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop_TypeDefinitionIndex)->GetStaticField(0x5B10);
		}
		static ::System::Int32* StaticGet_ShopSlotNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop_TypeDefinitionIndex)->GetStaticField(0x5B14);
		}
		::RPG::Client::GridFightShopAutoRefreshModifier* _AutoRefreshModifier; // 0x18
		::Class_2_FD0167EB507B9435_1* _ClearRefreshModifier; // 0x20
		::Il2CppArray<::System::UInt32>* _RarityWeights_k__BackingField; // 0x28
		::Il2CppArray<::RPG::Client::GridFightShopGood*>* _ShopGoods; // 0x30
		::System::Boolean _EnterNodeRefresh; // 0x38
		::System::Boolean _IsLocked_k__BackingField; // 0x39
		::System::UInt32 _FreeRefreshTimes_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP__CCTOR_OFFSET))();
		}

		::System::Void Init(::Class_1_789872D6523A4E58* gameModifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_789872D6523A4E58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_INIT_OFFSET))(this, gameModifier);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERADD_OFFSET))(this, modifier);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONMODIFIERREMOVE_OFFSET))(this, modifier);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ONAVATARDATACHANGED_OFFSET))(this, avatarRealID);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Sync(::Class_1_7A26D3FC0FA90BCA* shopInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SYNC_OFFSET))(this, shopInfo);
		}

		::System::Void Update(::Class_1_7A26D3FC0FA90BCA_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATE_OFFSET))(this, update);
		}

		::System::Boolean CheckRoleLevelUp(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CHECKROLELEVELUP_OFFSET))(this, id, star);
		}

		::System::UInt32 GetShopRoleCountByIDAndStar(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYIDANDSTAR_OFFSET))(this, id, star);
		}

		::System::UInt32 GetShopRoleCountByID(::System::UInt32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLECOUNTBYID_OFFSET))(this, id);
		}

		::System::Boolean TryBuyRole(::System::UInt32 goodIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRYBUYROLE_OFFSET))(this, goodIndex);
		}

		::System::UInt32 GetRoleLevelUp(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLELEVELUP_OFFSET))(this, id, star);
		}

		::System::Boolean IsRoleRecommand(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ISROLERECOMMAND_OFFSET))(this, id);
		}

		::System::UInt32 GetCurRarityWeight(::System::UInt32 rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETCURRARITYWEIGHT_OFFSET))(this, rarity);
		}

		::System::Boolean IsRarityWeightEnhanced(::System::UInt32 rarity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ISRARITYWEIGHTENHANCED_OFFSET))(this, rarity);
		}

		::System::UInt32 GetRarityWeight(::System::UInt32 level, ::System::UInt32 rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETRARITYWEIGHT_OFFSET))(this, level, rarity);
		}

		::System::UInt32 GetRoleBuyPrice(::RPG::Client::GridFightShopRole* shopRole)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLEBUYPRICE_OFFSET))(this, shopRole);
		}

		::System::UInt32 GetRoleSellPrice(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETROLESELLPRICE_OFFSET))(this, id, star);
		}

		::System::Void RefreshShopGoods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSHOPGOODS_OFFSET))(this);
		}

		::System::Void BuyRole(::System::UInt32 goodIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_OFFSET))(this, goodIndex);
		}

		::System::Void BuyRole_1(::System::Collections::Generic::List_1<::System::UInt32>* goodIndexs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLE_1_OFFSET))(this, goodIndexs);
		}

		::System::Void SellRole(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SELLROLE_OFFSET))(this, uid);
		}

		::System::Void LockShop(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_LOCKSHOP_OFFSET))(this, isLock);
		}

		::RPG::Client::GridFightShopGood* GetShopRoleByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GETSHOPROLEBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::GridFightShopGood* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ITEM_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopGood*>* get_UnsoldShopRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_UNSOLDSHOPROLES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RarityWeights()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_RARITYWEIGHTS_OFFSET))(this);
		}

		::System::Void set_RarityWeights(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_RARITYWEIGHTS_OFFSET))(this, value);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_ISLOCKED_OFFSET))(this, value);
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

		::System::Void set_FreeRefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SET_FREEREFRESHTIMES_OFFSET))(this, value);
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

		::System::Void UpdateShopRoles(::System::Collections::Generic::IList_1<::Class_1_D2924896099E0408*>* shopGoods)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D2924896099E0408*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_UPDATESHOPROLES_OFFSET))(this, shopGoods);
		}

		::System::Void EnterPrepareReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_ENTERPREPAREREPORT_OFFSET))(this);
		}
	};
}
