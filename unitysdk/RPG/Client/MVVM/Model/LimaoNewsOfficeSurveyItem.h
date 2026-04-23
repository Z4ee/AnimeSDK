#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_382479A119B6EF73;
class Class_1_A422F8F3BB2FEE61;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsLimaoData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsLocationData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyContentData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA72F4B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA72F740)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_FETCHFIRSTJUMPABLESUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA730880)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETBIGMAPICON_OFFSET UNITYSDK_OFFSET(0xA730AF0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETLIMAODATA_OFFSET UNITYSDK_OFFSET(0xA72FEF0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETLOACTIONDATA_OFFSET UNITYSDK_OFFSET(0xA7301C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0xA72FFB0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTDATAS_OFFSET UNITYSDK_OFFSET(0xA730650)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTID_OFFSET UNITYSDK_OFFSET(0xA7304E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA730360)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_DISPLAYREWARDID_OFFSET UNITYSDK_OFFSET(0xA72F920)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_FINISHCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0xA72FDB0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_HIDEREWARDAFTERSTART_OFFSET UNITYSDK_OFFSET(0xA72FA20)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_ISMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0xA730C30)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_LIMAOID_OFFSET UNITYSDK_OFFSET(0xA72F7F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_PICTUREPATH_OFFSET UNITYSDK_OFFSET(0xA72F810)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_SHOWCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0xA72FB30)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_STARTCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0xA72FC70)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_SURVEYID_OFFSET UNITYSDK_OFFSET(0xA72F7D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xA72F780)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_SET_LIMAOID_OFFSET UNITYSDK_OFFSET(0xA72F800)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_SET_SURVEYID_OFFSET UNITYSDK_OFFSET(0xA72F7E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA72F530)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__GETFIRSTJUMPABLESUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA730C90)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__GETFIRSTSTARTANDHASWAYPOINTSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA730D60)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__GETSURVEYROW_OFFSET UNITYSDK_OFFSET(0xA72F8C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__INITTRACKDATALIST_OFFSET UNITYSDK_OFFSET(0xA72F570)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyItem_TypeDefinitionIndex = 68523;

	class LimaoNewsOfficeSurveyItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_382479A119B6EF73*>* TrackDataList; // 0x10
		::RPG::Client::MVVM::Model::LimaoNewsLimaoData* _LimaoData; // 0x18
		::RPG::Client::MVVM::Model::LimaoNewsLocationData* _LocationData; // 0x20
		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* _SurveyTypeData; // 0x28
		::System::UInt32 _SurveyID_k__BackingField; // 0x30
		::System::UInt32 _LimaoId_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* Create(::System::UInt32 surveyID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_CREATE_OFFSET))(surveyID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::System::UInt32 limaoId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_REFRESH_OFFSET))(this, limaoId);
		}

		::System::UInt32 get_SurveyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_SURVEYID_OFFSET))(this);
		}

		::System::Void set_SurveyID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_SET_SURVEYID_OFFSET))(this, value);
		}

		::System::UInt32 get_LimaoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_LIMAOID_OFFSET))(this);
		}

		::System::Void set_LimaoId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_SET_LIMAOID_OFFSET))(this, value);
		}

		::System::String* get_PicturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_PICTUREPATH_OFFSET))(this);
		}

		::System::UInt32 get_DisplayRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_DISPLAYREWARDID_OFFSET))(this);
		}

		::System::Boolean get_HideRewardAfterStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_HIDEREWARDAFTERSTART_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ShowConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_SHOWCONDITIONIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_StartConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_STARTCONDITIONIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FinishConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_FINISHCONDITIONIDS_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsLimaoData* GetLimaoData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsLimaoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETLIMAODATA_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* GetSurveyTypeData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETSURVEYTYPEDATA_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsLocationData* GetLoactionData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsLocationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETLOACTIONDATA_OFFSET))(this);
		}

		::Class_1_A422F8F3BB2FEE61* _GetSurveyRow()
		{
			return ((::Class_1_A422F8F3BB2FEE61*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__GETSURVEYROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_DESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyContentData*>* get_CurContentDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyContentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTDATAS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CurContentID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::SubMissionData*>* FetchFirstJumpableSubMissionData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::SubMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_FETCHFIRSTJUMPABLESUBMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::IBigMapIcon* GetBigMapIcon()
		{
			return ((::RPG::Client::IBigMapIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GETBIGMAPICON_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* _GetFirstJumpableSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* mainMissionDataList)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__GETFIRSTJUMPABLESUBMISSIONDATA_OFFSET))(this, mainMissionDataList);
		}

		::RPG::Client::SubMissionData* _GetFirstStartAndHasWaypointSubMissionData(::RPG::Client::MainMissionData* mainMission)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__GETFIRSTSTARTANDHASWAYPOINTSUBMISSIONDATA_OFFSET))(this, mainMission);
		}

		::System::Void _InitTrackDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM__INITTRACKDATALIST_OFFSET))(this);
		}

		::System::Boolean get_IsMissionTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYITEM_GET_ISMISSIONTARGET_OFFSET))(this);
		}
	};
}
