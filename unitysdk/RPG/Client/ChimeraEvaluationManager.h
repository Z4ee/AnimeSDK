#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_24;
class Class_1_1CDF0B156A2F4450;
class Class_1_3E926525914B2E70;
class Class_1_8CF94E0F14A91ED3_3;
class Class_1_97E659ED8D5D259C_10;
class Class_1_D40936EF3BF54118_13;
namespace RPG::Client { class ChimeraEvaluationData; }
namespace RPG::Client { class ChimeraEvaluationDisplayData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBF7620)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETBESTEVALUATIONCHIMERAS_OFFSET UNITYSDK_OFFSET(0xCBF9510)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETCHIMERAEVALUATIONTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0xCBF9950)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONDATA_OFFSET UNITYSDK_OFFSET(0xCBF8FC0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCBF6E70)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCBF90B0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERABESTEVALUATIONS_OFFSET UNITYSDK_OFFSET(0xCBF9BA0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONDATALIST_OFFSET UNITYSDK_OFFSET(0xCBF9B10)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xCBF9BC0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET UNITYSDK_OFFSET(0xCBF9B30)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xCBF9B50)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INCREASEEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCBF9180)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCBF6FE0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_ISCHIMERASATISFYEVALUATIONCONDITION_OFFSET UNITYSDK_OFFSET(0xCBF9490)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERABESTEVALUATIONS_OFFSET UNITYSDK_OFFSET(0xCBF9BB0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONDATALIST_OFFSET UNITYSDK_OFFSET(0xCBF9B20)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xCBF9BD0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET UNITYSDK_OFFSET(0xCBF9B40)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCCHIMERA_OFFSET UNITYSDK_OFFSET(0xCBF7720)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEVALUATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xCBF8AF0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEXPIREEVALUATION_OFFSET UNITYSDK_OFFSET(0xCBF7FC0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_UPDATEEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCBF9300)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCBF9BE0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONDATA_OFFSET UNITYSDK_OFFSET(0xCBF7090)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCBF7390)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCBF7320)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__SYNCCHIMERAEVALUATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xCBF7BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationManager_TypeDefinitionIndex = 63552;

	class ChimeraEvaluationManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* _ChimeraBestEvaluations_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* _ChimeraEvaluationDataList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_10*>* _ChimeraEvaluationGroupDataList_k__BackingField; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>* _ChimeraEvaluationProgressDataDict_k__BackingField; // 0x28
		::Class_1_1CDF0B156A2F4450* _Evaluator; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitChimeraEvaluationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONDATA_OFFSET))(this);
		}

		::System::Void _InitChimeraEvaluationProgressData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONPROGRESSDATA_OFFSET))(this);
		}

		::System::Void _InitChimeraEvaluationGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONGROUPDATA_OFFSET))(this);
		}

		::System::Void SyncChimera(::System::Collections::Generic::IEnumerable_1<::Class_1_3E926525914B2E70*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3E926525914B2E70*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCCHIMERA_OFFSET))(this, a1);
		}

		::System::Void SyncExpireEvaluation(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_075C34D03AFA1215_24*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_075C34D03AFA1215_24*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEXPIREEVALUATION_OFFSET))(this, a1);
		}

		::System::Void SyncEvaluationProgress(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEVALUATIONPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraEvaluationData* GetEvaluationData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraEvaluationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONDATA_OFFSET))(this, a1);
		}

		::Class_1_8CF94E0F14A91ED3_3* GetEvaluationProgressData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_8CF94E0F14A91ED3_3*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONPROGRESSDATA_OFFSET))(this, a1, a2);
		}

		::Class_1_97E659ED8D5D259C_10* GetEvaluationGroupData(::System::UInt32 a1)
		{
			return ((::Class_1_97E659ED8D5D259C_10*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONGROUPDATA_OFFSET))(this, a1);
		}

		::System::Void IncreaseEvaluationProgressData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INCREASEEVALUATIONPROGRESSDATA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateEvaluationProgressData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_UPDATEEVALUATIONPROGRESSDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsChimeraSatisfyEvaluationCondition(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_ISCHIMERASATISFYEVALUATIONCONDITION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* GetBestEvaluationChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETBESTEVALUATIONCHIMERAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetChimeraEvaluationTextParams(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETCHIMERAEVALUATIONTEXTPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SyncChimeraEvaluationProgress(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_13* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__SYNCCHIMERAEVALUATIONPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* get_ChimeraEvaluationDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONDATALIST_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationDataList(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>* get_ChimeraEvaluationProgressDataDict()
		{
			return ((::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationProgressDataDict(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ChimeraSatisfyEvaluationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* get_ChimeraBestEvaluations()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERABESTEVALUATIONS_OFFSET))(this);
		}

		::System::Void set_ChimeraBestEvaluations(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERABESTEVALUATIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_10*>* get_ChimeraEvaluationGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationGroupDataList(::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_10*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET))(this, a1);
		}
	};
}
