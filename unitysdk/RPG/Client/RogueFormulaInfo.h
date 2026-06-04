#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_2C8DDB37F88B4DBC_2;
class Class_1_4AF9832A6EE2A67F_3;
class Class_1_5C515068BE5E20F8;
class Class_1_B0AC3B827E14971B;
class Class_1_D1E0AD3915BCCF29_108;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULAINFO_ADDFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xC7820D0)
#define RPG_CLIENT_ROGUEFORMULAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC7810E0)
#define RPG_CLIENT_ROGUEFORMULAINFO_CREATEGAMEPREVIEWBUFFCOUNTDATA_OFFSET UNITYSDK_OFFSET(0xC77ED40)
#define RPG_CLIENT_ROGUEFORMULAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC780D80)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETAFFECTEDFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xC782DB0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETALLFORMULADATA_OFFSET UNITYSDK_OFFSET(0xC783060)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETALLULTIMATEFORMULAS_OFFSET UNITYSDK_OFFSET(0xC783A40)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETROGUEFORMULADATA_OFFSET UNITYSDK_OFFSET(0xC7829F0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xC783260)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDALLACTIVIATEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xC783610)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDFORMULASONBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0xC783DA0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDSHOWNFORMULASBYSTATE_OFFSET UNITYSDK_OFFSET(0xC7833C0)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_ACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xC785000)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_BUFFCOUNTVALUE_OFFSET UNITYSDK_OFFSET(0xC785020)
#define RPG_CLIENT_ROGUEFORMULAINFO_GET_INITIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xC784FE0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISFORMULAACHIEVED_OFFSET UNITYSDK_OFFSET(0xC783150)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xC770960)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xC770FB0)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xC770B30)
#define RPG_CLIENT_ROGUEFORMULAINFO_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xC771560)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHBUFFCOUNTVALUE_OFFSET UNITYSDK_OFFSET(0xC781460)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHCONDITIONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xC781A30)
#define RPG_CLIENT_ROGUEFORMULAINFO_REFRESHFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xC782930)
#define RPG_CLIENT_ROGUEFORMULAINFO_REMOVEFORMULAITEM_OFFSET UNITYSDK_OFFSET(0xC782770)
#define RPG_CLIENT_ROGUEFORMULAINFO_SET_ACHIEVEDFORMULAS_OFFSET UNITYSDK_OFFSET(0xC785010)
#define RPG_CLIENT_ROGUEFORMULAINFO_SET_INITIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xC784FF0)
#define RPG_CLIENT_ROGUEFORMULAINFO_SYNCFORMULAINFO_OFFSET UNITYSDK_OFFSET(0xC7813E0)
#define RPG_CLIENT_ROGUEFORMULAINFO_TRYGETACTIVATEDULTIMATEFORMULA_OFFSET UNITYSDK_OFFSET(0xC783BA0)
#define RPG_CLIENT_ROGUEFORMULAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7809E0)
#define RPG_CLIENT_ROGUEFORMULAINFO__GETSORTEDFORMULASONBUFFCHANGEIMPL_OFFSET UNITYSDK_OFFSET(0xC784000)
#define RPG_CLIENT_ROGUEFORMULAINFO__ISINITIALFORMULA_OFFSET UNITYSDK_OFFSET(0xC782D20)
#define RPG_CLIENT_ROGUEFORMULAINFO__REFRESHFORMULA_OFFSET UNITYSDK_OFFSET(0xC781D90)
#define RPG_CLIENT_ROGUEFORMULAINFO__RESETREFERENCETABLE_OFFSET UNITYSDK_OFFSET(0xC782B90)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTOFORMULALIST_OFFSET UNITYSDK_OFFSET(0xC784A40)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTYPEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xC784910)
#define RPG_CLIENT_ROGUEFORMULAINFO__UPDATEREQUIREDBUFFS_OFFSET UNITYSDK_OFFSET(0xC782360)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo_TypeDefinitionIndex = 62852;

	class RogueFormulaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*>* _BuffTypeToFormulaList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BuffTypeMaxRequireCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BuffCountValue; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _AchievedFormulas_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::Class_1_D1E0AD3915BCCF29_108*>* _ConditionModifiers; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _InSuffBuffRefTbl; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _VeryNecessaryBuffRefTbl; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _InitialFormulas_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _NecessaryBuffRefTbl; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _VeryInSuffBuffRefTbl; // 0x58
		::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* _BuffCountValue_ReadOnly; // 0x60

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

		::System::Void SyncFormulaInfo(::Class_1_5C515068BE5E20F8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5C515068BE5E20F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SYNCFORMULAINFO_OFFSET))(this, a1);
		}

		::System::Void AddFormulaItem(::Class_1_2C8DDB37F88B4DBC_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C8DDB37F88B4DBC_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ADDFORMULAITEM_OFFSET))(this, a1);
		}

		::System::Boolean RemoveFormulaItem(::Class_1_2C8DDB37F88B4DBC_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2C8DDB37F88B4DBC_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REMOVEFORMULAITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshFormulaItem(::Class_1_2C8DDB37F88B4DBC_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C8DDB37F88B4DBC_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHFORMULAITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshConditionModifiers(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_108*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_108*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHCONDITIONMODIFIERS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueFormulaData* GetRogueFormulaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETROGUEFORMULADATA_OFFSET))(this, a1);
		}

		::System::Void RefreshBuffCountValue(::Class_1_4AF9832A6EE2A67F_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_REFRESHBUFFCOUNTVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAffectedFormulaIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETAFFECTEDFORMULAIDS_OFFSET))(this, a1);
		}

		::Class_1_B0AC3B827E14971B* CreateGamePreviewBuffCountData(::System::UInt32 a1)
		{
			return ((::Class_1_B0AC3B827E14971B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_CREATEGAMEPREVIEWBUFFCOUNTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetAllFormulaData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETALLFORMULADATA_OFFSET))(this);
		}

		::System::Boolean IsFormulaAchieved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISFORMULAACHIEVED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedAchievedFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDACHIEVEDFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedShownFormulasByState(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDSHOWNFORMULASBYSTATE_OFFSET))(this, a1);
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

		::System::Boolean IsInsufficientBuff(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISINSUFFICIENTBUFF_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsVeryInsufficientBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISVERYINSUFFICIENTBUFF_OFFSET))(this, a1);
		}

		::System::Boolean IsNecessaryBuff(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISNECESSARYBUFF_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsVeryNecessaryBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_ISVERYNECESSARYBUFF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetSortedFormulasOnBuffChange(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GETSORTEDFORMULASONBUFFCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshFormula(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2C8DDB37F88B4DBC_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2C8DDB37F88B4DBC_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__REFRESHFORMULA_OFFSET))(this, a1);
		}

		::System::Boolean _IsInitialFormula(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__ISINITIALFORMULA_OFFSET))(this, a1);
		}

		::System::Void _UpdateRequiredBuffs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__UPDATEREQUIREDBUFFS_OFFSET))(this);
		}

		::System::Void _UpdateBuffTypeMaxCount(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTYPEMAXCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateBuffToFormulaList(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__UPDATEBUFFTOFORMULALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* _GetSortedFormulasOnBuffChangeImpl(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__GETSORTEDFORMULASONBUFFCHANGEIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void _ResetReferenceTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO__RESETREFERENCETABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* get_InitialFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GET_INITIALFORMULAS_OFFSET))(this);
		}

		::System::Void set_InitialFormulas(::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SET_INITIALFORMULAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* get_AchievedFormulas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GET_ACHIEVEDFORMULAS_OFFSET))(this);
		}

		::System::Void set_AchievedFormulas(::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_SET_ACHIEVEDFORMULAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* get_BuffCountValue()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO_GET_BUFFCOUNTVALUE_OFFSET))(this);
		}
	};
}
