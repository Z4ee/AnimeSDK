#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComposeItemFailedType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FormulaType.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"
#include "unitysdk/RPG/GameCore/ItemComposeLimitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_570;
class Class_0_16E4307DCC419505_754;
class Class_2_67B0EA80430D1621;
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemMaterial; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace RPG::GameCore { class ItemComposeTypeRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPOSEITEMDATA_CANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xA0C43E0)
#define RPG_CLIENT_COMPOSEITEMDATA_GETCOSTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0C4C10)
#define RPG_CLIENT_COMPOSEITEMDATA_GETMAXCOMPOSECOUNT_OFFSET UNITYSDK_OFFSET(0xA0C5AA0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_CHECKITEMOFCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xA0C5020)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_COINCOST_OFFSET UNITYSDK_OFFSET(0xA0C4980)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA0C4160)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA0C4180)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA0C4780)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_FORMULATYPE_OFFSET UNITYSDK_OFFSET(0xA0C4940)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA0C4580)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA0C4860)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISACCELERATEDTYPECOMPOSE_OFFSET UNITYSDK_OFFSET(0xA0C4DD0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANACCELERATEDCOMPOSE_OFFSET UNITYSDK_OFFSET(0xA0C4E60)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xA0C4500)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISEQUIVALENTEXCHANGE_OFFSET UNITYSDK_OFFSET(0xA0C4EC0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISFORMULAUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA0C4430)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xA0C4280)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0xA0C4BB0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEREQUIRE_OFFSET UNITYSDK_OFFSET(0xA0C49A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISMODULEUNLOCK_OFFSET UNITYSDK_OFFSET(0xA0C49C0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA0C4B50)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA0C46A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xA0C4960)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA0C4120)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPEPARAM_OFFSET UNITYSDK_OFFSET(0xA0C4F70)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0xA0C4F20)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_LIMITVALUE_OFFSET UNITYSDK_OFFSET(0xA0C4FD0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_MAINTYPE_OFFSET UNITYSDK_OFFSET(0xA0C4620)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_MATERIALCOSTARRAY_OFFSET UNITYSDK_OFFSET(0xA0C4840)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA0C46C0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA0C48D0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_REMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0xA0C4B30)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA0C4140)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_TYPEROW_OFFSET UNITYSDK_OFFSET(0xA0C45A0)
#define RPG_CLIENT_COMPOSEITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA0C4560)
#define RPG_CLIENT_COMPOSEITEMDATA_HASEQUIVALENTEXCHANGEITEMCOMPOSE_OFFSET UNITYSDK_OFFSET(0xA0C6220)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA0C4170)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA0C4B60)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_REMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0xA0C4B40)
#define RPG_CLIENT_COMPOSEITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA0C4150)
#define RPG_CLIENT_COMPOSEITEMDATA__CONVERTMATERIALCOSTARR_OFFSET UNITYSDK_OFFSET(0xA0C5600)
#define RPG_CLIENT_COMPOSEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C3E90)
#define RPG_CLIENT_COMPOSEITEMDATA__GENERATECOSTMATERIALLIST_OFFSET UNITYSDK_OFFSET(0xA0C5060)
#define RPG_CLIENT_COMPOSEITEMDATA__GETACCELERATEDTYPEMAXCOMPOSECOUNT_OFFSET UNITYSDK_OFFSET(0xA0C5D40)
#define RPG_CLIENT_COMPOSEITEMDATA__MERGEMATERIALLISTKIND_OFFSET UNITYSDK_OFFSET(0xA0C5820)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemData_TypeDefinitionIndex = 60539;

	class ComposeItemData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaterialComposeMainTypeID = 0xA; // 0x0
		::Class_2_67B0EA80430D1621* _CheckItemOfCanCompose; // 0x10
		::RPG::GameCore::ItemComposeTypeRow* _TypeRow; // 0x18
		::RPG::GameCore::ItemComposeConfigRow* _Row_k__BackingField; // 0x20
		::RPG::Client::ItemData* _ItemData; // 0x28
		::Class_0_16E4307DCC419505_754* _QuantityProvider; // 0x30
		::System::UInt32 _RemainComposeNum; // 0x38
		::System::Boolean _IsNew; // 0x3C
		::System::UInt32 _ConfigID_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 composeId, ::Class_0_16E4307DCC419505_754* quantityProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_754*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__CTOR_OFFSET))(this, composeId, quantityProvider);
		}

		::RPG::GameCore::ItemComposeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ItemComposeConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComposeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_CONFIGID_OFFSET))(this, value);
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

		::System::Void set_RemainComposeNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_REMAINCOMPOSENUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_SET_ISNEW_OFFSET))(this, value);
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

		::Class_0_16E4307DCC419505_570* get_CheckItemOfCanCompose()
		{
			return ((::Class_0_16E4307DCC419505_570*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GET_CHECKITEMOFCANCOMPOSE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemFailedType CanCompose()
		{
			return ((::RPG::Client::ComposeItemFailedType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_CANCOMPOSE_OFFSET))(this);
		}

		::RPG::Client::ComposeItemCost* GetCostMaterial(::System::UInt32 composeCount)
		{
			return ((::RPG::Client::ComposeItemCost*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GETCOSTMATERIAL_OFFSET))(this, composeCount);
		}

		::System::Void _ConvertMaterialCostArr(::Il2CppArray<::RPG::GameCore::ItemConfig*>* materialCostArr, ::System::UInt32 composeCount, ::RPG::Client::ComposeItemCost* composeCost)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__CONVERTMATERIALCOSTARR_OFFSET))(this, materialCostArr, composeCount, composeCost);
		}

		::System::Void _GenerateCostMaterialList(::RPG::Client::ComposeItemData* composeData, ::System::UInt32 composeCount, ::RPG::Client::ComposeItemCost* composeCost)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::System::UInt32, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__GENERATECOSTMATERIALLIST_OFFSET))(this, composeData, composeCount, composeCost);
		}

		::System::Void _MergeMaterialListKind(::System::Collections::Generic::List_1<::RPG::Client::ComposeItemMaterial*>*& materialList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ComposeItemMaterial*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__MERGEMATERIALLISTKIND_OFFSET))(this, materialList);
		}

		::System::UInt32 GetMaxComposeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_GETMAXCOMPOSECOUNT_OFFSET))(this);
		}

		::System::UInt32 _GetAcceleratedTypeMaxComposeCount(::RPG::Client::ComposeItemData* composeData, ::RPG::Client::ComposeItemCost* composeCost)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA__GETACCELERATEDTYPEMAXCOMPOSECOUNT_OFFSET))(this, composeData, composeCost);
		}

		::System::Boolean HasEquivalentExchangeItemCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA_HASEQUIVALENTEXCHANGEITEMCOMPOSE_OFFSET))(this);
		}
	};
}
