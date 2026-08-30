#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComposeItemFailedType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FormulaType.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"
#include "unitysdk/RPG/GameCore/ItemComposeLimitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_0_16E4307DCC419505_894;
class Class_2_67B0EA80430D1621;
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemMaterial; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace RPG::GameCore { class ItemComposeTypeRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPOSEITEMDATA_CANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A28C2F0)
#define RPG_CLIENT_COMPOSEITEMDATA_GETCOSTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A28CF90)
#define RPG_CLIENT_COMPOSEITEMDATA_GETMAXCOMPOSECOUNT_OFFSET UNITYSDK_OFFSET(0x1A28E1E0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_CHECKITEMOFCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A28D400)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_COINCOST_OFFSET UNITYSDK_OFFSET(0x1A28CC10)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1A28BF80)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A28BFA0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A28C8A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_FORMULATYPE_OFFSET UNITYSDK_OFFSET(0x1A28CB40)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0x1A28C5C0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A28C9F0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISACCELERATEDTYPECOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A28D1B0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANACCELERATEDCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A28D240)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A28C4F0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISEQUIVALENTEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1A28D2A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISFORMULAUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A28C340)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1A28C130)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0x1A28CF30)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEREQUIRE_OFFSET UNITYSDK_OFFSET(0x1A28CC60)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A28CCC0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1A28CEA0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A28C750)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1A28CB90)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A28BF10)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x1A28D350)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0x1A28D300)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITVALUE_OFFSET UNITYSDK_OFFSET(0x1A28D3B0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_MAINTYPE_OFFSET UNITYSDK_OFFSET(0x1A28C6D0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_MATERIALCOSTARRAY_OFFSET UNITYSDK_OFFSET(0x1A28C9A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A28C7A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A28CAC0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_REMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0x1A28CE10)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1A28BF60)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_TYPEROW_OFFSET UNITYSDK_OFFSET(0x1A28C610)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A28C570)
#define RPG_CLIENT_COMPOSEITEMDATA_HASEQUIVALENTEXCHANGEITEMCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A28ECC0)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1A28BF90)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1A28CEE0)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_REMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0x1A28CE50)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1A28BF70)
#define RPG_CLIENT_COMPOSEITEMDATA__CONVERTMATERIALCOSTARR_OFFSET UNITYSDK_OFFSET(0x1A28DBE0)
#define RPG_CLIENT_COMPOSEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A28BCA0)
#define RPG_CLIENT_COMPOSEITEMDATA__GENERATECOSTMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1A28D440)
#define RPG_CLIENT_COMPOSEITEMDATA__GETACCELERATEDTYPEMAXCOMPOSECOUNT_OFFSET UNITYSDK_OFFSET(0x1A28E580)
#define RPG_CLIENT_COMPOSEITEMDATA__MERGEMATERIALLISTKIND_OFFSET UNITYSDK_OFFSET(0x1A28DEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemData_TypeDefinitionIndex = 65820;

	class ComposeItemData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaterialComposeMainTypeID = 0xA; // 0x0
		::Class_0_16E4307DCC419505_894* _QuantityProvider; // 0x10
		::RPG::GameCore::ItemComposeConfigRow* _Row_k__BackingField; // 0x18
		::Class_2_67B0EA80430D1621* _CheckItemOfCanCompose; // 0x20
		::RPG::GameCore::ItemComposeTypeRow* _TypeRow; // 0x28
		::RPG::Client::ItemData* _ItemData; // 0x30
		::System::Boolean _IsNew; // 0x38
		::System::UInt32 _ConfigID_k__BackingField; // 0x3C
		::System::UInt32 _RemainComposeNum; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_894* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_894*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ItemComposeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ItemComposeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComposeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_CONFIGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsCanCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANCOMPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Type()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemComposeFuncType get_FuncType()
		{
			return ((::RPG::GameCore::ItemComposeFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemComposeTypeRow* get_TypeRow()
		{
			return ((::RPG::GameCore::ItemComposeTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_TYPEROW_OFFSET))(this);
		}

		::System::UInt32 get_MainType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_MAINTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_MaterialCostArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_MATERIALCOSTARRAY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::FormulaType get_FormulaType()
		{
			return ((::RPG::GameCore::FormulaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_FORMULATYPE_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::UInt32 get_CoinCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_COINCOST_OFFSET))(this);
		}

		::System::Boolean get_IsFormulaUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISFORMULAUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsModuleRequire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEREQUIRE_OFFSET))(this);
		}

		::System::Boolean get_IsModuleUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_RemainComposeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_REMAINCOMPOSENUM_OFFSET))(this);
		}

		::System::Void set_RemainComposeNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_REMAINCOMPOSENUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMaterialEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISMATERIALENOUGH_OFFSET))(this);
		}

		::System::Boolean get_IsAcceleratedTypeCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISACCELERATEDTYPECOMPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsCanAcceleratedCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANACCELERATEDCOMPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsEquivalentExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISEQUIVALENTEXCHANGE_OFFSET))(this);
		}

		::RPG::GameCore::ItemComposeLimitType get_LimitType()
		{
			return ((::RPG::GameCore::ItemComposeLimitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LimitTypeParam()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_LimitValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITVALUE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_663* get_CheckItemOfCanCompose()
		{
			return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_CHECKITEMOFCANCOMPOSE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemFailedType CanCompose()
		{
			return ((::RPG::Client::ComposeItemFailedType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_CANCOMPOSE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemCost* GetCostMaterial(::System::UInt32 a1)
		{
			return ((::RPG::Client::ComposeItemCost*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GETCOSTMATERIAL_OFFSET))(this, a1);
		}

		::System::Void _ConvertMaterialCostArr(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1, ::System::UInt32 a2, ::RPG::Client::ComposeItemCost* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__CONVERTMATERIALCOSTARR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GenerateCostMaterialList(::RPG::Client::ComposeItemData* a1, ::System::UInt32 a2, ::RPG::Client::ComposeItemCost* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::System::UInt32, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__GENERATECOSTMATERIALLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _MergeMaterialListKind(::System::Collections::Generic::List_1<::RPG::Client::ComposeItemMaterial*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ComposeItemMaterial*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__MERGEMATERIALLISTKIND_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxComposeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GETMAXCOMPOSECOUNT_OFFSET))(this);
		}

		::System::UInt32 _GetAcceleratedTypeMaxComposeCount(::RPG::Client::ComposeItemData* a1, ::RPG::Client::ComposeItemCost* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__GETACCELERATEDTYPEMAXCOMPOSECOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasEquivalentExchangeItemCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_HASEQUIVALENTEXCHANGEITEMCOMPOSE_OFFSET))(this);
		}
	};
}
