#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_97;
class Class_1_285C0F86751F7560_10;
class Class_1_72CF20F2C61BB51A;
class Class_1_B0AC3B827E14971B;
class Class_1_BD2C8496C23D4C2D_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULAINFO_ADDFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xA2FF3D0)
#define RPG_CLIENT_ROGUEFORMULAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2FE530)
#define RPG_CLIENT_ROGUEFORMULAINFO_CREATEGAMEPREVIEWBUFFCOUNTDATA_OFFSET UNITYSDK_OFFSET(0xA2FC1C0)
#define RPG_CLIENT_ROGUEFORMULAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2FE120)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETAFFECTEDFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xA2FFF30)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETALLFORMULADATA_OFFSET UNITYSDK_OFFSET(0xA300190)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETALLULTIMATEFORMULAS_OFFSET UNITYSDK_OFFSET(0xA300A10)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETROGUEFORMULADATA_OFFSET UNITYSDK_OFFSET(0xA2FFB60)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xA300370)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDALLACTIVIATEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xA3006D0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDFORMULASONBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0xA300D30)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDSHOWNFORMULASBYSTATE_OFFSET UNITYSDK_OFFSET(0xA3004B0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_ACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xA301D10)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_BUFFCOUNTVALUE_OFFSET UNITYSDK_OFFSET(0xA301D30)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_INITIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xA301CF0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISFORMULAACHIEVED_OFFSET UNITYSDK_OFFSET(0xA300280)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xA2EEAD0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xA2EF0C0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xA2EEC70)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xA2EF650)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHBUFFCOUNTVALUE_OFFSET UNITYSDK_OFFSET(0xA2FE970)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHCONDITIONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA2FEEF0)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xA2FFAB0)
#define RPG_CLIENT_ROGUEFORMULAINFO_REMOVEFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xA2FF8F0)
#define RPG_CLIENT_ROGUEFORMULAINFO_SET_ACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xA301D20)
#define RPG_CLIENT_ROGUEFORMULAINFO_SET_INITIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xA301D00)
#define RPG_CLIENT_ROGUEFORMULAINFO_SYNCFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xA2FE8F0)
#define RPG_CLIENT_ROGUEFORMULAINFO_TRYGETACTIVATEDULTIMATEFORMULA_OFFSET UNITYSDK_OFFSET(0xA300B50)
#define RPG_CLIENT_ROGUEFORMULAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FDDA0)
#define RPG_CLIENT_ROGUEFORMULAINFO__GETSORTEDFORMULASONBUFFCHANGEIMPL_OFFSET UNITYSDK_OFFSET(0xA300F40)
#define RPG_CLIENT_ROGUEFORMULAINFO__ISINITIALFORMULA_OFFSET UNITYSDK_OFFSET(0xA2FFEA0)
#define RPG_CLIENT_ROGUEFORMULAINFO__REFRESHFORMULA_OFFSET UNITYSDK_OFFSET(0xA2FF280)
#define RPG_CLIENT_ROGUEFORMULAINFO__RESETREFERENCETABLE_OFFSET UNITYSDK_OFFSET(0xA2FFCD0)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTOFORMULALIST_OFFSET UNITYSDK_OFFSET(0xA301820)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTYPEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA301750)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEREQUIREDBUFFS_OFFSET UNITYSDK_OFFSET(0xA2FF490)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo_TypeDefinitionIndex = 54731;

	class RogueFormulaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _AchievedFormulas_k__BackingField; // 0x10
		::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* _BuffCountValue_ReadOnly; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::Class_1_120319518E6F6581_97*>* _ConditionModifiers; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*>* _BuffTypeToFormulaList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _NecessaryBuffRefTbl; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BuffCountValue; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _InitialFormulas_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _VeryInSuffBuffRefTbl; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _VeryNecessaryBuffRefTbl; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BuffTypeMaxRequireCount; // 0x58
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

		::System::Void SyncFormulaInfo(::Class_1_72CF20F2C61BB51A* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_72CF20F2C61BB51A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SYNCFORMULAINFO_OFFSET))(this, info);
		}

		::System::Void AddFormulaItem(::Class_1_285C0F86751F7560_10* formulaProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_285C0F86751F7560_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ADDFORMULAITEM_OFFSET))(this, formulaProto);
		}

		::System::Boolean RemoveFormulaItem(::Class_1_285C0F86751F7560_10* formulaProto)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_285C0F86751F7560_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REMOVEFORMULAITEM_OFFSET))(this, formulaProto);
		}

		::System::Void RefreshFormulaItem(::Class_1_285C0F86751F7560_10* formulaProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_285C0F86751F7560_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHFORMULAITEM_OFFSET))(this, formulaProto);
		}

		::System::Void RefreshConditionModifiers(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_97*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHCONDITIONMODIFIERS_OFFSET))(this, proto);
		}

		::RPG::Client::RogueFormulaData* GetRogueFormulaData(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETROGUEFORMULADATA_OFFSET))(this, formulaID);
		}

		::System::Void RefreshBuffCountValue(::Class_1_BD2C8496C23D4C2D_2* valueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHBUFFCOUNTVALUE_OFFSET))(this, valueInfo);
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

		::System::Void _RefreshFormula(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_285C0F86751F7560_10*>* formulaList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_285C0F86751F7560_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__REFRESHFORMULA_OFFSET))(this, formulaList);
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
