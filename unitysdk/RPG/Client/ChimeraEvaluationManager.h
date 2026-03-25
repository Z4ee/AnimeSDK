#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_5;
class Class_1_1CDF0B156A2F4450;
class Class_1_6E708EAB438EC183_21;
class Class_1_8CF94E0F14A91ED3_3;
class Class_1_C5EC8F6B23A665DA;
class Class_1_E7C4009BCC22497A_6;
namespace RPG::Client { class ChimeraEvaluationData; }
namespace RPG::Client { class ChimeraEvaluationDisplayData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93B8BA0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETBESTEVALUATIONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x93BA090)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETCHIMERAEVALUATIONTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0x93BA430)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONDATA_OFFSET UNITYSDK_OFFSET(0x93B9BE0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0x93B85A0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x93B9CC0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERABESTEVALUATIONS_OFFSET UNITYSDK_OFFSET(0x93BA5C0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONDATALIST_OFFSET UNITYSDK_OFFSET(0x93BA560)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x93BA5E0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET UNITYSDK_OFFSET(0x93BA580)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0x93BA5A0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INCREASEEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x93B9D90)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x93B8700)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_ISCHIMERASATISFYEVALUATIONCONDITION_OFFSET UNITYSDK_OFFSET(0x93BA010)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERABESTEVALUATIONS_OFFSET UNITYSDK_OFFSET(0x93BA5D0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONDATALIST_OFFSET UNITYSDK_OFFSET(0x93BA570)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x93BA5F0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET UNITYSDK_OFFSET(0x93BA590)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCCHIMERA_OFFSET UNITYSDK_OFFSET(0x93B8C80)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEVALUATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x93B9890)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEXPIREEVALUATION_OFFSET UNITYSDK_OFFSET(0x93B9250)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_UPDATEEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x93B9ED0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x93BA600)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONDATA_OFFSET UNITYSDK_OFFSET(0x93B87B0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0x93B89E0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x93B8970)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__SYNCCHIMERAEVALUATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x93B8F90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationManager_TypeDefinitionIndex = 51560;

	class ChimeraEvaluationManager : public ::System::Object
	{
	public:
		::Class_1_1CDF0B156A2F4450* _Evaluator; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* _ChimeraEvaluationDataList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_5*>* _ChimeraEvaluationGroupDataList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* _ChimeraBestEvaluations_k__BackingField; // 0x28
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>* _ChimeraEvaluationProgressDataDict_k__BackingField; // 0x30

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

		::System::Void SyncChimera(::System::Collections::Generic::IEnumerable_1<::Class_1_C5EC8F6B23A665DA*>* chimeras)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C5EC8F6B23A665DA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCCHIMERA_OFFSET))(this, chimeras);
		}

		::System::Void SyncExpireEvaluation(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>>* expireEvaluations)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_6E708EAB438EC183_21*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEXPIREEVALUATION_OFFSET))(this, expireEvaluations);
		}

		::System::Void SyncEvaluationProgress(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>>* evaluationProgresses)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_6*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEVALUATIONPROGRESS_OFFSET))(this, evaluationProgresses);
		}

		::RPG::Client::ChimeraEvaluationData* GetEvaluationData(::System::UInt32 evaluationID)
		{
			return ((::RPG::Client::ChimeraEvaluationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONDATA_OFFSET))(this, evaluationID);
		}

		::Class_1_8CF94E0F14A91ED3_3* GetEvaluationProgressData(::System::UInt32 chimeraID, ::System::UInt32 evaluationID)
		{
			return ((::Class_1_8CF94E0F14A91ED3_3*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONPROGRESSDATA_OFFSET))(this, chimeraID, evaluationID);
		}

		::Class_1_1B7044A592B17773_5* GetEvaluationGroupData(::System::UInt32 groupID)
		{
			return ((::Class_1_1B7044A592B17773_5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONGROUPDATA_OFFSET))(this, groupID);
		}

		::System::Void IncreaseEvaluationProgressData(::System::UInt32 chimeraID, ::System::UInt32 evaluationID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INCREASEEVALUATIONPROGRESSDATA_OFFSET))(this, chimeraID, evaluationID);
		}

		::System::Void UpdateEvaluationProgressData(::System::UInt32 chimeraID, ::System::UInt32 evaluationID, ::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_UPDATEEVALUATIONPROGRESSDATA_OFFSET))(this, chimeraID, evaluationID, progress);
		}

		::System::Boolean IsChimeraSatisfyEvaluationCondition(::System::UInt32 chimeraID, ::System::UInt32 evaluationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_ISCHIMERASATISFYEVALUATIONCONDITION_OFFSET))(this, chimeraID, evaluationID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* GetBestEvaluationChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETBESTEVALUATIONCHIMERAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetChimeraEvaluationTextParams(::System::UInt32 evaluationID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETCHIMERAEVALUATIONTEXTPARAMS_OFFSET))(this, evaluationID);
		}

		::System::Void _SyncChimeraEvaluationProgress(::System::UInt32 chimeraID, ::Class_1_E7C4009BCC22497A_6* chimeraEvaluationProgressList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E7C4009BCC22497A_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__SYNCCHIMERAEVALUATIONPROGRESS_OFFSET))(this, chimeraID, chimeraEvaluationProgressList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* get_ChimeraEvaluationDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONDATALIST_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationDataList(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>* get_ChimeraEvaluationProgressDataDict()
		{
			return ((::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationProgressDataDict(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_8CF94E0F14A91ED3_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ChimeraSatisfyEvaluationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* get_ChimeraBestEvaluations()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERABESTEVALUATIONS_OFFSET))(this);
		}

		::System::Void set_ChimeraBestEvaluations(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERABESTEVALUATIONS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_5*>* get_ChimeraEvaluationGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationGroupDataList(::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_5*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1B7044A592B17773_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET))(this, value);
		}
	};
}
