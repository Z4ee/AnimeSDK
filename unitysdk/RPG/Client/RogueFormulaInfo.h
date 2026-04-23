#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF9832A6EE2A67F_2;
class Class_1_5C515068BE5E20F8;
class Class_1_B0AC3B827E14971B;
class Class_1_D1E0AD3915BCCF29_104;
class Class_1_E30585F0EAEFDF1E_10;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULAINFO_ADDFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xB0360E0)
#define RPG_CLIENT_ROGUEFORMULAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xB035240)
#define RPG_CLIENT_ROGUEFORMULAINFO_CREATEGAMEPREVIEWBUFFCOUNTDATA_OFFSET UNITYSDK_OFFSET(0xB032ED0)
#define RPG_CLIENT_ROGUEFORMULAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB034E30)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETAFFECTEDFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xB036C40)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETALLFORMULADATA_OFFSET UNITYSDK_OFFSET(0xB036EA0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETALLULTIMATEFORMULAS_OFFSET UNITYSDK_OFFSET(0xB037720)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETROGUEFORMULADATA_OFFSET UNITYSDK_OFFSET(0xB036870)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xB037080)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDALLACTIVIATEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xB0373E0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDFORMULASONBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0xB037A40)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDSHOWNFORMULASBYSTATE_OFFSET UNITYSDK_OFFSET(0xB0371C0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_ACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xB038A20)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_BUFFCOUNTVALUE_OFFSET UNITYSDK_OFFSET(0xB038A40)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_INITIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xB038A00)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISFORMULAACHIEVED_OFFSET UNITYSDK_OFFSET(0xB036F90)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xB0257C0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xB025DB0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xB025960)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xB026340)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHBUFFCOUNTVALUE_OFFSET UNITYSDK_OFFSET(0xB035680)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHCONDITIONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB035C00)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xB0367C0)
#define RPG_CLIENT_ROGUEFORMULAINFO_REMOVEFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xB036600)
#define RPG_CLIENT_ROGUEFORMULAINFO_SET_ACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xB038A30)
#define RPG_CLIENT_ROGUEFORMULAINFO_SET_INITIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xB038A10)
#define RPG_CLIENT_ROGUEFORMULAINFO_SYNCFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xB035600)
#define RPG_CLIENT_ROGUEFORMULAINFO_TRYGETACTIVATEDULTIMATEFORMULA_OFFSET UNITYSDK_OFFSET(0xB037860)
#define RPG_CLIENT_ROGUEFORMULAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB034AB0)
#define RPG_CLIENT_ROGUEFORMULAINFO__GETSORTEDFORMULASONBUFFCHANGEIMPL_OFFSET UNITYSDK_OFFSET(0xB037C50)
#define RPG_CLIENT_ROGUEFORMULAINFO__ISINITIALFORMULA_OFFSET UNITYSDK_OFFSET(0xB036BB0)
#define RPG_CLIENT_ROGUEFORMULAINFO__REFRESHFORMULA_OFFSET UNITYSDK_OFFSET(0xB035F90)
#define RPG_CLIENT_ROGUEFORMULAINFO__RESETREFERENCETABLE_OFFSET UNITYSDK_OFFSET(0xB0369E0)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTOFORMULALIST_OFFSET UNITYSDK_OFFSET(0xB038530)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTYPEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xB038460)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEREQUIREDBUFFS_OFFSET UNITYSDK_OFFSET(0xB0361A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo_TypeDefinitionIndex = 61919;

	class RogueFormulaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _VeryNecessaryBuffRefTbl; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _InitialFormulas_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*>* _BuffTypeToFormulaList; // 0x20
		::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* _BuffCountValue_ReadOnly; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::Class_1_D1E0AD3915BCCF29_104*>* _ConditionModifiers; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BuffTypeMaxRequireCount; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _AchievedFormulas_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BuffCountValue; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _VeryInSuffBuffRefTbl; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _NecessaryBuffRefTbl; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _InSuffBuffRefTbl; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_CLEAR_OFFSET))(this);
		}

		::System::Void SyncFormulaInfo(::Class_1_5C515068BE5E20F8* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5C515068BE5E20F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SYNCFORMULAINFO_OFFSET))(this, info);
		}

		::System::Void AddFormulaItem(::Class_1_E30585F0EAEFDF1E_10* formulaProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ADDFORMULAITEM_OFFSET))(this, formulaProto);
		}

		::System::Boolean RemoveFormulaItem(::Class_1_E30585F0EAEFDF1E_10* formulaProto)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REMOVEFORMULAITEM_OFFSET))(this, formulaProto);
		}

		::System::Void RefreshFormulaItem(::Class_1_E30585F0EAEFDF1E_10* formulaProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHFORMULAITEM_OFFSET))(this, formulaProto);
		}

		::System::Void RefreshConditionModifiers(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_104*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_104*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHCONDITIONMODIFIERS_OFFSET))(this, proto);
		}

		::RPG::Client::RogueFormulaData* GetRogueFormulaData(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETROGUEFORMULADATA_OFFSET))(this, formulaID);
		}

		::System::Void RefreshBuffCountValue(::Class_1_4AF9832A6EE2A67F_2* valueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHBUFFCOUNTVALUE_OFFSET))(this, valueInfo);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAffectedFormulaIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* buffChangeCount)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETAFFECTEDFORMULAIDS_OFFSET))(this, buffChangeCount);
		}

		::Class_1_B0AC3B827E14971B* CreateGamePreviewBuffCountData(::System::UInt32 formulaID)
		{
			return ((::Class_1_B0AC3B827E14971B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_CREATEGAMEPREVIEWBUFFCOUNTDATA_OFFSET))(this, formulaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetAllFormulaData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETALLFORMULADATA_OFFSET))(this);
		}

		::System::Boolean IsFormulaAchieved(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISFORMULAACHIEVED_OFFSET))(this, formulaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedAchievedFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDACHIEVEDFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedShownFormulasByState(::System::Boolean isActivated)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDSHOWNFORMULASBYSTATE_OFFSET))(this, isActivated);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedAllActiviatedFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDALLACTIVIATEDFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetAllUltimateFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETALLULTIMATEFORMULAS_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* TryGetActivatedUltimateFormula()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_TRYGETACTIVATEDULTIMATEFORMULA_OFFSET))(this);
		}

		::System::Boolean IsInsufficientBuff(::System::UInt32 buffTypeID, ::System::Int32 changeCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISINSUFFICIENTBUFF_OFFSET))(this, buffTypeID, changeCount);
		}

		::System::Boolean IsVeryInsufficientBuff(::System::UInt32 buffTypeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISVERYINSUFFICIENTBUFF_OFFSET))(this, buffTypeID);
		}

		::System::Boolean IsNecessaryBuff(::System::UInt32 buffTypeID, ::System::Int32 changeCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISNECESSARYBUFF_OFFSET))(this, buffTypeID, changeCount);
		}

		::System::Boolean IsVeryNecessaryBuff(::System::UInt32 buffTypeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISVERYNECESSARYBUFF_OFFSET))(this, buffTypeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedFormulasOnBuffChange(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* selectedBuffs, ::System::Boolean isGet, ::System::Boolean includeUnaffected)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDFORMULASONBUFFCHANGE_OFFSET))(this, selectedBuffs, isGet, includeUnaffected);
		}

		::System::Void _RefreshFormula(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E30585F0EAEFDF1E_10*>* formulaList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E30585F0EAEFDF1E_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__REFRESHFORMULA_OFFSET))(this, formulaList);
		}

		::System::Boolean _IsInitialFormula(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__ISINITIALFORMULA_OFFSET))(this, formulaID);
		}

		::System::Void _UpdateRequiredBuffs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__UPDATEREQUIREDBUFFS_OFFSET))(this);
		}

		::System::Void _UpdateBuffTypeMaxCount(::System::UInt32 buffTypeID, ::System::Int32 requireCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTYPEMAXCOUNT_OFFSET))(this, buffTypeID, requireCount);
		}

		::System::Void _UpdateBuffToFormulaList(::RPG::Client::RogueFormulaData* formula)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTOFORMULALIST_OFFSET))(this, formula);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _GetSortedFormulasOnBuffChangeImpl(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* buffChangeCount, ::System::Boolean includeUnaffected)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__GETSORTEDFORMULASONBUFFCHANGEIMPL_OFFSET))(this, buffChangeCount, includeUnaffected);
		}

		::System::Void _ResetReferenceTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__RESETREFERENCETABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* get_InitialFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GET_INITIALFORMULAS_OFFSET))(this);
		}

		::System::Void set_InitialFormulas(::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SET_INITIALFORMULAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* get_AchievedFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GET_ACHIEVEDFORMULAS_OFFSET))(this);
		}

		::System::Void set_AchievedFormulas(::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SET_ACHIEVEDFORMULAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* get_BuffCountValue()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GET_BUFFCOUNTVALUE_OFFSET))(this);
		}
	};
}
